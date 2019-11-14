#pragma once
#include <string>
#include <iostream>
using namespace std;

template <typename T,const int size>
void map(T* arr, T(*change) (T)) {
	for (int i = 0; i < size; i++) {
		arr[i] = change(arr[i]);
	}
}

template <typename T> void print_array(T* parr, int size) {
	for (int i = 0; i < size; i++) {
		cout << parr[i] << " ";
	}
	cout << endl;
}