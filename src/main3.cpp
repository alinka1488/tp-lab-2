#include <stdlib.h>
#include <iostream>
#include "task3.h"
using namespace std;

template < typename T >
T change(T elem)
{
	return elem * 2;
}

int main()
{
	const int n = 5;
	int mas[n] = {1, 2, 3, 4, 5};
	map<int, n>(mas, change);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", mas[i]);

	}

}
