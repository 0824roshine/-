#define _CRT_SECURE_NO_WARNINGS
#include"game1.h"
void menu()
{
	printf("   WELCOME\n");
	printf("1 play 2 exit\n");
}
void game()
{
//��Ҫ�����ҵĲ��衣
	int count = 0;
	int playerw = 0;
	int who = 1;
	int position = ROW*COL;
	char BOARD[ROW][COL] = { '0' };
//��ʼ������
	initial_board(ROW, COL, BOARD);
//��ʾ����       
	dispaly(ROW, COL, BOARD);
//���� 
	while (1)
	{
		move(ROW, COL,who,BOARD);
		position--;
		dispaly(ROW, COL, BOARD);
		printf("\n");
		if (JudgeWin(ROW, COL, GOAL, who, BOARD))
		{
			printf("THE WINNER IS PLAYER %d\n",(who%2));
			break;
		}
		if (position == 0)
		{
			printf("NO POSITION LEFT,NO WINNER, GAME OVER\n");
			break;
		}
		who++;
	}
}
void test()
{
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf(" ��ѡ��\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case(1):
		{
			printf("THE GAME ISON\n");
			game();
			break;
		}
		case(2):
		{
			printf("GAMEOVER\n");
			break;
		}
		default:
		{
			printf("INPUT ERROR\nTRY AGAIN\n");
			Sleep(500);
			break;
		}
		}
	} while(choose!=2);
}
int main()
{
	printf("������version1.0\n�����Ѷȣ�ֻ������\n���̴�С %d*%d\n������%d��\n",ROW,COL,GOAL);
	test();
	return 0;
}