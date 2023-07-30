//#include<stdio.h>
//
//int main()
//{	// 优化的答案
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10;n++)
//	{
//		ret *= n;
//		sum += ret;
//		
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//int i = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int sum = 0;
//	////规范答案
//	//for (n = 1;n <= 10;n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1;i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//	//printf("%d\n", sum);
//
//	return 0;
//}
////计算1！+2!+.....+10!
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	int d = 0;
//	for (a = 1;a <= 10;a++)
//	{
//		printf("a的值：");
//		printf("%d\n", a);
//
//		for (d = 1; d <= a; a --)
//		{
//			b = b * a;
//			printf("b的值：");
//			printf("%d\n", b);
//			c += b;
//
//		}
//		printf("c的值：");
//		printf("%d\n", c);
//
//		//	if (b > 10000)//强制退出
//		//	{
//		//		break;
//		//	}
//	}
//	printf("最终值：");
//	printf("%d", c);