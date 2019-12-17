#include <iostream>
#include "task3.h"

int main()
{
    const size_t int_array_length = 5;
    int int_array[int_array_length]{10, 20, 30, 40, 50};
    map<int, int_array_length>(int_array, change);
    for (size_t i = 0; i < int_array_length; i++)
        std::cout << int_array[i] << " ";
    std::cout << std::endl;

    const size_t double_array_length = 5;
    double double_array[double_array_length]{10.1, 5.5, 20.6, 31.5, 302.0};
    map<double, double_array_length>(double_array, change);
    for (size_t i = 0; i < double_array_length; i++)
        std::cout << double_array[i] << " ";
    return 0;
 }
