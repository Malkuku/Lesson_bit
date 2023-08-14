#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"

int main()
{
	//打印奇数偶数位
	int a = 0;
	scanf("%d", &a);
	display4(a);

	//逆序单词
	char arr[100] = { 0 };
	gets(arr);//用不了？
	//每个字母逆序
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	printf("%s\n", arr);

	return 0;
}