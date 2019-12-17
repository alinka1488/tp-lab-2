#ifndef TASK3_H
#define TASK3_H

#include <cstring>

template<class T>
T my_change(T main_value)
{
    return main_value * 2;
}

template<typename T, const size_t array_length>
void map(T *changed_array, T (*change)(T main_value))
{
    for (size_t i = 0; i < array_length; i++)
        changed_array[i] = change(changed_array[i]);
}

 #endif
