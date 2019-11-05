#include <iostream>

#include "task1.h"

#if false
int32_t main()
{
	int *intArray = new int[10] { 10, 2, 8, 9, 3, 6, 7, 5, 4, 1 };
	msort<int32_t>(intArray, 10);
	for (int32_t i = 0; i < 10; i++)
		std::cout << intArray[i] << std::endl;

	const char **stringArray = new const char*[4]{ "1", "334", "333", "22" };
	msort<const char*>(stringArray, 4);
	for (int32_t i = 0; i < 4; i++)
		std::cout << stringArray[i] << std::endl;

	delete[] intArray;
	delete[] stringArray;
	return 0;
};
#endif
