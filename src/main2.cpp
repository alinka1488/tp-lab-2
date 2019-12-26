#include "stdlib.h"
#include <iostream>

#include "task2.h"

#if true
int32_t gen()
{
	return rand() % 10;
};

int32_t main()
{
	int32_t *array = createArr<int32_t, 10>(gen);
	for (int32_t i = 0; i < 10; i++)
		std::cout << array[i] << std::endl;

	delete[] array;
	return 0;
};
#endif
