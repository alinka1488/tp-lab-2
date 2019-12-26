#ifndef TASK1_H
#define TASK1_H

#include <cstring>

template<class T>
bool compare(T &first_operand, T &second_operand)
{
    return first_operand < second_operand;
}

template<>
bool compare(char* &first_string, char* &second_string) {
	  return strlen(first_string) < strlen(second_string);
 }

template<class T>
void msort(T array[], size_t array_length)
{
    if (array_length<2)
        return;

    msort(array, array_length/2);
    msort((array + array_length/2), (array_length-array_length/2));

    int left = 0, right = 0;
    T *temp_array = new T[array_length];

    while(left < (array_length/2) && right < (array_length-array_length/2) )
    {
        if(compare(array[left], array[(array_length/2)+right]))
            {
                temp_array[left+right] = array[left];
                left++;
			}
			else
            {
                temp_array[left+right] = array[array_length/2 + right];
                right++;
			}
    }

    while (left < (array_length/2))
    {
        temp_array[left+right] = array[left];
        left++;
    }
    
    while ((array_length/2 + right) < array_length)
    {
        temp_array[left+right] = array[array_length/2 + right];
        right++;
    }

    for (size_t i = 0; i < array_length; i++)
        array[i] = temp_array[i];
 }

 #endif
