
#pragma once
#include <string.h>


template <typename T>
bool compare(T a, T b)
{
	return a < b;
}

template<>
bool compare(char* a, char* b)
{
	return strlen(a) < strlen(b);
}


template <typename T>
void msort(T* array, int left, int right)
{
	if (left == right)
		return;

	int middle = (left + right) / 2;

	msort(array, left, middle);
	msort(array, middle + 1, right);
	
	int l = left;
	int r = middle+1;
	T* tmp = new T[right - left + 1]; //temp array
	for (int step = 0; step < right - left + 1; step++)
	{
		if ((r > right) || (l <= middle && (compare(array[l], array[r]))))
		{
			tmp[step] = array[l];
			l++;
		}
		else
		{
			tmp[step] = array[r];
			r++;
		}
	}

	for (int step = 0; step < right - left + 1; step++)
		array[left + step] = tmp[step];
	delete[] tmp;
}

template <typename T>
void msort(T* array, int n)
{
	msort(array, 0, n - 1);
}
