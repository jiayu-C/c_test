#include "stdio.h"

void getMidleValue(int tem[],int n) //   中位值滤波: 冒泡排序取中间值
{
	int i,j,temp;
	for(i=0;i<n-1;i++)  // 
	{
		for(j=0;j<i-1;j++)			// 比较的趟数
		{
			if(tem[j] > tem[j+1])	// 数与数间比较的次数
			{
				temp = tem[j+1];
				tem[j+1] = tem[j];
				tem[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d-",tem[i]);
	}
}

void array_num(void)
{

	printf("hello");
}


void filtest(void)
{
	printf("flltest\r\n");
}

