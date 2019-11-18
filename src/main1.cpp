#include "task1.h"
#include <iostream>

int main() {

    const size_t firstSize = 6;
    int *firstArray = new int[firstSize]{5, 3, 2, 4, 1, 6};
    msort(firstArray, firstSize);
    for(size_t i = 0; i < firstSize; i++)
        std::cout << firstArray[i] << " ";

    std::cout<<std::endl;

    const size_t secondSize = 6;
    char* secondArray[secondSize]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(secondArray, secondSize);
    for(size_t i = 0; i < secondSize; i++)
        std::cout << secondArray[i] << " ";
    return 0;
}
