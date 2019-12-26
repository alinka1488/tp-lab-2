#pragma once
#include <iostream>
#include <cstring>

template <typename T,int size>

T* createArr(T(*gen)(void))
{
	T* mas= new T[size];

	for (int i = 0;i < size; i++)
	{
		mas[i] = gen();
	}

	return mas;
}