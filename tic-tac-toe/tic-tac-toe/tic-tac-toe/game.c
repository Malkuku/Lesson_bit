#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{	
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row; i++)
	{	
		// ����Ӧ��
		for (j = 0;j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//ͬ��Ϊ����Ӧ��
		if (i < row - 1)
			for (j = 0;j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		printf("\n");
	}
}

//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col)
{	
	int c = 0;
	int r = 0;
	
	//�ж��Ƿ�Ƿ�
	while (1)
	{   
		printf("������� ������Ӧ�����꣩>��");
	    scanf("%d %d", &r, &c);

		if (r >= 1 && c >= 1 && r <= row && c <= col)
		{
			if (board[r - 1][c - 1] == ' ')
			{
				board[r - 1][c - 1] = '#';
				break;
			}
			else
				printf("�ø����ѱ�ռ�ã����������룡\n");
		}
		else
			printf("����Ƿ������������룡\n");
	}

}

//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int c = 0;
	int r = 0;
	while (1)
	{
		c = rand() % col + 1;
		r = rand() % row + 1;

		if (r >= 1 && c >= 1 && r <= row && c <= col)
		{
			if (board[r - 1][c - 1] == ' ')
			{
				board[r - 1][c - 1] = '*';
				break;
			}
		}
	}
}

//ƽ���ڲ��ж�
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//�жϽ��
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//��
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//��
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j]== board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	//�Խ���
	if ((board[0][0] == board[1][1] && board[1][1]== board[2][2] && board[1][1] != ' ') || (board[2][0] == board[1][1] && board[1][1]== board[0][2] && board[1][1] != ' '))
		return board[1][1];

	//ƽ��
	int ret = IsFull(board, ROW, COL);
	if (ret == 1)
		return 'Q';

	return'C';
}
