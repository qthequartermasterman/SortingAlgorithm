///*=============utilityFunctions.cpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  3/31/20
 EMAIL:         andrewsansom@my.unt.edu
 =============utilityFunctions.cpp================*/

#include "utilityFunctions.hpp"
#include <iostream>

void print_array(int array[], int length){
    for (int i = 0; i < length; i++){
        std::cout << array[i] << " ";
        if (i < length - 1){
            std::cout << ", ";
        }
        std::cout << std::endl;
    }
} //array is the array to be printed and length is the length of the array
