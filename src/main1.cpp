#include<string.h>
#include<iostream>
#include"task1.h"
#define dim 10

int main() {
	int a[dim] = { 0 };
	for (int i = 0; i < dim; i++)
	{
		a[i] = (rand() % 100);
		std::cout << a[i] << " ";
	}
	msort<int>(a, dim);
	std::cout << "\n";
	for (int i = 0; i < dim; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	char str[] = "qwerty";
	msort<char>(str, strlen(str));
	for (int i = 0; i < strlen(str); i++) {
		std::cout << str[i];
	}
	std::cout << "\n";
	char* s[6]{ (char*)"aaaaa", (char*)"aaaa", (char*)"aa", (char*)"a", (char*)"a", (char*)"aaa" };
	msort<char*>(s, 6);
	for (int i = 0; i < 6; i++) {
		std::cout << s[i] << " ";
	}
	return 0;
}
