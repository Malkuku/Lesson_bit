#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	
	for (i = 0; i < sz-1; i++)
	{	
		int j = 0;
		for (j = 0; j <= sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])//ð������
			{
				int imp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = imp;
			}
		}
		
	}
}



//����ð������
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ��main������ȼ���ô�С
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

 	return 0;
}