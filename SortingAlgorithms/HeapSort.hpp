///*=============HeapSort.hpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  3/31/20
 EMAIL:         andrewsansom@my.unt.edu
 =============HeapSort.hpp================*/

#ifndef HeapSort_hpp
#define HeapSort_hpp

#include <stdio.h>
#include <utility>

void arrange_array_into_heap(int arr[], int size, int root);
void heap_sort(int arr[], int size);

#endif /* HeapSort_hpp */
