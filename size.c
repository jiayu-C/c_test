#include "main.h"

////////////////////////////////////  
//////////在64位系统中指针变量的sizeof通常为8  32位是4
////////////////////////////////////
void printfDataSize(void)
{
    printf("size of char: (%d)  short int:(%d)\
                    int: (%d)  long int: (%d)\
                    float:(%d)  char*: (%d)\n",\
                    sizeof(char), sizeof(short int),\
                    sizeof(int), sizeof(long int),\
                    sizeof(float), sizeof(char*));
}




