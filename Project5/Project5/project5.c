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

	return 0;
}