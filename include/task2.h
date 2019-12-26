#pragma once

template<typename T, int N>
T* createArr(T(*generator)()){
	T* arr = new T[N];
	for (int i = 0; i < N; i++){
		arr[i] = generator();
	}
	return arr;
}