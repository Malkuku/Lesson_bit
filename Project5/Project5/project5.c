#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int main()
{
	int t1 = test1();
	printf("text1: %d\n", t1);
	// 递归
	int i = 0;
	int j = 0;
	printf("请输入>:(test1_2)");
	scanf("%d", &i);
	int t1_2 = test1_2(i, j);
	printf("test1_2: %d\n", t1_2);



	//test3  整形提升
	char a = 3;
	char b = 127;
	char c = a + b;

	printf("整形提升：%d\n", c);

	//实现init（） 初始化数组全为0
	int arr[10] = { 0 };
	init(arr);
	//打印
	DisplayInit(arr);
	//倒叙
	reverse(arr);
	printf("\n");
	DisplayInit(arr);
	printf("\n");
	//计算数组大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	//

	char arr1[50] = "xxxxxxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "I want to play ys!";
	//模拟计算数组大小
	int arr1_end = char_math(arr1);
	int arr2_end = char_math(arr2);
	//模拟strcpy拷贝功能
	
	DisplayInit_c(arr1,arr1_end);
	DisplayInit_c(arr2,arr2_end);
	

	
	/*my_strcpy(arr1, arr2, arr1_end, arr2_end);
	DisplayInit_c(arr1);
	DisplayInit_c(arr2);*/
	
	//简单版本
	my_strcpy_s(arr1, arr2);
	DisplayInit_c(arr1, arr1_end);
	DisplayInit_c(arr2, arr2_end);

	return 0;
}