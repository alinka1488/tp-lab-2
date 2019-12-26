#include "task2.h"
#include <iostream>

using namespace std;

template<class T> T gen() {
	int tmp = 49;
	return tmp;
}

int main() {
	char* arr = NULL;
	const size_t n = 7;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
}