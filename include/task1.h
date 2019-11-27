#include <stddef.h>
#include <cstring>
#include <algorithm>
#include <iterator>

struct Comparator
{
    template <typename Comp>
    inline bool operator() (Comp a, Comp b)
    {
        return a<b;
    }
    inline bool operator() (char* a, char* b)
    {
        return strlen(a)<strlen(b);
    }
};

template <typename Iterator, typename Compare = Comparator>
void merge_sort(Iterator first, Iterator last, Compare cmp = Compare {})
{
    const auto n = std::distance(first, last);
    if (n > 1)
    {
        const auto middle = std::next(first, n / 2);
        merge_sort(first, middle, cmp);
        merge_sort(middle, last, cmp);
        std::inplace_merge(first, middle, last, cmp);
    }
}

template <typename T>
void msort(T *arr, size_t n)
{
    merge_sort(arr, arr+n);
}
