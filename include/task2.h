#ifndef task2_h
#define task2_h


template<typename T, size_t size> T *createArr(T(*gen)()) {
    T *array = new T[size]; //создаем новый массив, выделяя по него память
    for (size_t i = 0; i<size; i++){
        array[i] = gen(); //применяем функцию для каждого элемента
    }
    return array;
}


#endif /* task2_h */