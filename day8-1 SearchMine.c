#define _CRT_SECURE_NO_WARNINGS
#include"SearchMine.h"
void menu()
{
	printf("       ɨ��1.0\n  ����:%d*%d���׸�����%d\n��ѡ��  1. ��ʼ  2.�˳�\n",ROW,COL,NUM);
}
void game()
{
    char MAP[ROW][COL] = {'0'};
	char show[ROW][COL] = { '0' };
	char status[ROW][COL] = {'0'};
	int notmine = ROW * COL - NUM;
	printf("��Ϸ��ʼ\n");
	generate(ROW,COL,NUM,MAP,show, status);//display(ROW, COL, show);display(ROW, COL, status);
	//display(ROW, COL, MAP);
	do {
		display(ROW, COL, show);
	} while (clear(ROW, COL,&notmine, MAP, show, status)&&(notmine));
	display(ROW, COL, MAP);
	if(notmine == 0)
	{
		printf("��Ӯ��!\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(2):
			return 0;
			break;
		default:
			printf("�������\n");
		}
	} while (input!=2);
}
int main()
{
	test();
	return 0;
}