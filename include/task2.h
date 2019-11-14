#pragma once
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

template<class T>
T gen()
{
	static int t = 8787;
	return t+=2;
}

template<>

char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template<typename T, const int size> 
 T* createArr(T(*gen)()) {
	T* arr = new T[size];
	for (int i = 0; i < size; i++) {
		arr[i] = gen();
	}
	return arr;
}

 template <typename T> void print_array(T* parr, int size) {
	 for (int i = 0; i < size; i++) {
		 cout << parr[i] << " ";
	 }
	 cout << endl;
 }