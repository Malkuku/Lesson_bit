#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"


void display4(int a)
{
	int i = 0;
	//Å¼Êý
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	//ÆæÊý
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
}

