#include<stdlib.h>
#include<iostream>

template<typename T> void msort(T* arr, int size) {
	mmsort(T * arr, 0, size);
}

template<typename T> void mmsort(T* arr, int left, int right) {
	if (left == right){
		return;
	}
	int mid = (left + right) / 2; 
	mmsort(arr, left, mid);
	mmsort(arr, mid + 1, right);
	int i = left;  
	int j = mid + 1; 
	int* tmp = (int*)malloc(right * sizeof(int));
	for (int step = 0; step < right - left + 1; step++){
		if ((j > right) || ((i <= mid) && (arr[i] < arr[j]))){
			tmp[step] = arr[i];
			i++;
		}
		else{
			tmp[step] = arr[j];
			j++;
		}
	}
	for (int step = 0; step < right - left + 1; step++){
		arr[left + step] = tmp[step];
	}
}

template<> void mmsort(char** arr, int left, int right){
	if (left == right){
		return;
	} 
	int mid = (left + right) / 2; 
	mmsort(arr, left, mid);
	mmsort(arr, mid + 1, right);
	int i = left;  
	int j = mid + 1; 
	char** tmp = (char**)malloc(right * sizeof(char*));
	for (int step = 0; step < right - left + 1; step++){
		if ((j > right) || ((i <= mid) && (strlen(arr[i]) < strlen(arr[j]))))
		{
			tmp[step] = arr[i];
			i++;
		}
		else
		{
			tmp[step] = arr[j];
			j++;
		}
	}
	for (int step = 0; step < right - left + 1; step++) {
		arr[left + step] = tmp[step];
	}
}



