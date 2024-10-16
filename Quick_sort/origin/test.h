#ifndef TEST_H
#define TEST_H
extern void fail(void);
extern void success(void);
extern void test_sort(const int *, const int *, int);
#include "sort.h"
#include <stdlib.h>
static const int TEST_VAR_ONE[]={67,43,1,74,2353,754,327,12,455,745,23,542,52,64,975,83};
static const int TEST_ANS_ONE[]={1,12,23,43,52,64,67,74,83,327,455,542,745,754,975,2353};
static const int TEST_SIZE_ONE = 16;
static const int TEST_VAR_TWO[]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
static const int TEST_ANS_TWO[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
static const int TEST_SIZE_TWO = 15;
#endif