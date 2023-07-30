#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	/*int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			printf("%d\n", i);
			
		}
	}
	printf( "\ncount=");
	printf("%d\n", count);*/

	//m = a*b
	//a和b中一定至少有一个数字是《=开平方 m的
	//16 = 4*4 = 2*8

	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{	
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sprt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1 )
		{
			count++;
			printf("%d\n", i);

		}
	}
	printf("\ncount=");
	printf("%d\n", count);

	return 0;
}