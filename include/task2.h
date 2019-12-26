#ifndef TPLAB2TASK2_TASK2_H
#define TPLAB2TASK2_TASK2_H

template<typename T, int n>
T *createArr(T(*gen)()) {
    T *arr = new T[n];
    for(int i=0; i<n;i++) arr[i]=gen();
    return arr;
}

#endif //TPLAB2TASK2_TASK2_H
