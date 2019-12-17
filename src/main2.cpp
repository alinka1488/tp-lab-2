#include <iostream>
#include "task2.h"

int main()
{
    const size_t array_length = 5;
    int* dynamic_array;
    dynamic_array = createArr<int, array_length>(my_gen);
    for (size_t i = 0; i < array_length; i++)
        std::cout << dynamic_array[i] << " ";
    return 0;
}
