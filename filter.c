#include "main.h"

#define N 10

////////////////////////////////////////////
///////////////////////// 
////////////////////////////////////////////
int* creatRandNumber(int count)
{
	int *p = NULL;
    int* ptr = NULL;

	p = (int*)malloc(sizeof(int)*count);
	ptr = p;
	for (int i = 0; i < count; i++)
	{
		*(ptr++) = rand(); 
	}
	
	return p;
}

////////////////////////////////////////////
///////////////////////// 
////////////////////////////////////////////
void displayNumber(int* P,int size)
{
   while(size--)
   {
	   printf("%d  ",*P);
	   P++;
   }
   printf("===\n");
}

////////////////////////////////////////////
///////////////////////// 
////////////////////////////////////////////
void randTest(void)
{
	int* rData = NULL;
	rData = creatRandNumber(N);
	assert(rData != NULL);
	displayNumber(rData,N);
}


////////////////////////////////////////////
///////////////////////// 中位值
////////////////////////////////////////////
void getMidleValue(int *p,int n) 
{
	int i,j;
	int temp = 0;

	for(i=0;i<n;i++)  // 比较剩下趟数
	{
		for(j=i;j<n;j++)			// 两两比较次数
		{
			if(*(p+i) > *(p+j))	// 数与数间比较的次数
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}

}


void filtest(void)
{
    int pToRand = creatRandNumber(N);
	
	assert(pToRand);
	displayNumber(pToRand,N);
	getMidleValue(pToRand,N);
	displayNumber(pToRand,N);
}

