template<typename T, int size> void map(T *arr, T(*change)(T value)) {
	for (int i = 0; i < size; i++) {
		arr[i] = change(arr[i]);
	}
}

template<class T> T change(T value){
	value++;
	return value;
}
