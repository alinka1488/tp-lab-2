#include "task3.h"

template <typename T>
T change(T item) {
	return item + 2;
}

template <>
char* change(char* str) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		str[i] = str[i] + 1;
	}
	return str;
}

template <typename T> void print_array(T* parr, int size) {
	for (int i = 0; i < size; i++) {
		cout << parr[i] << " ";
	}
	cout << endl;
}

int main() {
	double ar[] = { 1.1,-2.3,3.6,4774.78,-577575.7};
	int array[] = { 1, 4,-2, 0, -4848 };	
	char numbers[6] = { '0', '1', '2', '3', '4', '5' };
	const int size1 = sizeof(ar) / sizeof(double);
	const int size2 = sizeof(array) / sizeof(int);
	//const int size3 = sizeof(val) / sizeof(char*);
	const int size4 = sizeof(numbers) / sizeof(char);
	cout << "Immutable array(+2)" << endl;
	print_array(ar, size1);	
	map<double, size1>(ar, change);
	cout << "Mutable array" << endl;
	print_array(ar, size1);
	cout << endl;

	cout << "Immutable array(+2)" << endl;
	print_array(array, size2);
	map<int, size2>(array, change);
	cout << "Mutable array" << endl;
	print_array(array, size2);
	cout << endl;

	cout << "Immutable array(+2)" << endl;
	print_array(numbers, size4);
	map<char, size4>(numbers, change);
	cout << "Mutable array" << endl;
	print_array(numbers, size4);
	cout << endl;
	
}
