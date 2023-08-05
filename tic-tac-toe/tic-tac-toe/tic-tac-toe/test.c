#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("********** 1.��ʼ��Ϸ *********\n");
	printf("********** 2.�˳���Ϸ *********\n");
	printf("*******************************\n");

}

void game()
{
	//��������-��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DispalyBoard(board, ROW, COL);
	//��Ϸ��������
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//��ҵ��ƶ�
		PlayerMove(board, ROW, COL);
		system("cls");
		DispalyBoard(board, ROW, COL);
		//�ж�״̬
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//���Ե��ƶ�
		ComputerMove(board, ROW, COL);
		system("cls");
		DispalyBoard(board, ROW, COL);
		//�ж�״̬
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
		//�˳��������ж�
		//1.���Ӯ - #
		//2.����Ӯ - *
		//3.ƽ�� - Q
		//4.������Ϸ - C
	if (ret == '#')
		printf("���Ӯ�ˣ�\n");
	else if (ret == '*')
		printf("����Ӯ�ˣ�\n");
	else if (ret == 'Q')
		printf("ƽ�֣�\n");



	
}

int main()
{	
	//���������
	srand( (unsigned int) time(NULL));

	int input = 0;
	//��Ϸ���ڳ�ʼ��
	do
	{
		menu();
		printf("��ѡ��>��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("�����壬������\n");
			game();
			//err   Sleep(2000);
			
			break;

		case 0:
			printf("�˳���Ϸ��\n");
			break;

		default:
			printf("��������ȷ�����֣�\n");
			break;
		}
	} while (input);

	return 0;
}