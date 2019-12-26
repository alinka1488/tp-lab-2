#include <iostream>
#include "task3.h"

using namespace std;

template<class T>
T change(T elem) {
	return elem * elem;
}

int main() {
	const int n = 5;
	int * mas = new int[n];
	for (int i = 1; i < 6; i++) {
		mas[i - 1] = i;
	}
	map<int, n>(mas, change);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << "\n";
	}
	return 0;
}