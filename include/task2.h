#include <new>
template<class T, size_t size>T* createArr(T (*gen)())
{
	auto arr = new T[size];
	for (size_t i = 0; i < size; i++) arr[i] = gen();
	return arr;
}
