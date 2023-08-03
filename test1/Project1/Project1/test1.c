#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写入1904 》》》 1+9+0+4
int Digitsum(int n)
{  
	// 多注意退出条件
	if (n > 0)
	{
		return n%10 + Digitsum( n/10 );
	}
	else
	{
		return 0;
	}

}

int main()
{
	int n = 0;
	printf(":>");
	scanf("%d", &n);

	int i = Digitsum(n);
	
	printf("%d\n", i);
		
	return 0;
}