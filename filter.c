#include "stdio.h"

//  冒泡排序
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

#define N 10
void filtest(void)
{
    int array_data[10] = {6,5,5,62,4,9,3,33,2,1};
	int i = 0;
	getMidleValue(array_data,10);
	for (i = 0; i < sizeof(array_data)/sizeof(int); i++)
	{
		printf("%d-", array_data[i]);
	}
	printf("\nflltest\r\n");
}

