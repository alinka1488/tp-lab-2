#include <iostream>
#include "task3.h"

using namespace std;

//Написать шаблонную функцию map, принимающую по ссылке массив элементов 
//типа T и выполняющую преобразование каждого элемента в соответетствии с
//шаблонной функцией change, указатель на которую передается в map.

float change (float a){
    return a*2;
}

int main(int argc, const char * argv[]) {

    float array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    map<float, 5> (array, change);
    for(size_t i = 0; i < 5; i++)
        cout<<array[i]<<" ";
    return 0;
}
