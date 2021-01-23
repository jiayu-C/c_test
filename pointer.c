#include "main.h"



static int test_array_1[5] = {0,1,2,3,4};
static int *test1_p = test_array_1;


void array_1_test()    // 一维数组
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\r\n",*test1_p);
        test1_p += 1;
    }
}

static int test_array_2[][3] = {
    {0,1,2},
    {3,4,5},
    {6,7,8},
};
static int *test2_p = test_array_2;

// 指针测试
void array_2_test()    // 二维数组
{
   printf("%d\r\n",*test2_p); 
}


// 函数指针
void p_fun_test_1(void)
{
    printf("p_fun_test_1\r\n");
}

void p_fun_test_2(void)
{
    printf("p_fun_test_2\r\n");
}

void p_fun_test_3(void)
{
    printf("p_fun_test_3\r\n");
}

void (*fun_1_p)(void);
typedef (*FUN_P)(void);
FUN_P fun_2_p = p_fun_test_2;
FUN_P fun_3_p = p_fun_test_3;

void p_fun_test_4(FUN_P p1,FUN_P p2)
{
   p1();
   p2();
}
typedef (*FUN_2_P)(FUN_P P1,FUN_P P2);
FUN_2_P fun_4_p = p_fun_test_4;

void p_fun_test(void)
{
    fun_1_p = p_fun_test_1;
    fun_1_p();
    fun_2_p();
    fun_3_p();
    fun_4_p(p_fun_test_2,p_fun_test_3);
}

void cla_printf(int a,int b,void(*pFunc)(int ,int ))
{
    pFunc(a,b);
}

int sum(int a,int b)
{
   printf("a+b = %d\n",a+b);

}

int sub(int a,int b)
{
   printf("a-b = %d\n",a-b);
}

