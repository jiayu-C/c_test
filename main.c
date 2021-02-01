#include "main.h"
#include "union.h"
#include "size.h"
#include "link.h"

int twoSum(int* nums, int numsSize, int target){
    int firNum = 0,secNum = 0;
    for(firNum = 0;firNum<(numsSize-1);firNum++)
    {
        for(secNum = firNum+1;secNum<numsSize;secNum++)
        {
           if((nums[firNum]+nums[secNum]) == target)
           {
               printf("%d--%d\n",firNum,secNum);
               return 0;
           }
        }
    }
    return 0;
}


int testArray[7] = {0,4,2,1,3,3,8};

int main(int argc, char *argv[])
{
   printf("hello link\r\n"); 
   linkTest();
	return 0;
}