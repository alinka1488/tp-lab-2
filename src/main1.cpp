#include <iostream>
#include "task1.h"

int main() 
{
	const size_t int_array_length = 10;
	int *int_array = new int[int_array_length]{15, 0, 1 ,40, 2, 9, 59, 43, 90, 4};
	msort(int_array, int_array_length);
	for(size_t i = 0; i < int_array_length; i++)
			std::cout<<int_array[i]<<" ";
	std::cout<<std::endl;

	const size_t float_array_length = 10;
	double *float_array = new float[float_array_length]{0.0, 2.4, 56.3, 7.12, 4.908, 700.56, 287.436, 63.90, 123.43, 493.10};
	msort(float_array, float_array_length);
	for(size_t i = 0; i < float_array_length; i++)
		std::cout<<float_array[i]<<" ";
	std::cout<<std::endl;

	const size_t char_array_length = 10;
	char* char_array[char_array_length]{(char*)"abcd", (char*)"abc", (char*)"ab", (char*)"a", (char*)"aaaaa", (char*)"aaaabbbb", (char*)"abababababab", (char*)"bbbbbbbbbb", (char*)"c", (char*)"d"};
	msort(char_array, char_array_length);
	for(size_t i = 0; i < char_array_length; i++)
		std::cout<<char_array[i]<<" ";
	return 0;
} 

