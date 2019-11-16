#include <cstring>
#include <iostream>
using namespace std;

#ifndef TPLAB2_TASK1_H
#define TPLAB2_TASK1_H

template <typename T>
bool cmp(T a, T  b)
{
    return a < b;
}
bool cmp(char* str1, char* str2)
{
    return strlen(str1) < strlen(str2);
}

template <typename T>
void msort(T a[], int n){
    if (n < 2 )return;
    msort(a, n / 2);    //left
    msort(a + n / 2, n - n / 2);    //right
    T * tmp = new T[n];
    int left=0, right=n/2;
    for(int i=0; i<n;i++){
        if((right>=n)||((left<n/2)&&(cmp(a[left],a[right])))){
            tmp[i]=a[left];
            left++;
        } else{
            tmp[i]=a[right];
            right++;
        }
    }
    for(int i=0;i<n;i++){

        a[i]=tmp[i];
    }



}


#endif //TPLAB2_TASK1_H
