template<typename T, int n> T* createArr(T(*gen)()){
	T* arr = new T[n];
	for (int i = 0; i < n; i++) {
		arr[i] = gen();
	}
	return arr;
}

