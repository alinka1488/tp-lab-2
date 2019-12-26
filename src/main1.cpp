#include <iostream>

#include "task1.h"

#if true
int32_t main()
{
	int32_t *intArray = new int32_t[10] { 10, 2, 8, 9, 3, 6, 7, 5, 4, 1 };
	msort<int32_t>(intArray, 10);
	for (int32_t i = 0; i < 10; i++)
		std::cout << intArray[i] << std::endl;

	char **stringArray = new char*[6]{ (char *)"ffff", (char *)"fff2", (char *)"f", (char *)"ff", (char *)"vvv", (char *)"fffrr" };
	msort<char*>(stringArray, 6);
	for (int32_t i = 0; i < 6; i++)
		std::cout << stringArray[i] << std::endl;

	delete[] intArray;
	delete[] stringArray;

	return 0;
};
#endif
