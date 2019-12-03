#include "task1.h"


int main(){
	int mas[]= {1, 5, 8, 2, 4, 9, 6};
	float massiv[] = {1.2, 6.7, 2.3, 9.0, 4.5};
	char* stroka[]{ (char*)"12345", (char*)"1234", (char*)"123", (char*)"1", (char*)"12", (char*)"123456" };
	int size1 = sizeof(mas) / sizeof(int);
	int size2 = sizeof(massiv) / sizeof(float);
	int size3 = sizeof(stroka) / sizeof(char*);
	msort<int>(mas, 0, size1);
	msort<float>(massiv, 0, size2);
	msort<char>(stroka, 0, size3);
	return 0;
}
