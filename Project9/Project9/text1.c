#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����   ʵ�ִ�ӡ
int arr_find_2(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px && y >= 0)
	{
		if (k > arr[x][y])
		{
			x++;
		}
		else if (k < arr[x][y])
		{
			y--;
		}
		else if (k == arr[x][y])
		{
			*px = x;
			*py = y;
			return 1;
		}
		else
		{
			break;
		}
	}
	return 0;
}






//1��
int arr_find_1(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	while (x <= r && y >= 0)
	{
		if (k > arr[x][y])
		{
			x++;
		}
		else if (k < arr[x][y])
		{
			y--;
		}
		else if (k == arr[x][y])
		{
			return 1;
		}
		else
		{
			break;
		}
	}
	return 0;
}


int main()
{
	//���Ͼ���
	//1 2 3
	//4 5 6
	//7 8 9
	//ʱ�临�Ӷ�С��O��N��

	//�ȴ���arr���ٴι۲�
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	printf(">:");
	scanf("%d", &k);
	
	// ���k��arr[3][2]���ڴ� 
	printf("%p\n", &k);
	printf("%p\n",&arr[3][2]);

	int x = 3;
	int y = 3;
	int ret = arr_find_2(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("�ҵ���,���ڣ�%d %d\n",x+1 ,y+1);
		
	}
	else
	{
		printf("û�и���\n");
	}
	return 0;
}