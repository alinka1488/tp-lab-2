//
// Created by artem on 12.11.2019.
//

#ifndef task1_h
#define task1_h

#include <cstddef>
#include <cstring>

template <typename T>
bool compare(T a, T b)
{
    return a < b;
}

bool compare(char* a, char* b)
{
    return strlen(a) < strlen(b);
}

template <typename T>
void msort(T array[], size_t n)
{
    if (n < 2)
        return;

    msort(array, n / 2);
    msort(array + n / 2, n - n / 2);

    T* tmp = new T[n];
    size_t leftPointer = 0, rightPointer =  n / 2, arrayPointer = 0;

    while (leftPointer < n / 2 && rightPointer < n)
    {
        if (compare(array[leftPointer], array[rightPointer]))
            tmp[arrayPointer++] = array[leftPointer++];
        else
            tmp[arrayPointer++] = array[rightPointer++];
    }

    while (leftPointer < n / 2)
        tmp[arrayPointer++] = array[leftPointer++];

    while (rightPointer < n)
        tmp[arrayPointer++] = array[rightPointer++];

    for (size_t i = 0; i < n; i++)
        array[i] = tmp[i];
}

#endif //TP_LAB_2_TASK1_H
