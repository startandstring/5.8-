#pragma once

#include"game.h"
void menu()
{
	 printf("*****************************\n");
	 printf("********  1. play   *********\n");
	 printf("********  0. exit   *********\n");
	 printf("*****************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL); //��ʼ������
	DisplayBoard(board, ROW, COL); //��ӡ����
	//����
	int ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("����Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			    printf("�˳���Ϸ\n");
			    break;
		default:
			    printf("ѡ�����������ѡ��");
			    break;
		}
	} while (input);
	return 0;
}