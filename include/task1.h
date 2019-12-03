#pragma once
#include <iostream>
#include <string.h>


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
void msort(T mas[], int size){
	if (size < 2)
		return;
	msort(mas, size / 2);
	msort(mas + size / 2, size - size / 2);
	T* buf = new T[size];
	int left = 0;
	int right = size / 2;
	int count = 0;
	while(left < size / 2 && right < size){
		if(cmp(mas[left], mas[right]) == 1)
			buf[count++] = mas[left++];
		else
			buf[count++] = mas[right++];
	}
	while (left < size / 2)
        buf[count++] = mas[left++];
    while (right < size)
        buf[count++] = mas[right++];
	for (int i = 0; i < size; i++)
		mas[i] = buf[i];
}
