#ifndef task2_h
#define task2_h
#include <iostream>

template<class T, size_t n>
T* createArr(T (*gen)())
{
	T* arr = new T[n];
	for (int i = 0;i < n;i++)
	{
		arr[i] = gen();
	}
	return arr;
}
#endif
