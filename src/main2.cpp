#include <iostream>
#include "task2.h"

using namespace std;

//Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N. 
//Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.

char* gen(){
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

int main(int argc, const char * argv[]) {

    char** array=createArr<char*,6>(gen); //в параметры шаблона передаем тип массива и размер
    for (int i = 0; i < 6; i++)
       cout<<array[i]<<" ";
    return 0;
}
