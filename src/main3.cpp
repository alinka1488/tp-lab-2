#include <iostream>
#include "task3.h"

int change(int val)
{
    return val+1;
}


int main()
{
	const size_t nn = 5;
  int arr[nn]{1, 2, 3, 4, 5};
  map<int, nn> (arr, change);
  for(size_t i = 0; i < nn; i++)
  	std::cout<<arr[i]<<" ";
	return 0;
}