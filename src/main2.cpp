#include "task2.h"
#include <iostream>

using namespace std;

int main() {
	char* arr = NULL;
	const size_t n = 7;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
}