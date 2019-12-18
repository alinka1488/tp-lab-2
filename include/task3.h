
#ifndef task3_h
#define task3_h

//Написать шаблонную функцию map, принимающую по ссылке массив элементов 
//типа T и выполняющую преобразование каждого элемента в соответетствии с
//шаблонной функцией change, указатель на которую передается в map.

template<typename T, size_t size> void map(T *array, T (*change) (T)){
    for(size_t i=0; i<size; i++){
        array[i] = change(array[i]);
    }
}


#endif /* task3_h */
