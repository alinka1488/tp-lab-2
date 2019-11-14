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
	char num[6] = { '0', '1', '2', '3', '4', '5' };
	const int size1 = sizeof(ar) / sizeof(double);
	const int size2 = sizeof(array) / sizeof(int);
	//const int size3 = sizeof(val) / sizeof(char*);
	const int size4 = sizeof(num) / sizeof(char);
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
	print_array(num, size4);
	map<char, size4>(num, change);
	cout << "Mutable array" << endl;
	print_array(num, size4);
	cout << endl;
	
	cout << "Immutable array(+2)" << endl;
	const size_t n = 5;
	char* arr[n];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			arr[i][j] = '0' + j;
		}
		arr[i][i + 1] = '\0';
	}
	print_array(arr, 5);
	map<char*, n>(arr, change);
	cout << "Mutable array" << endl;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < strlen(arr[i]); j++) {
			cout << arr[i][j];
		}
		cout << " ";
	}

}
