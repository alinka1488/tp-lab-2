#include <iostream>
#include "task3.h"
using namespace std;

template<typename T>
T change(T item){
	return item * 2;
}

int main(){
	const int N = 10;
	double arr[] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5 };
	map<double, N>(arr, change);
	for (int i = 0; i < N; i++){
		cout << arr[i] << ' ';
	}
	return 0;
}