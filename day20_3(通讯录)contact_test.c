#define _CRT_SECURE_NO_WARNINGS
#include"day20_5txl_contact.h"
void menu()
{
	printf("****************************\n");
	printf("***********ͨѶ¼***********\n");
	printf("*****1.����******2.�˳�*****\n");
	printf("****************************\n");
}
void function_list()
{
	printf("****************************\n");
	printf("**********�����б�**********\n");
	printf("*****1.�½�******2.ɾ��*****\n");
	printf("*****3.�༭******4.����*****\n");
	printf("*****5.��ʾ******6.����*****\n");
	printf("**********7.����************\n");
}
void test(int* subfun ,struct Contact* arr)
{
	int tmp = 0;
	while (1)
	{
		function_list();
		scanf("%d", &tmp);
		*subfun = tmp;
		if (tmp > 7 || tmp < 1)
		{
			printf("�������\n");
		}
		else if (*subfun == 7)
		{
			break;
		}
		else
		(*p_f_arr[--tmp])(&arr);
	}
}
int main()
{
	int mainfun = 0, subfun = 0; 
	struct Contact list1;
	InitContact(&list1);
	do
	{
		menu();
		scanf("%d", &mainfun);
		switch (mainfun)
		{
			case 1:
				test(&subfun,&list1);
				break;
			case 2:
				return 0;
			default:
				printf("�������\n");
				subfun = 7;
				break;
		}	
	} while (subfun==7);
		return 0;
}