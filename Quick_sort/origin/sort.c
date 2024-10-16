#include "sort.h"

//O = n log n || O(n log n)

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}

int partitions(int *arr, int left, int right){
    int pivot = arr[right];
    int i = left-1;
    for(int j = left; j<right; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return (i+1);
}

void quickSort(int *arr, int left, int right){
    if(left < right){
        int pivot = partitions(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}