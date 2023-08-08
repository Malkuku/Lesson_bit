#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

//
int test1()
{
	int i = 0;
	int j = 0;
	int count = 0;
	printf("ÇëÊäÈë>:");
	scanf("%d", &i);
	for (j = 0; j < 32; j++)
	{

		if ((i & 1) == 1)
		{
			count++;
		}
		i >>= 1;
	}

	return count;
}