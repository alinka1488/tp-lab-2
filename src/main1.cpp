#include <iostream>
#include <string.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

int main()
{
	char* val[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	double val2[6]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	int val3[6] = { 6,5,43,2,1,0 };
	msort(val2, 6);
	for (int i = 0;i < 6;i++)
		cout << val2[i]<<" ";
}