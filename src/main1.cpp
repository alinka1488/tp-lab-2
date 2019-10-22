#include <iostream>
#include <string.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main()
{

	const size_t n = 5;
	int arr[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr, change);
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
	/*
	const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gen);
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
		*/
	/*
	char* val[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	double val2[6]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	int val3[6] = { 6,5,43,2,1,0 };
	mSort(val2, 6);
	for (int i = 0;i < 6;i++)
		cout << val2[i]<<" ";
	*/
}