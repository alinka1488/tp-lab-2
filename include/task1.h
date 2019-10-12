#include <cstring>
#include <new>
template <class T>bool cmp (T val_1,T val_2)
{
    return val_1<val_2;
}

template<>bool cmp(char*str_1,char*str_2)
{
    return strlen(str_1)<strlen(str_2);
}

template <class T>
void msort(T *array,size_t size)
{
    size_t left, right, mid, end, now;
    auto temp = new T[size];
    for(size_t width=1; width<size; width*=2)//увеличиваем щирину блока
    {
        for(size_t start=0; start<size; start+=2*width)//проходим по каждой паре
        {
            mid = start + width -1;
            end = start + 2*width -1;

            if(mid >= size) mid = size-1;
            if(end >= size) end = size-1;

            left = start;
            right = mid + 1;
            now = start;
            //попарно сортируем
            while(left<=mid && right<=end)
            {
                if(cmp(array[left],array[right]))
                {
                    temp[now++] = array[left++];
                }
                else
                {
                    temp[now++] = array[right++];
                }
            }
            //оставшиеся элементы
            while(left<=mid)
            {
                temp[now++] = array[left++];
            }
            while(right<=end)
            {
                temp[now++] = array[right++];
            }
        }
        for (size_t i =0;i<size;i++)array[i]=temp[i];
    }
    delete[]temp;
}
