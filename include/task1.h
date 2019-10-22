#ifndef task_h
#define task_h
#include <iostream>

template<class T>
bool cmp(T a, T b)
{
	return a < b;
}

template<>
bool cmp(char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template<class T>
void mSort(T* a, int n)
{
	int step = 1;
	T* temp = new T[n];
	while (step < n)
	{
		int index = 0;
		int l = 0;
		int m = l + step;
		int r = l + step * 2;
		do
		{
			if (m > n)
				m = n;
			if (r > n)
				r = n;
			//m = m < n ? m : n;
			//r = r < n ? r : n;
			int i1 = l, i2 = m;
			for (; i1 < m && i2 < r; )
			{
				if (cmp(a[i1], a[i2])) //a[i1] < a[i2] 
				{
					temp[index++] = a[i1++];
				}
				else 
				{
					temp[index++] = a[i2++];
				}
			}
			while (i1 < m) 
				temp[index++] = a[i1++];
			while (i2 < r) 
				temp[index++] = a[i2++];
			l += step * 2;
			m += step * 2;
			r += step * 2;
		} while (l < n);
		for (int i = 0; i < n; i++)
			a[i] = temp[i];
		step *= 2;
	}
}

#endif