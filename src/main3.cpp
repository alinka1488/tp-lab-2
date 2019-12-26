#include <iostream>
#include <cstring>
#include "task3.h"
#define size 5
using namespace std;

template <typename T>
T change(T value){
    return ++value;
}

template <>
char* change(char* str){
    for(int i=0;i<strlen(str);i++)
        str[i]=str[i]+1;

    return str;

}
int main() {
//    int arr1[size]={1,2,3,4,5};
//    map<int, size>(arr1, change);

    double arr1[size]={1.5,2.5,3.5,4.5,5.5};
    map<double, size>(arr1, change);

    cout<<"map function"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;

}