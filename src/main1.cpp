
#include <iostream>
#include "task1.h"
using namespace std;


int main()
{
	const int n = 5;

	int array_i[n] = { 15, 72, 55, 29, 0 };
	msort<int>(array_i, n);
	for (int i = 0; i < n; i++)
	{
		cout << array_i[i] << ' ';
	}

	char *array_c[n] = { "I", "bebebeka", "love", "it", "*****" };
	msort<char*>(array_c, n);
	for (int i = 0; i < n; i++)
	{
		cout << array_c[i] << ' ';
	}
	cout << '\n';
	cin.get();
	return 0;
}
