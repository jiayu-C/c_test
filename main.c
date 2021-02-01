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


char testArray[7] = "hello";
struct test
{
   char testData[64];
   int scor;
};


void charAndconst(void)
{
   struct test myData = 
   {
      "jiayu",
      64
   };
   strcpy(&myData.testData,"jone");
   printf("%s  -%d\n",myData.testData,myData.scor);
}


int main(int argc, char *argv[])
{
   // linkTestSingle();
   // charAndconst();
   // randTest();
   filtest();
	return 0;
}