#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//���������
void GameContinue()
{
	while (1)
	{
		printf("�������������");
		int ret = getchar();
		if (getchar() != EOF)
		{
			break;
		}
	}
	system("cls");

}

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("+---------------------+\n");
	//��ӡ�п�
	printf("| ");
	for (i = 0;i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("| ");
	printf("\n");

	//��ӡ����
	for (i = 1;i <= row; i++)
	{	
		printf("| ");
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("|");
		printf("\n");
		
	}
	printf("+---------------------+\n");
}


//��Ϸʵ��
	//�������
void InitMine(char board[ROWS][COLS], int row, int col)
{	
	int count = EASY;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
	
}

//ͳ����Χ����
int get_mine_count(char mine[ROWS][COLS], int r, int c)
{
	return
		mine[r - 1][c - 1] +
		mine[r - 1][c] +
		mine[r][c - 1] +
		mine[r + 1][c + 1] +
		mine[r + 1][c] +
		mine[r][c + 1] +
		mine[r - 1][c + 1] +
		mine[r + 1][c - 1] - 8 * '0';
}

//ɨ��
		//����-ֱ��ȥ��-��Ϸ����
		//û����-������Ϸ-��ʾ��Χ������
void MineFind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{	
	int r = 0;
	int c = 0;
	int win = 0;
	while (win < row*col - EASY)// //��Ϸ��ʤ�ж�
	{
		printf("��ѡ��Ҫ�Ų������>:");
		scanf("%d %d", &r, &c);
		//�ж������Ƿ�Ƿ�
		if (r > 0 && r <= row && c > 0 && c <= col && show[r][c] == '*')
		{
			if (mine[r][c] == '1')//����
			{
				printf("�㱻ը��������\n");
				show[r][c] = '@';
				DisplayBoard(show, row, col);
				GameContinue();
				break;
			}
			else//û�в���
			{
				int ret = get_mine_count(mine, r, c);//ͳ����Χ����
				show[r][c] = ret + '0';
				win++;
				system("cls");//����
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("��ϲ�㣬win��\n");
		GameContinue();
	}
}
	
