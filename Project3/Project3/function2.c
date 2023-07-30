//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<math.h>
//
//int is_prime(int n)//不建议打印！
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void menu()
//{
//	printf("#######################\n");
//	printf("####### 1.开始 ########\n");
//	printf("####### 0.退出 ########\n");
//	printf("#######################\n");
//}




//int main()
//{
//	//判断一个数是不是素数
//	int a = 0;
//	int b = 0;
//	menu();
//	int c = 0;
//
//	while (b = getchar() != EOF)
//	{
//		printf("请输入一个数:"); 
//		scanf("%d", &a);
//		if (is_prime(a) == 1)
//		{
//			printf("这个数是素数！\n");
//		}
////		else if(a == 0 || b == "0")
////		{
////			printf("退出成功！");
////			break;
////		}
//		else
//		{
//			printf("不是素数！\n");
//		}
//	}
//
//	return 0;
//}