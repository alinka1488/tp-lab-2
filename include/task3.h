#ifndef TASK3_H
#define TASK3_H
#pragma once


template < typename T, const int n>
void map(T * mas, T(*change)(T))
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = change(mas[i]);
	}
}

#endif