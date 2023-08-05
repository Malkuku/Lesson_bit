#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

//头文件的引用
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3

//函数的声明

//棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);

//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col);

//判断比赛结果
char IsWin(char board[ROW][COL], int row, int col);