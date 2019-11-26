#pragma once
#include <cstdlib>
#include <string.h>

template<typename T, const int size>
T* createArr(T(*gen)()){
	T* mas = new T[size];
	for (int i = 0; i < size; i++){
		mas[i] = gen();
	}
	return mas;
}