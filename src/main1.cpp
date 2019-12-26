#include <iostream>
#include <stdlib.h>
#include "task1.h"
using namespace std;
#define n 10

int main() {
   cout << "Merge function"<<endl;
    //int a[n]={2,3,5,4,1,2,3,5,4,1};
    double a[n]={0.1,2.2,1.3,4.3,3.4,6.5,5.5,8.5,7.5,9.6};
    msort(a,n);
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}