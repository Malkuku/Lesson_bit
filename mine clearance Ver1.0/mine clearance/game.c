#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//任意键继续
void GameContinue()
{
	while (1)
	{
		printf("任意键继续……");
		int ret = getchar();
		if (getchar() != EOF)
		{
			break;
		}
	}
	system("cls");

}

//初始化
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

//打印界面
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("+---------------------+\n");
	//打印列框
	printf("| ");
	for (i = 0;i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("| ");
	printf("\n");

	//打印框内
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


//游戏实现
	//随机塞雷
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

//统计周围雷数
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

//扫雷
		//中雷-直接去世-游戏结束
		//没中雷-继续游戏-显示周围的雷数
void MineFind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{	
	int r = 0;
	int c = 0;
	int win = 0;
	while (win < row*col - EASY)// //游戏获胜判断
	{
		printf("请选择要排查的坐标>:");
		scanf("%d %d", &r, &c);
		//判断输入是否非法
		if (r > 0 && r <= row && c > 0 && c <= col && show[r][c] == '*')
		{
			if (mine[r][c] == '1')//踩雷
			{
				printf("你被炸死力……\n");
				show[r][c] = '@';
				DisplayBoard(show, row, col);
				GameContinue();
				break;
			}
			else//没有踩雷
			{
				int ret = get_mine_count(mine, r, c);//统计周围雷数
				show[r][c] = ret + '0';
				win++;
				system("cls");//清屏
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("恭喜你，win！\n");
		GameContinue();
	}
}
	
