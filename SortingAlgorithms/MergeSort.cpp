/*=============MergeSort.cpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  3/31/20
 EMAIL:         andrewsansom@my.unt.edu
 =============MergeSort.cpp================*/

#include "MergeSort.hpp"
//The merge sort algorithm sorts at these complexities:
//Best case scenario    O(n*log(n))     The array is split into trees and trees are merged log(n) times (The array is split into half log(n) times)
//Average case scenario O(n*log(n))     The array is split into trees and trees are merged log(n) times. Swaps are at most linear.
//Worst case scenario   O(n*log(n))     The array is split into trees and trees are merged log(n) times. Swaps are at most linear.
void merge(int arr[], int left, int middle, int right){
    //int left is the index of the first element of the array to sort
    //int middle is the index of where the break in the middle is
    //int right is the index of the last element of the array to sort
    
    int leftSize = (middle-left) + 1;
    int rightSize = right - middle;
    
    //Create temporary arrays.
    int leftArray[leftSize];
    int rightArray[rightSize];
    
    //Copy data into arrays
    for (int i = 0; i < leftSize; i++){
        leftArray[i] = arr[left + i];
    }
    for (int i = 0; i < rightSize; i++){
        rightArray[i] = arr[middle+1+i];
    }
    
    //Do the sorting
    //Initialize the indices
    int i=0, j=0, k=left;
    //If the current element on the left is less than the one on the right, stick the left side. Otherwise place the right side.
    while (i < leftSize && j < rightSize){
        if(leftArray[i] < rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    
    //If there are any left overs in the left side, they must be less than the right side
    while (i < leftSize){
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    
    //If there are still ones on the right side, place them into the array.
    while (j < rightSize){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
    
}
void mergeSort(int arr[], int left, int right){
    //int left is the index of the first element of the array to sort
    //int right is the index of the last element of the array to sort
    
    //We need to split the array's elements into two parts. We recursively merge sort both halfs.
    if (left < right){
        int middle = left + (right-left)/2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
