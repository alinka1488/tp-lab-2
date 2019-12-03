#include "task1.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int mas1[] = { 5, 1, 7, 8, 11 };
	char mas2[] = { 'f' , 'a' , 'b', 'y', 'o' };
	msort(mas1, 5);
	msort(mas2, 5);

	for (int i = 0; i < 5; i++)
	{

		cout << mas1[i] << ' ';
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{

		cout << mas2[i] << ' ';
	}
}
