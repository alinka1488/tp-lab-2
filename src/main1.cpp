#include "task1.h"


int main(){
	int mas[]= {1, 5, 8, 2, 4, 6};
	float massiv[] = {1.2, 6.7, 2.3, 9.0, 4.5, 6.8};
	int size1 = sizeof(mas) / sizeof(int);
	int size2 = sizeof(massiv) / sizeof(float);
	msort<int>(mas, size1);
	msort<float>(massiv, size2);
	return 0;
}
