//#include <stdio.h>
//
//int main()
//{	
//	////实例1
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe");
//	//else
//	//	printf("haha");//else默认与最近的if匹配
//	
//	//练习1：判断一个数是否为奇数、
//	int a = 0;
//	printf("请输入一个数：");
//	scanf_s("%d", &a);
//	if ((a % 2) == 1)
//		printf("这个数是奇数\n");
//	else if (a <= 0)
//		printf("请输入一个大于0的数\n");
//	else
//		printf("这个数是偶数\n");
//
//	//练习2：输入1-100之间的奇数
//	int b = 1;
//	while (b <= 100)//while循环
//	{
//		if ((b % 2) == 1)
//			printf("%d\n", b);
//		else;
//		b++;
//	}
//
//	printf("基于for循环实现\n");
//	for (int c = 1; c <= 100; c += 2)//for循环
//	{
//		printf("%d\n", c);
//	}
//
//	return 0;
//}