#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//1版
void string_left_rotate_1(char arr[], int k, int n)
{
	int imp = 0;
	
	while(k)
	{
		//一次排序
		int x = 0;
		imp = arr[x];
		
		while(n-1 > x)
		{
			arr[x] = arr[x + 1];
			x++;
		}

		arr[x] = imp;
		k--;
	}
}


//对调函数
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;
		left++;
		right--;
	}
	
}


//二版:三步翻转法
void string_left_rotate_2(char* arr, int k)
{
	//指针保险
	assert(arr);

	int n = strlen(arr);
	//左对调
	reverse(arr, arr + k - 1);
	//右对调
	reverse(arr + k, arr + n - 1);
	//整体对调
	reverse(arr, arr + n - 1);
}

//判断一个字符串是否为另一个旋转得来
int is_string_rotate_1(char* arr1, char* arr2)
{
	//旋转其中一个数组
	int n1 = strlen(arr1);//strlen是不会计算'\0'的
	for (int j = 0; j < n1; j++)
	{
		//int tmp = arr1[0];
		for (int i = 0; i < n1 - 1; i++)//事实上只要异或交换4次
		{
			arr1[i] ^= arr1[i + 1];
			arr1[i + 1] ^= arr1[i];
			arr1[i] ^= arr1[i + 1];
		}
		//arr1[n1 - 2] = tmp;
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}

	return 0;
}

int main()
{
	//char arr[] = { "ABCDEFG" };
	//int k = 0;

	//while(1)
	//{
	//	printf(">:");
	//	scanf("%d", &k);

	//	//也包括了‘\0’,所以-1获取元素个数
	//	//bug已修复
	//	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	//	//字符串左旋
	//	string_left_rotate_2(arr, k);
	//	for (int i = 0; i < n; i++)
	//	{
	//		printf("%c", arr[i]);
	//	}
	//	printf("\n");
	//}

	//判断一个字符串是否为另一个旋转得来
	char arr1[] = "ABCDE";
	char arr2[] = "CDEAB";
	int ret = is_string_rotate_1(arr1, arr2);
	if (ret == 1)
	{
		printf("true");
	}
	else
	{
		printf("flase");
	}

	return 0;
}