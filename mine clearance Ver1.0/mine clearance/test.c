#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("************* 1.��ʼ��Ϸ ************\n");
	printf("************* 0.�˳���Ϸ ************\n");
	printf("*************************************\n");
}

//��Ϸ����
void game()
{	//���鴴��
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	int rows = ROWS;
	int cols = COLS;
	int row = ROW;
	int col = COL;
	
	//��ʼ������
	InitBoard(mine, rows, cols, '0');
	InitBoard(show, rows, cols, '*');

	//��ӡ����
	//DisplayBoard(mine, row, col);
	DisplayBoard(show, row, col);

	//��Ϸʵ��
	//�������
	InitMine(mine, row, col);
	//DisplayBoard(mine, row, col);

	printf("------------------\n");

	//ɨ��
	//����-ֱ��ȥ��-��Ϸ����
	//û����-������Ϸ-��ʾ��Χ������
	MineFind(mine, show, row, col);
	
}

int main()
{
	int input = 0;
	do
	{
		//���������
		srand((unsigned int)time(NULL));
		//�˵�
		menu();
		//�˵���ѡ��
		
		
		printf("��ѡ��>��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");//����
			printf("ɨ�ף�������\n");
			game();
			break;

		case 0:
			printf("��Ϸ�˳���\n");
			break;

		default:
			printf("��ѡ����ȷ�����֣�\n");
			break;
		}

	} while (input);
	

	return 0;
}