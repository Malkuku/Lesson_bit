#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

//ͷ�ļ�������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 3
#define COL 3

//����������

//���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);

//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col);

//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col);

//�жϱ������
char IsWin(char board[ROW][COL], int row, int col);