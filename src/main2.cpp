#include "task2.h"


template<class T>
T gen(){
	static int t = 35;
	return t *= 2;
}

template<>
char* gen(){
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];
	for(size_t i = 0; i < t; i++)
		s[i] = '1' + i;
	s[t] = '\0';
	return s;
}

int main(){
	const int n = 9;
	char** arr;
	arr = createArr<char*, n>(gen);
	return 0;
}
