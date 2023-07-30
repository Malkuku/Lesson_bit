//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>// 字符串类头文件
//
//int main()
//{
//	int i = 0;
//	//假设正确密码是一串字符串
//	char password[20] = { 0 };
//
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);//数组不用取地址
//		//两个文件比较，应该用scrcmp
//		if (strcmp(password, "123456") == 0)//返回值为零
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("三次错误，退出程序！\n");
//
//	return 0;
//}