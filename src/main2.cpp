#include <iostream>
#include "task2.h"

char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

int main()
{
	const size_t n = 6;
	char** aa=createArr<char*,n>(gen);
  for (int i=0;i<n;i++)
  	std::cout<<aa[i]<<" ";
	return 0;
}