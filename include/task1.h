#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>

template <typename T>
int prov(T a, T b)
{
	if (a < b)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int prov(char* a, char* b)
{
	if (strlen(a) < strlen(b))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


template <typename T>
void mersort(T* mas, int first, int last)
{
	if (first == last)
	{
		return;
	}
	int middle, size, left, right;

	middle = (first + last) / 2;
	mersort(mas, first, middle);
	mersort(mas, middle + 1, last);
	size = last - first + 1;
	left = first;
	right = middle + 1;
	T* tmp = new T[size];

	for (int i = 0; i < size; i++)
	{
		if ((right > last) || ((left <= middle) && (prov(mas[left], mas[right]))))
		{
			tmp[i] = mas[left];
			left++;
		}
		else
		{
			tmp[i] = mas[right];
			right++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		mas[first + i] = tmp[i];
	}

}

template <typename T>
void msort(T* mas, int size)
{
	mersort(mas, 0, size - 1);
}

#endif