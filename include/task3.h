#ifndef task3_h
#define task3_h

template<class T, int n>
void map(T *arr,T (*change)(T))
{
	for(int i=0;i<n;i++)
		arr[i] = change(arr[i]);
}

#endif
