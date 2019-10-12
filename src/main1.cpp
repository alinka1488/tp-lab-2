#include <iostream>
#include "task1.h"
using namespace std;
int main()
{
    char* val[6]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val,6);
    for(int i =0;i<6;i++)cout<<val[i]<<' ';
    cout<<endl;
    return 0;
}
