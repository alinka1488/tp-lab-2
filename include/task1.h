#pragma once
#include <iostream>
#include <cstring>
using namespace std;

template <typename T> void msort(T* mas, int left, int right);


template <typename T>
bool check(T a,T b)
{
	if (a < b)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool check(char* a, char* b)
{
	if (strlen(a) < strlen(b))
	{
		return true;
	}
	else
	{
		return false;
	}
}


template <typename T>
void msort(T* mas, int left,int right)
{
	if (left == right)
		return;
	int middle = (left + right) / 2;
	msort(mas, left, middle);
	msort(mas, middle + 1, right);
	int size = right - left + 1;
	int ltmp = left;
	int rtmp = middle + 1;
	T* tmp = new T[size];

	for (int step = 0; step < size; step++)
	{
		if ((rtmp > right) || ((ltmp <= middle) && (check(mas[ltmp], mas[rtmp]))))
		{
			tmp[step] = mas[ltmp];
			ltmp++;
		}
		else
		{
			tmp[step] = mas[rtmp];
			rtmp++;
		}
	}
	for (int step = 0; step < size; step++)
	{
		mas[left+step] = tmp[step];
	}

}

template <typename T>
void msort(T* mas, int size)
{
	mersort(mas, 0, size - 1);
}