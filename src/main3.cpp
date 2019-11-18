#include <iostream>
#include <cstdlib>
#include "task3.h"
using namespace std;

template<typename T>
T change(T a) {
	return a+1;
}

template <typename T>
void printArray(const T* arr, int count)
{
	for (int i = 0; i < count; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	const int N = 12;
	int arr[N] = { 7,7,-1,-1,4,4,4,2,4,4,-1,-1 };
	map<int,N>(arr, change);
	printArray(arr, N);
	return 0;
}