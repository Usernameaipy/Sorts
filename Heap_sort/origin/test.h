#ifndef TEST_H
#define TEST_H
#include "sort.h"
void success(void);
void fail(void);
void test_sort(const int*, const int*, int);
static const int TEST_VAR_ONE[]={9,8,7,6,5,4,3,2,1};
static const int TEST_ANS_ONE[]={1,2,3,4,5,6,7,8,9};
static const int TEST_VAR_TWO[]={56,78,23,98,12,14,76,543};
static const int TEST_ANS_TWO[]={12,14,23,56,76,78,98,543};
#endif