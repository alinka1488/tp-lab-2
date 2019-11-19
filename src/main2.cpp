#include "task2.h"

template <typename T> void print_array(T* parr, int size) {
	for (int i = 0; i < size; i++) {
		cout << parr[i] << " ";
	}
	cout << endl;
}

template<class T>
T gen()
{
	static int t = 8787;
	return t += 2;
}

template<>

char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i*2;
	s[t] = '\0';

	return s;
}

int main() {
	const int n = 5;
	char** arr;
	arr = createArr<char*, n>(gen);
	print_array(arr, n);
}
