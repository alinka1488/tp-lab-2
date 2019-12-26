#include <iostream>

#include "task3.h"

#if true
int32_t selector(int32_t item)
{
	return item * 2;
};

int32_t main()
{
	int32_t *array = new int32_t[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	map<int32_t, 10>(array, selector);
	for (int32_t i = 0; i < 10; i++)
		std::cout << array[i] << std::endl;

	delete[] array;
	return 0;
};
#endif
