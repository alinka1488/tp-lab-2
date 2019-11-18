//
// Created by artem on 12.11.2019.
//

#ifndef TP_LAB_2_TASK3_H
#define TP_LAB_2_TASK3_H
#include <cstddef>

template<typename T, const size_t N>

void map(T *array, T(*change)(T))
{
    for (size_t i = 0; i < N; i++)
        array[i] = change(array[i]);
}
#endif //TP_LAB_2_TASK3_H
