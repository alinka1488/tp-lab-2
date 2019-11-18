//
// Created by artem on 12.11.2019.
//
#include "task2.h"
#include <iostream>

template<class T>
T gen(){
    return 123;
}

int main() {
    const size_t n = 10;
    auto *array = createArr<int, 10>(&gen);

    for (size_t i = 0; i < n; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    return 0;
}
