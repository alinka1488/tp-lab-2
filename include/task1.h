#pragma once
#include <iostream>
#include <string.h>

template <typename T>
bool compare(T first, T second){
	return first < second;
}
template<>
bool compare<char*>(char* first, char* second){
	return strlen(first) < strlen(second);
}

template <typename T>
T* merge(T* arr, int left_end, int right_end){
	T* merged_arr = new T[right_end];
	int left_ind = 0;
	int right_ind = left_end;
	for (int k = 0; k < right_end; k++){
		if ((left_ind < left_end) && (right_ind < right_end)){
			if (compare(arr[left_ind], arr[right_ind])){
				merged_arr[k] = arr[left_ind];
				left_ind++;
			}
			else {
				merged_arr[k] = arr[right_ind];
				right_ind++;
			}
		}
		else if ((left_ind >= left_end) && (right_ind < right_end)){
			merged_arr[k] = arr[right_ind];
			right_ind++;
		}
		else if ((right_ind >= right_end) && (left_ind < left_end)){
			merged_arr[k] = arr[left_ind];
			left_ind++;
		}
	}
	return merged_arr;
}
template <typename T>
void msort(T* arr, int arr_size){
	if (arr_size > 1){ 
		msort(arr, arr_size / 2); //вызываем функцию, для левой...
		msort(arr + arr_size / 2, arr_size - arr_size / 2); //...и правой части исходного массива
	}
	T* temp_merged_arr = merge(arr, arr_size / 2, arr_size);
	for (int i = 0; i < arr_size; i++){
		arr[i] = temp_merged_arr[i];
	}
	delete[] temp_merged_arr;
}