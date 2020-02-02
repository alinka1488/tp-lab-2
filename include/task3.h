#pragma once
#include <string.h>

template<typename T, const int size>
void map(T* mas, T(*change)(T)){
	for (int i = 0; i < size; i++)
		mas[i] = change(mas[i]);
}