#include <iostream>
#include "task1.h"
using namespace std;
int main()
{
    const size_t n = 6;
    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val,n);
    for(int i =0;i<n;i++)cout<<val[i]<<' ';
    cout<<endl;
    return 0;
}
