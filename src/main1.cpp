#include <iostream>
#include <algorithm>
#include <cstring>
#include "task1.h"

using namespace std;

int main(int argc, const char * argv[]) {

    //Написать шаблонную функцию msort, сортирующую массив элементов T слиянием. 
    //Если тип элемента массива char*, то производится сортировка по длине строк.
    
    float array[] = {1.03,2.35,2.33,3,4,5,7,6};
    char* array1[] = {(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(array, 8);
    msort(array1, 6);
    for (int i = 0; i < 8; i++)
	      cout<<array[i]<<" ";
    cout<<"\n";
    for (int i = 0; i < 6; i++)
	      cout<<array1[i]<<" ";
	  return 0;
}
