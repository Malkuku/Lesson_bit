#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("************* 1.开始游戏 ************\n");
	printf("************* 0.退出游戏 ************\n");
	printf("*************************************\n");
}

//游戏主体
void game()
{	//数组创建
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	int rows = ROWS;
	int cols = COLS;
	int row = ROW;
	int col = COL;
	
	//初始化界面
	InitBoard(mine, rows, cols, '0');
	InitBoard(show, rows, cols, '*');

	//打印界面
	//DisplayBoard(mine, row, col);
	DisplayBoard(show, row, col);

	//游戏实现
	//随机塞雷
	InitMine(mine, row, col);
	//DisplayBoard(mine, row, col);

	printf("------------------\n");

	//扫雷
	//中雷-直接去世-游戏结束
	//没中雷-继续游戏-显示周围的雷数
	MineFind(mine, show, row, col);
	
}

int main()
{
	int input = 0;
	do
	{
		//随机数种子
		srand((unsigned int)time(NULL));
		//菜单
		menu();
		//菜单的选择
		
		
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");//清屏
			printf("扫雷，启动！\n");
			game();
			break;

		case 0:
			printf("游戏退出！\n");
			break;

		default:
			printf("请选择正确的数字！\n");
			break;
		}

	} while (input);
	

	return 0;
}