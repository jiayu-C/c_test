#include "main.h"

// struct 定义  变量

struct people
{
   char name[10];
   int age;
   char sex;
};

struct people student[3] = {
    {"jiayu",           14,'M'},
    {"huge" ,           14,'M'},
    {"xiaoqian",        15,'F'},
};


typedef struct FRUIT_T
{
    char name[20];
    int price;
    char color[10];
}FRUIT_T;


FRUIT_T fruit_t[5] = {
    {.name = "apple",   .price = 5,  .color ="red"},
    {.name = "banana",  .price = 3,  .color = "yelow"},
    {.name = "cherry",  .price = 10, .color = "red"},
    {.name = "tomatao", .price = 2,  .color = "red"},
    {.name = "orige",   .price = 7,  .color = "yelow"},
};
FRUIT_T *fruit_P = &fruit_t;

void fruit_init(void)
{
    char i;
    for(i=0;i<5;i++)
    {
        printf("%s-%d-%s\r\n",fruit_P->name,fruit_P->price,fruit_P->color);
        fruit_P += 1;
    }
}

void struct_test_1(void)
{
  int i = 0;
  for(i=0;i<3;i++)  
    printf("%s-%d-%c\r\n",student[i].name,student[i].age,student[i].sex);
}

