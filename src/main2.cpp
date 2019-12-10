
#include "task2.h"
#include <iostream>
using namespace std;


int main() 
{
	const int n = 15;
	int *array = createArr<int, n>(gen);
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}
