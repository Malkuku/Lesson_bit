#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二版   实现打印
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






//1版
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
	//杨氏矩阵
	//1 2 3
	//4 5 6
	//7 8 9
	//时间复杂度小于O（N）

	//先创建arr，再次观察
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	printf(">:");
	scanf("%d", &k);
	
	// 检查k和arr[3][2]的内存 
	printf("%p\n", &k);
	printf("%p\n",&arr[3][2]);

	int x = 3;
	int y = 3;
	int ret = arr_find_2(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了,它在：%d %d\n",x+1 ,y+1);
		
	}
	else
	{
		printf("没有该数\n");
	}
	return 0;
}