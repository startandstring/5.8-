#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//
#include<time.h>//������������ɺ���ͷ�ļ�


//������Ϸ������
#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
//�����ҵ�˼·��ͨ���жϺ������ص�ֵȥ�ж���Ӯ��1Ϊ��һ�ʤ 0Ϊ���Ի�ʤ 2Ϊƽ�֡�
char IsWin(char board[ROW][COL], int row, int col);