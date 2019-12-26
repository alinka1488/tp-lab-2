#include <iostream>
#include "task2.h"
using namespace std;

template<typename T>
T gen(){
	T output = (rand() % 100);
	output = output / 10;
	return output;
}

int main(){
	int* arr1;
	double* arr2;
	const int N = 10;
	arr1 = createArr<int, N>(gen);
	for (int i = 0; i < N; i++){
		cout << arr1[i] << ' ';
	}
	cout << endl;
	arr2 = createArr<double, N>(gen);
	for (int i = 0; i < N; i++){
		cout << arr2[i] << ' ';
	}
	cout << endl;
	return 0;
}