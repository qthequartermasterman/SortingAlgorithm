/*=============HeapSort.cpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  3/31/20
 EMAIL:         andrewsansom@my.unt.edu
 =============HeapSort.cpp================*/

#include "HeapSort.hpp"
//The heap sort algorithm sorts at these complexities:
//Best case scenario    O(n*log(n))     On checking every element, we check half of the other elemnts to check if it a heap
//Average case scenario O(n*log(n))     On checking every element, we check half of the other elemnts to fix the heap
//Worst case scenario   O(n*log(n))     On checking every element, we check half of the other elemnts to fix the heap

void arrange_array_into_heap(int arr[], int size, int root){
    //We will arrange the array into a heap in pre-fix notation
    //int arr[] is the array
    //int size is the size of the array
    //int root is the index of current root of the heap
    int largest_element = root; //Index of the root of the heap
    int left_child = 2 * root + 1; //Index of the left child
    int right_child = 2 * root + 2; //Index of the right child
    
    //If left child is larger than the root, we change largest_element to left_child. We will rearrange this later
    if (left_child < size && arr[left_child] > arr[largest_element]){
        largest_element = left_child;
    }
    //If right child is larger than the root, we change largest_element to right_child. We will rearrange this later
    if (right_child < size && arr[right_child] > arr[largest_element]){
        largest_element = right_child;
    }
    //We do the rearranging. If we found that one of the children was larger, then we must swap the two.
    //Then recursively rearrange the array with the largest_element as the root
    if (largest_element != root){
        std::swap(arr[largest_element], arr[root]);
        arrange_array_into_heap(arr, size, largest_element);
    }
}

void heap_sort(int arr[], int size){
    //arrange the array into a heap
    //We start by assuming the center is the root, and then work our way back to the beginning
    for (int i = size/2 - 1; i >= 0; i--){
        arrange_array_into_heap(arr, size, i);
    }
    
    //Now pop the largest element (at the front) in the heap, and stick it at the end. Then rearrange the remaining heap again.
    for (int i = size-1; i >= 0;i--){
        std::swap(arr[0], arr[i]);
        arrange_array_into_heap(arr, i, 0); //the size is only i now, since we do not want to affect the elements that are already sorted
    }
}
