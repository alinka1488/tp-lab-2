#include <cstdint>

#ifndef _TASK2_H_
#define _TASK2_H_

template<typename T, int32_t N>
T *createArr(T(*gen)())
{
	T *array = new T[N];
	for (int32_t i = 0; i < N; i++)
		array[i] = gen();

	return array;
};

#endif _TASK2_H_
