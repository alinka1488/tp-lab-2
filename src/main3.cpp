#include "task3.h"
#include <iostream>

using namespace std;

template <typename T>
T change(T value) {
	return value + (rand() % 100);;
}

char* change(char* str) {
	for (int i = 0; i < strlen(str); i++)
		str[i] = str[i] + (rand() % 10);;

	return str;

}

int main() 
{
	
	int size = 5;
	char arr[5]{ '5', '8', '9', '0', '1' };
	map<char, 5>(arr, change);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	

}