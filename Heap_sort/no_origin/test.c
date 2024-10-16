#include "test.h"

void success(void){
    puts("SUCCESS");
}

void fail(void){
    puts("FAIL");
}

void test_sort(const int* arr_v, const int* arr_a, int size){
    int flag=0;
    int* arr=malloc(size*sizeof(int));
    for(size_t i = 0; i<(size_t)size; i++){
        arr[i]=arr_v[i];
    }
    sort(arr, size);
    for(size_t i = 0; i<(size_t)size; i++){
        if(arr[i]!=arr_a[i]) flag=1;
    }
    if(flag==1) fail();
    else success();
    free(arr);
}

int main(){
    test_sort(TEST_VAR_ONE, TEST_ANS_ONE, 9);
    test_sort(TEST_VAR_TWO, TEST_ANS_TWO, 8);
    return 0;
}