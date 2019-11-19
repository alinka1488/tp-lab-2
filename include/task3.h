#pragma once
#include <iostream>

using namespace std;
template<typename T, int size>
void map(T* mas, T(*change)(T))
{
	for (int i = 0; i < size; i++)
	{
		mas[i] = change(mas[i]);
	}
}
