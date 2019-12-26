#ifndef TPLAB2TASK3_TASK3_H
#define TPLAB2TASK3_TASK3_H
template <typename T,int n>
void map(T* arr, T (*change)(T)){
    for(int i=0; i<n;i++){
        arr[i]=change(arr[i]);
    }
}

#endif //TPLAB2TASK3_TASK3_H
