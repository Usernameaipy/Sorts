#include "sort.h"

// O=n log n || O(n log n)

void swap(int*a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void heapify(int* arr, int n, int i){
    int root = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[left]>arr[root]){
        root=left;
    }
    if(right < n && arr[right]>arr[root]){
        root=right;
    }
    if(root!=i){
        swap(&arr[i], &arr[root]);
        heapify(arr, n, root);
    }
}

void heapSort(int* arr, int size){
    for(int i = size/2-1; i>=0; i--){
        heapify(arr, size, i);
    }

    for(int i = size-1; i>=0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr,i, 0);
    }
}