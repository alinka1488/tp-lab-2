#include<iostream>
#include"task3.h"

using namespace std;

int main(){
	char arr[] = { '1', '2', '3' };
	const size_t size = 3;
	map<char, size>(arr, change);
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
}