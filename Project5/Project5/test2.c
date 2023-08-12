#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

void init(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
}

void DisplayInit(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 9; i++)//È·¶¨ÌËÊý
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];

			}
		}
		
	}
}


void DisplayInit_c(char arr[], int end)
{
	int i = 0;
	for (i = 0; i < end; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}