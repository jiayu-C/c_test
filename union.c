#include "main.h"
union TEST_1_U
{
    int a;
    char b;
}test_1_u;


void union_test_1(void)
{
    test_1_u.a = 0x01;
    if(test_1_u.b)
    {
        printf("small");
    }
    else
    {
        printf("large");
    }
    
}



