#include <cstdint>

#ifndef _TASK3_H_
#define _TASK3_H_

template<typename T, int32_t N>
void map(T *array, T(*selector)(T item))
{
	for (int32_t i = 0; i < N; i++)
		array[i] = selector(array[i]);
};

#endif _TASK3_H_
