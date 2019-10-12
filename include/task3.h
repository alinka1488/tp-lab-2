template<class T, int size>
void map(T arr[], T(*change)(T))
{
	for (int i = 0; i < size; i++)arr[i] = change(arr[i]);
}
