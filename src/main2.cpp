#include "task2.h"



int main() {
	const int n = 5;
	char** arr;
	arr = createArr<char*, n>(gen);
	print_array(arr, n);
}
