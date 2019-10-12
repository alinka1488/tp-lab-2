#include <iostream>
#include <cstring>
#include "task3.h"
using namespace std;

template<class T>T change(T val){
    return val + 1;
}

template<>char* change(char* val){
    size_t n = strlen(val);
    for(size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}

int main()
{
    char arr[6]{'1', '2', '3', '4', '5','6'};
    map<char, 6>(arr, change);
    for(int i =0;i<6;i++)cout<<arr[i]<<' ';
    return 0;
}
