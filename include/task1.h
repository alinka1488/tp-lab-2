#include "string.h"
#include <cstdint>

#ifndef _TASK1_H_
#define _TASK1_H_

template<typename T>
void swap(T *leftItem, T *rightItem)
{
	T tempItem = *leftItem;
	*leftItem = *rightItem;
	*rightItem = tempItem;
};

template<typename T>
void msort(T *array, int32_t startIndex, int32_t count, T *buffer)
{
	if (count < 2)
		return;
	else if (count == 2 && array[startIndex + 0] > array[startIndex + 1])
		swap(array + startIndex + 0, array + startIndex + 1);
	else if (count > 2)
	{
		int32_t leftArrayStartIndex = startIndex,
			leftArrayLength = count - (count / 2),
			leftArrayIndex = 0;
		int32_t rightArrayStartIndex = startIndex + count - (count / 2),
			rightArrayLength = count / 2,
			rightArrayIndex = 0;

		msort(array, leftArrayStartIndex, leftArrayLength, buffer);
		msort(array, rightArrayStartIndex, rightArrayLength, buffer);

		for (int32_t i = 0; i < count; i++)
			if ((leftArrayIndex < leftArrayLength) && (rightArrayIndex < rightArrayLength))
			{
				bool comparisonResult = array[leftArrayStartIndex + leftArrayIndex] < array[rightArrayStartIndex + rightArrayIndex];

				buffer[startIndex + i] = comparisonResult ? array[leftArrayStartIndex + leftArrayIndex]
					: array[rightArrayStartIndex + rightArrayIndex];

				if (comparisonResult)
					leftArrayIndex++;
				else
					rightArrayIndex++;
			}
			else
				buffer[startIndex + i] = leftArrayIndex < leftArrayLength ? array[leftArrayStartIndex + leftArrayIndex++]
				: array[rightArrayStartIndex + rightArrayIndex++];

		for (int32_t i = 0; i < count; i++)
			array[startIndex + i] = buffer[startIndex + i];
	}
};

template<>
void msort(const char **array, int32_t startIndex, int32_t count, const char **buffer)
{
	if (count < 2)
		return;
	else if (count == 2 && ((strlen(array[startIndex + 0]) > strlen(array[startIndex + 1]))
		|| ((strlen(array[startIndex + 0]) == strlen(array[startIndex + 1])) && (strcmp(array[startIndex + 0], array[startIndex + 1]) > 0))))
		swap(array + startIndex + 0, array + startIndex + 1);
	else if (count > 2)
	{
		int32_t leftArrayStartIndex = startIndex,
			leftArrayLength = count - (count / 2),
			leftArrayIndex = 0;
		int32_t rightArrayStartIndex = startIndex + count - (count / 2),
			rightArrayLength = count / 2,
			rightArrayIndex = 0;

		msort(array, leftArrayStartIndex, leftArrayLength, buffer);
		msort(array, rightArrayStartIndex, rightArrayLength, buffer);

		for (int32_t i = 0; i < count; i++)
			if ((leftArrayIndex < leftArrayLength) && (rightArrayIndex < rightArrayLength))
			{
				bool comparisonResult = (strlen(array[leftArrayStartIndex + leftArrayIndex]) < strlen(array[rightArrayStartIndex + rightArrayIndex]))
					|| ((strlen(array[leftArrayStartIndex + leftArrayIndex]) == strlen(array[rightArrayStartIndex + rightArrayIndex]))
					&& (strcmp(array[leftArrayStartIndex + leftArrayIndex], array[rightArrayStartIndex + rightArrayIndex]) < 0));

				buffer[startIndex + i] = comparisonResult ? array[leftArrayStartIndex + leftArrayIndex]
					: array[rightArrayStartIndex + rightArrayIndex];

				if (comparisonResult)
					leftArrayIndex++;
				else
					rightArrayIndex++;
			}
			else
				buffer[startIndex + i] = leftArrayIndex < leftArrayLength ? array[leftArrayStartIndex + leftArrayIndex++]
				: array[rightArrayStartIndex + rightArrayIndex++];

		for (int32_t i = 0; i < count; i++)
			array[startIndex + i] = buffer[startIndex + i];
	}
};

template<typename T>
void msort(T *array, int32_t length)
{
	T *buffer = new T[length];
	msort(array, 0, length, buffer);
	delete[] buffer;
};

#endif _TASK1_H_
