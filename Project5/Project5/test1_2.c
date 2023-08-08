#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"


int test1_2(int i ,int j)
{	
	j++;
	if(j > 1)
	{
		i >>= 1;
	}
	
	if (i != 0)
	{   
		return (i & 1) + test1_2(i, j);
	}
	else
		return 0;
}