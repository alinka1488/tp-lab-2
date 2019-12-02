#include <string.h>
#include <iostream>

template<typename T> void msort(T* mas, int n) {
	if (n > 1) {
		int mid = n / 2, i = 0, j = 0, k = 0;
		T* left = new T[mid];
		T* right = new T[n - mid];
		for (i = 0; i < mid; i++) {
			left[i] = mas[i];
			right[i] = mas[mid + i];
		}
		if (n % 2 != 0) {
			right[mid] = mas[n - 1];
		}
		msort(left, mid);
		msort(right, n - mid);
		i = 0;
		for (; k < n; k++) {
			if (i > mid - 1) {
				mas[k] = right[j];
				j++;
			}
			else if (j > n - mid - 1) {
				mas[k] = left[i];
				i++;
			}
			else if (left[i] < right[j]) {
				mas[k] = left[i];
				i++;
			}
			else {
				mas[k] = right[j];
				j++;
			}
		}
		delete[] left;
		delete[] right;
	}
}
template<> void msort(char** mas, int n) {
	if (n > 1) {
		int mid = n / 2, i = 0, j = 0, k = 0;
		char** left = new char* [mid];
		char** right = new char* [n - mid];
		for (i = 0; i < mid; i++) {
			left[i] = mas[i];
			right[i] = mas[mid + i];
		}
		if (n % 2 != 0) {
			right[mid] = mas[n - 1];
		}
		msort(left, mid);
		msort(right, n - mid);
		i = 0;
		for (; k < n; k++) {
			if (i > mid - 1) {
				mas[k] = right[j];
				j++;
			}
			else if (j > n - mid - 1) {
				mas[k] = left[i];
				i++;
			}
			else if (strlen(left[i]) < strlen(right[j])) {
				mas[k] = left[i];
				i++;
			}
			else {
				mas[k] = right[j];
				j++;
			}
		}
		delete[] left;
		delete[] right;
	}

