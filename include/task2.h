#include <new>
template<class T, int size>T* createArr(T (*gen)())
{
	auto arr = new T(size);
	for (int i = 0; i < size; i++) arr[i] = gen();
	return arr;
}
