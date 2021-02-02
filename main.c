#include "main.h"
#include "union.h"
#include "size.h"
#include "link.h"
#include "pointer.h"
#include "array.h"

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




int main(int argc, char *argv[])
{
   printf("hello word\n");
	return 0;
}