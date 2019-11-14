#include "task1.h"


int main() {
	char k = '0';	
	double arr[] = { 1.1,-2.3,3.6,4774.78,-577575.7 };
	int array[] = { 1, 4,-2, 0, -4848 };
	char* val[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	int size1 = sizeof(arr) / sizeof(double);
	int size2 = sizeof(array) / sizeof(int);
	int size4 = sizeof(val) / sizeof(char*);
	cout << "Unsorted array: " << endl;
	print_array(arr, size1);
	msort(arr, size1);
	cout << "Sorted array: " << endl;
	print_array(arr, size1);
	cout << endl;
	cout << "Unsorted array: " << endl;
	print_array(array, size2);
	msort(array, size2);
	cout << "Sorted array: " << endl;
	print_array(array, size2);
	cout << endl;
	cout << "Unsorted array: "<< endl;
	print_array(val, size4);
	msort(val, size4);
	cout << "Sorted array: " << endl;
	print_array(val, size4);
	cout << endl;
	return 0;
}
