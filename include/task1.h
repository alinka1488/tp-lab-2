#pragma once
#include <iostream>
#include <string.h>

template<typename T>
void swap(T* a, T* b){
	T k = a;
	a = b;
	b = k;
}

template<typename T>
bool cmp(T left, T right){
	if (left <= right)
		return 1;
	else
		return 0;
}

template<typename T>
bool cmp(char* left, char* right){
	if (strlen(left) <= strlen(right))
		return 1;
	else
		return 0;
}	

template<typename T>
void merge(T* mas, int first, int last){
	if (first == last)
		return;
	if (last - first == 1){
		if (cmp(mas[last], mas[first]) == 1)
			swap(mas[last], mas[first]);
	}
	int mid = (first + last)/2;
	merge(first, mid);
	merge(mid + 1, last);
	int size = last - first + 1;
	T* buf = new T[size];
	int start = first;
	int end = mid + 1;
	int count = 0;
	while(last - first + 1 != count){
		if(start > mid)
			buf[count++] = mas[end++];
		else if (end > last)
			buf[count++] = mas[start++];
		else if (cmp(mas[start],mas[end]) == 0)
			buf[count++] = mas[end++];
		else
			buf[count++] = mas[start++]
	}
	for (int i = 0; i < count; i++)
		mas[i + first] = buf[i];
}
