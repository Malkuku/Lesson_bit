#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int main()
{
	int t1 = test1();
	printf("text1: %d\n", t1);
	// µİ¹é
	int i = 0;
	int j = 0;
	printf("ÇëÊäÈë>:(test1_2)");
	scanf("%d", &i);
	int t1_2 = test1_2(i, j);
	printf("test1_2: %d\n", t1_2);

	return 0;
}