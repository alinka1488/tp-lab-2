#include <iostream>
#include <stddef.h>
#include <stdlib.h>
#include <cstring>
#include <algorithm>
#include <iterator>
#include "task1.h"

int main()
{
	const size_t n = 5;
	int a[n] = {1,2,3,5,4};
	msort(a, n);
	for (int i=0; i<n; i++)
	    std::cout<<a[i]<<" ";
	const size_t nn = 17;
	char* b[nn]{(char*)"Из",(char*)"колхозной",(char*)"молодёжи",(char*)"панковал",(char*)"один",(char*)"лишь",(char*)"я",(char*)"Я",(char*)"носил",(char*)"портки",(char*)"из",(char*)"кожи",(char*)"и",(char*)"был",(char*)"грязным",(char*)"как",(char*)"свинья"};
	msort(b, nn);
	for (int i=0; i<nn; i++)
	    std::cout<<b[i]<<" ";
	return 0;
}