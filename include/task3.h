#pragma once
#include <iostream>

using namespace std;

template <class T, const int N>
void map(T *arr, T(*change)(T)) {
	for (int i = 0; i < N; i++) {
		arr[i] = change(arr[i]);
	}
}