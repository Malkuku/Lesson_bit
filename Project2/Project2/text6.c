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
//	printf("***************************\n");//�˵� 
//}
//// ��Ϸ����
//void game()
//{
//	int ret = rand() % 100 + 1;//����һ��1-100�������
//	int input = 0;
//	system("cls");//����
//	printf("��Ϸ��ʼ��\n��£�>");
//
//	while (1)
//	{	
//		scanf("%d", &input);
//
//		if (input > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (input < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("�����ˣ�\n");
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
//	srand((unsigned int)time(NULL)); //���������
//
//	do
//	{
//		memu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//		default:
//			printf("������ѡ��");
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