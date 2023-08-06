#pragma once

//头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//自定义符
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY 10
#define TEST 80
// 函数定义

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印界面
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//游戏实现
	//随机塞雷
void InitMine(char board[ROWS][COLS], int row, int col);
	//扫雷
		//中雷-直接去世-游戏结束
		//没中雷-继续游戏-显示周围的雷数
void MineFind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//任意键继续
void GameContinue();