#pragma once
#include <cstring>
#include <cstdlib>


template <typename T>
void merge(T* parr, int startLeft, int endLeft, int startRight, int endRight) {
	int sizeTemp = endRight - startLeft + 1;
	int start = startLeft;
	T* temporary = new T[sizeTemp];
	if (temporary) {
		for (int j = 0; j < sizeTemp; j++) {
			if ((startLeft <= endLeft) && ((startRight > endRight) || (parr[startLeft] < parr[startRight]))) {
				temporary[j] = parr[startLeft];
				startLeft++;
			}
			else {
				temporary[j] = parr[startRight];
				startRight++;
			}
		}
		for (int i = 0; i < sizeTemp;i++) {
			parr[i + start] = temporary[i];
		}
		delete[] temporary;
	}
}

template <> void merge(char** parr, int startLeft, int endLeft, int startRight, int endRight) {
	int sizeTemp = endRight - startLeft + 1;
	int start = startLeft;
	char** temporary = new char* [sizeTemp];
	if (temporary) {
		for (int j = 0; j < sizeTemp; j++) {
			if ((startLeft <= endLeft) && ((startRight > endRight) || (strlen(parr[startLeft]) < strlen(parr[startRight])))) {
				temporary[j] = parr[startLeft];
				startLeft++;
			}
			else {
				temporary[j] = parr[startRight];
				startRight++;
			}
		}
		for (int i = 0; i < sizeTemp;i++) {
			parr[i + start] = temporary[i];
		}
		delete[] temporary;
	}
}

template <typename T> void msort(T* parr, int size) {
	if (size > 1) {
		int middle = (size-1) / 2;
		msort(parr, middle+1);
		msort(parr+middle+1, size - (middle+1));
		merge(parr, 0, middle, middle+1, size-1);
	}
}



