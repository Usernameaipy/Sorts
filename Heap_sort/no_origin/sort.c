#include "sort.h"

void swap(int* a, int* b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

void sort(int* arr, int n){
    int flag=0, sh=0, i;
    while(1){
        flag=0;
        for(i=0; i<n; ++i){
                if(right<n){
            if(arr[root]>arr[left] || arr[root]>arr[right]){
                    if(arr[left]<arr[right]){
                        swap(&arr[root], &arr[left]);
                        flag=1;
                    } else if(arr[right]<arr[left]){
                        swap(&arr[root], &arr[right]);
                        flag=1;
                    }
                }
            } else if(left<n){
                if(arr[root]>arr[left]){
                    swap(&arr[root], &arr[left]);
                    flag=1;
                }
            }
        }
        if(!flag) sh++;
        if(sh+2==n) break;
    }
}