#include "task3.h"


template<typename T>
T change(T a){
	return a * 3;
}

template<>
char* change(char* s){
	int size = strlen(s);
	for(int i = 0; i < size; i++)
		s[i] = s[i] + 'x';
	return s;
}
int main(){
	int mas[] = {1, 2, 3};
	float massiv[] = {1.2, 2.3, 3.4};
	char stroka[] = {'1', '2', '3'};
	const int size1 = sizeof(mas)/sizeof(int);
	const int size2 = sizeof(massiv)/sizeof(float);
	const int size3 = sizeof(stroka)/sizeof(char);
	map<int, size1>(mas, change);
	map<float, size2>(massiv, change);
	map<char, size3>(stroka, change);
	return 0;
}
