
#include "task3.h"
#include <iostream>
using namespace std;


template <typename T>
T change(T element)
{
	return element + 5;
}

int main()
{
const int n = 5;
int array_n[n] = { 15, 2, 550, 39, 0 };
map<int, n>(array_n, change);
for (int i = 0; i < n; i++)
cout << array_n[i] << " ";
cout << '\n';

char array_c[n] = { 'a', 'b', 'c', 'd', 'e' };
map<char, n>(array_c, change);
for (int i = 0; i < n; i++)
cout << array_c[i] << " ";
return 0;
}
