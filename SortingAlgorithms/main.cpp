/*=============main.cpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  3/31/20
 EMAIL:         andrewsansom@my.unt.edu
 =============main.cpp================*/

#include <iostream>
#include "utilityFunctions.hpp"
#include "MergeSort.hpp"

int main(int argc, const char * argv[]) {
    const int size = 10;
    
    int array[size];
    
    //Initialize the array with random integers.
    for (int i = 0; i < size; i++){
        array[i] = rand();
    }
    //Print the unsorted array
    std::cout << "Unsorted array.\n";
    print_array(array, size);
    
    //Sort the array and print.
    std::cout << "Sorted array.\n";
    mergeSort(array, 0, size-1);
    return 0;
}
