#pragma once
#include <iostream>

using namespace std;

template <class T, const int N>
void map(T * Arr,T(*change)(T)) {
	
	for (int i = 0; i < N; i++)
	{
		Arr[i] = change(Arr[i]);

	}
}