#pragma once
#include <string.h>
template <typename T>
bool isLesser(T left, T right)
{
	return left < right;
}

template<>
bool isLesser<char*>(char* left, char* right) {
	return strlen(left) < strlen(right);
}

template <typename T>
void msort(T* arr, int n)
{
	int middle = n / 2;
	if (n > 1)
	{
		msort(arr, middle);
		msort(arr + middle, n - middle);
	}
	T* arr_buf = new T[n];
	int it_left = 0;
	int it_right = middle;
	int it_buf = 0;
	while ((it_left < middle) && (it_right < n))
	{
		if (isLesser(arr[it_left], arr[it_right]))
		{
			arr_buf[it_buf] = arr[it_left];
			it_buf++;
			it_left++;
		}
		else
		{
			arr_buf[it_buf] = arr[it_right];
			it_buf++;
			it_right++;
		}
	}
	while (it_left < middle)
	{
		arr_buf[it_buf] = arr[it_left];
		it_buf++;
		it_left++;
	}
	while (it_right < n)
	{
		arr_buf[it_buf] = arr[it_right];
		it_buf++;
		it_right++;
	}
	for (it_buf = 0; it_buf < n; it_buf++)
		arr[it_buf] = arr_buf[it_buf];
}

