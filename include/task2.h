#ifndef TASK2_H
#define TASK2_H
#pragma once


template < typename T, const int n >
T* createArr(T(*gen)())
{
	T *mas = new T[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = gen();
	}
	return mas;
}

#endif