#include <stdlib.h>
#include <iostream>
#include "task2.h"
using namespace std;


template < typename T >
T gen()
{
	static T elem = 1;
	elem = elem * 2;
	return elem;
}

void main()
{
	const int n = 10;
	int *mas;
	mas = createArr<int, n>(gen);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", mas[i]);

	}

}