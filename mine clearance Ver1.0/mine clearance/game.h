#pragma once

//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�Զ����
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY 10
#define TEST 80
// ��������

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//��Ϸʵ��
	//�������
void InitMine(char board[ROWS][COLS], int row, int col);
	//ɨ��
		//����-ֱ��ȥ��-��Ϸ����
		//û����-������Ϸ-��ʾ��Χ������
void MineFind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//���������
void GameContinue();