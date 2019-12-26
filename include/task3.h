template<typename T,size_t n>
void map(T a[], T (*change) (T))
{
    for(size_t i=0;i<n;i++)
    {
        a[i]=change(a[i]);
    }
}