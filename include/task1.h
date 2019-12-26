#pragma once
#include <iostream>
#include <string.h>


template<class T>
bool compare(T left, T right) {
	return left < right;
}
template<>
bool compare<char*>(char* left, char* right) {
	return strlen(left) < strlen(right);
}

template<class T>
void merge(T* mas, int left, int right) {
	int mid = (right + left) / 2;

	if (left == right)
		return;

	merge(mas, left, mid);
	merge(mas, mid + 1, right);

	int itl = left;
	int itr = mid + 1;
	int cnt = 0;
	T* res = new T[right - left + 1];

	while ((itl <= mid) && (itr <= right)) {
		if (compare(mas[itl], mas[itr])) {
			res[cnt] = mas[itl];
			itl++;
		}
		else {
			res[cnt] = mas[itr];
			itr++;
		}
		cnt++;
	}

	while (itl <= mid) {
		res[cnt] = mas[itl];
		itl++;
		cnt++;
	}
	while (itr <= right) {
		res[cnt] = mas[itr];
		itr++;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		mas[left + i] = res[i];
	}
	delete[] res;
}


template<class T>
void msort(T* mas, int len) {
	merge(mas, 0, len - 1);
}