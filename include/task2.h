#ifndef TASK2_H
#define TASK2_H

#include <cstring>

template<class T>
T gen()
{
    return 2019;
}

template<typename T, const int array_length>
T *createArr(T (*gen)())
{
    T *dynamic_array = new T[array_length];
    for (size_t i = 0; i < array_length; i++)
        dynamic_array[i] = gen();
    return dynamic_array;
}

 #endif
