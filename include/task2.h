template<typename T, size_t n>
T* createArr (T (*gen) ())
{
    auto a = new T[n];
    for(size_t i=0; i<n; i++)
    {
        a[i]=gen();
    }
    return a;
}