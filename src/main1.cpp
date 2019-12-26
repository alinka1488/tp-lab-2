#include <iostream>
#include "task1.h"
using namespace std;

int main() {
	int arr1[] = {4, 6, 7, 1, 8, 3, 2 };
	msort(arr1, sizeof(arr1) / sizeof(arr1[0]));	
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){
		cout << arr1[i] << ' ';
	}
	cout << endl;
	char* arr2[] = { "hello", "hi", "misunderstanding", "I", "goodbye", "this_is_an_extremely_long_word_yes_it_is", "bye" };
	msort(arr2, sizeof(arr2) / sizeof(arr2[0]));
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++){
		cout << arr2[i] << ' ';
	}
	cout << endl;
	return 0;
}