#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{	//ָ������-��ŵ���ָ��
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a, b, c };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5;j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//�׵�ַ������ps�� 
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);//��4
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);//��40
//	printf("%p\n", p2+1);
//	
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	return 0;
//}



//int main()
//{	
//	//�ⲻ��һ�ֺõ�д��
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *((*pa) + i));//*pa == arr
//	}
//
//	return 0;
//}
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0;j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
	}
}


int  main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
	print2(arr,3,5);//arr��ʾ��Ԫ�صĵ�ַ

	return 0;
}