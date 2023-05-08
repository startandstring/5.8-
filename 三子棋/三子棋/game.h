#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//
#include<time.h>//调用随机数生成函数头文件


//定义游戏的类型
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
//这里我的思路是通过判断函数返回的值去判断输赢，1为玩家获胜 0为电脑获胜 2为平局。
char IsWin(char board[ROW][COL], int row, int col);