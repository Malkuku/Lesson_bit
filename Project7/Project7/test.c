#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"

int main()
{
	//��ӡ����ż��λ
	int a = 0;
	scanf("%d", &a);
	display4(a);

	//���򵥴�
	char arr[100] = { 0 };
	gets(arr);//�ò��ˣ�
	//ÿ����ĸ����
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	printf("%s\n", arr);

	return 0;
}