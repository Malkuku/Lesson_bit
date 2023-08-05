#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
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

//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row; i++)
	{	
		// 自适应化
		for (j = 0;j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//同样为自适应化
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

//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col)
{	
	int c = 0;
	int r = 0;
	
	//判断是否非法
	while (1)
	{   
		printf("请操作（ 输入相应的坐标）>：");
	    scanf("%d %d", &r, &c);

		if (r >= 1 && c >= 1 && r <= row && c <= col)
		{
			if (board[r - 1][c - 1] == ' ')
			{
				board[r - 1][c - 1] = '#';
				break;
			}
			else
				printf("该格子已被占用！请重新输入！\n");
		}
		else
			printf("坐标非法！请重新输入！\n");
	}

}

//电脑移动
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

//平局内部判断
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

//判断结果
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j]== board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	//对角线
	if ((board[0][0] == board[1][1] && board[1][1]== board[2][2] && board[1][1] != ' ') || (board[2][0] == board[1][1] && board[1][1]== board[0][2] && board[1][1] != ' '))
		return board[1][1];

	//平局
	int ret = IsFull(board, ROW, COL);
	if (ret == 1)
		return 'Q';

	return'C';
}
