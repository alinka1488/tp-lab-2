#include <iostream>
#include "task2.h"
#include <ctime>

using namespace std;

template<typename T>
T gen() {
    T x = rand() % 50;
    return x;
}

template<>
char *gen() {
    int sizestr = 10;
    char *str = new char[sizestr];
    for (int i = 0; i < sizestr - 1; i++)
        str[i] = 'a' + rand() % 26;
    str[sizestr - 1] = '\0';
    return str;
}


int main() {
    srand(time(NULL));
    //test for int
   // auto res = createArr<int, 3>(gen);
   //test for char*
   auto res= createArr<char*,3>(gen);
   for(int i=0; i<3;i++) cout<<res[i]<<" ";
    return 0;
}

