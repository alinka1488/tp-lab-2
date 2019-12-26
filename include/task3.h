#pragma once

template<typename T, int N>
void map(T* arr, T (*changer)(T)){
	for (int i = 0; i < N; i++){
		arr[i] = changer(arr[i]);
	}
}