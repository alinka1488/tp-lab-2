#include <iostream>
#include <string>
#include "task1.h"
using namespace std;

template <typename T>
void printArray(const T* arr, int count)
{
	for (int i = 0; i < count; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr_int[5] = { 10,8,6,4,2};
	double arr_double[5] = { 10.1,8.2,6.3,4.4,2.5 };
	char* arr_char[5] = { (char*)"first", (char*)"second",(char*)"the_third_one",(char*)"this_is_the_fourth",(char*)"and_this_is_the_end" };

	msort(arr_int, 5);
	printArray(arr_int,5);

	msort(arr_double, 5);
	printArray(arr_double, 5);

	msort(arr_char, 5);
	printArray(arr_char, 5);

	return 0;
}