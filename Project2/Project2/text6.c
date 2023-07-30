//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//
//void memu()
//{
//	printf("***************************\n");
//	printf("********** 1.play *********\n");
//	printf("********** 0.exit *********\n");
//	printf("***************************\n");//菜单 
//}
//// 游戏主体
//void game()
//{
//	int ret = rand() % 100 + 1;//生成一个1-100的随机数
//	int input = 0;
//	system("cls");//清屏
//	printf("游戏开始！\n请猜：>");
//
//	while (1)
//	{	
//		scanf("%d", &input);
//
//		if (input > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if (input < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("猜中了！\n");
//			break;
//		}
//	}
//}
//
//
//
//
//int main()
//{	
//	int input = 0;
//
//	srand((unsigned int)time(NULL)); //随机数种子
//
//	do
//	{
//		memu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//		default:
//			printf("请重新选择");
//
//
//		}
//
//	
//	} while (input);
//	
//
//	return 0;
//}