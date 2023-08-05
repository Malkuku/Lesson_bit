#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("********** 1.开始游戏 *********\n");
	printf("********** 2.退出游戏 *********\n");
	printf("*******************************\n");

}

void game()
{
	//储存数据-二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DispalyBoard(board, ROW, COL);
	//游戏操作部分
	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家的移动
		PlayerMove(board, ROW, COL);
		system("cls");
		DispalyBoard(board, ROW, COL);
		//判断状态
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑的移动
		ComputerMove(board, ROW, COL);
		system("cls");
		DispalyBoard(board, ROW, COL);
		//判断状态
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
		//退出条件的判断
		//1.玩家赢 - #
		//2.电脑赢 - *
		//3.平局 - Q
		//4.继续游戏 - C
	if (ret == '#')
		printf("玩家赢了！\n");
	else if (ret == '*')
		printf("电脑赢了！\n");
	else if (ret == 'Q')
		printf("平局！\n");



	
}

int main()
{	
	//随机数种子
	srand( (unsigned int) time(NULL));

	int input = 0;
	//游戏窗口初始化
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("三子棋，启动！\n");
			game();
			//err   Sleep(2000);
			
			break;

		case 0:
			printf("退出游戏！\n");
			break;

		default:
			printf("请输入正确的数字！\n");
			break;
		}
	} while (input);

	return 0;
}