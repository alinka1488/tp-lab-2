#pragma once
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

template<typename T, const int size> 
 T* createArr(T(*gen)()) {
	T* arr = new T[size];
	for (int i = 0; i < size; i++) {
		arr[i] = gen();
	}
	return arr;
}

