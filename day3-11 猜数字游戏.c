#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>    // һ �ȵ����������Ҫһ���������棡
#include<stdlib.h>   // �� Game ����һ��������
#include<time.h>
void menu()
{
	printf("********main menu********\n");
	printf("***  1.play  2.exit  ****\n");               //%100 ������ һ���ܴ���������С��
	printf("*************************\n");
}
//RAND_MAX  // 0-32767֮�䣻
void game()
{
	int player = 0;
	int unk = 0;     //  ͨ��ʱ�������ȡ���������ʼ��
	//srand((unsigned int)time(NULL));       // srand ��ֵ���Ǳ��������ܲ����������  ��Ҫ��ε��á�
	unk = rand()%100+1;   // srand �� rand ������ lib�У���3 �п�������һ���������
	printf("***GAME START!***\n");
	printf("���һ��1-100����\n");
	while (1)
	{
		scanf("%d", &player);
		if (player > unk)
			printf("�´���!\n");      //
		else if(player <unk)
			printf("��С��!\n");
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));      // 

	do
	{
		menu();
		printf(" choose one ; ) "); // do while ��Ϊ����ִ��һ�Ρ�
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("Game Over\n");
			break;
		default:
			printf("Input Error\n");
			break;
		}
	} while (input == 1);
    return 0;
}