#ifndef task1_h
#define task1_h
#include <cstring>
#include <algorithm>
using namespace std;
template <typename T> bool comparator (T &a, T&b){ //сравниваем два элемента по их значению
    return a <= b;
}

template <> bool comparator(char * &a, char * &b){ //сравниваем два элемента по их длине
   return strlen(a) <= strlen(b);
}

template <> bool comparator(const char * &a, const char * &b){
   return strlen(a) <= strlen(b);
}

template <typename T> void mergeSort(T * array, int begin, int end){
    if (end - begin <2){ //если в массиве 0 или 1 элемент, ничего не меняется
        return;
    }
    if ( end - begin == 2){ // если два элемента в обратном порядке, свопаем их
        if (!comparator(array[begin], array[begin+1])){
            swap(array[begin], array[begin+1]);
        }
        return;
    }
    mergeSort(array, begin, begin + (end - begin)/2); //разбиваем массив на две части
    mergeSort(array, begin + (end - begin)/2, end);
    T * secondArray = new T[end-begin]; // второй вектор для слияния двух отсортированных частей
    int beginFirstP = begin; //начало первой отсорт части
    int endFirstP = begin + (end - begin)/2; //конец первой отсорт части
    int beginSecondP = begin + (end - begin)/2; //начало второй отсорт части
    int it = 0; // идентификатор того, что
    while (it != end - begin){ //слияние двух частей в 1
        if (beginFirstP >= endFirstP ||(beginSecondP < end && comparator(array[beginSecondP], array[beginFirstP]))){
            secondArray[it++] = array[beginSecondP];
            beginSecondP++;
        }
        else {
            secondArray[it++] = array[beginFirstP];
            beginFirstP++;
        }
    }
    for (int i = begin; i< end; i++){ //копирование отсортированного вектора в исходный
        array[i] = secondArray[i - begin];
    }
    delete[] secondArray;
}

template <typename T> void msort(T * array, const int n){
    mergeSort(array, 0, n);
}

#endif
