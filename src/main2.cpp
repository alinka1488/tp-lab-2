#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task2.h"
using namespace std;

template<class T>
T gen() {
	return rand() % 10;
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
	srand(time(NULL));
	const int N = 10;
	int* arr = createArr<int, N>(gen);
	printArray(arr,N);

	return 0;
}