#include"day20_5txl_contact.h"
//�еĺ�������Ҫ����ͷ�ļ���
static int FindByName(struct Contact* arr, const char name[Max_name])
{
	int i = 0;
	for (i = 0; i < arr->count; i++)
	{
		if (0 == strcmp(arr->data[i].name, name))
			return i;
	}
	return  -1;
}
void InitContact(struct Contact* pp)
{
	memset(pp->data,0,sizeof(pp->data));
	pp->count = 0;
}
void New(struct Contact* arr)
{
	if (arr->count == Capacity)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", arr->data[arr->count].name);
		printf("������绰\n");
		scanf("%s", arr->data[arr->count].telephone);
		printf("�������Ա�\n");
		scanf("%s", arr->data[arr->count].sex);
		printf("����������\n");
		scanf("%d",&(arr->data[arr->count].age)); //һ��Ҫ��&
		arr->count++;
		printf("�½��ɹ�\n");
	}
	
}
void Delete(struct Contact* arr)
{
	char Nam[Max_name];
	printf("����ɾ˭��\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("Ŀ�겻����\n");
	else
	{
		for (int j = pos; j < (arr->count - 1); j++)
			arr->data[j] = arr->data[j + 1];
	}
	arr->count--;
	printf("��ɾ��\n");
}
void Edit(struct Contact* arr)
{
	char Nam[Max_name];
	printf("�������˭����Ϣ��\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("Ŀ�겻����\n");
	else
	{
		printf("����������\n");
		scanf("%s", arr->data[pos].name);
		printf("������绰\n");
		scanf("%s", arr->data[pos].telephone);
		printf("�������Ա�\n");
		scanf("%s", arr->data[pos].sex);
		printf("����������\n");
		scanf("%d", &(arr->data[pos].age)); //һ��Ҫ��&
		printf("�޸ĳɹ�\n");
	}
}
void Sort(struct Contact* arr)
{
	printf("4\n");
}
void Show(struct Contact* arr)
{
	int num = arr->count;
	if (num)
	{
		for (int i = 0; i < num; i++)
		{
			printf("%-20s\t%-12s\t%-6s\t%-3s\n","����","�绰","�Ա�","����");
			printf("%-20s\t%-12s\t%-6s\t%-3d\n", 
				arr->data[i].name, 
				arr->data[i].telephone,
				arr->data[i].sex, 
				arr->data[i].age);
		}
	}
	else
	{
		printf("ͨѶ¼Ϊ��\n");
	}
}
void Search(struct Contact* arr)
{
	char Nam[Max_name];
	printf("������˭��\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("Ŀ�겻����\n");
	else
		printf("%-20s\t%-12s\t%-6s\t%-3s\n", "����", "�绰", "�Ա�", "����");
		printf("%-20s\t%-12s\t%-6s\t%-3d\n",
			arr->data[pos].name,
			arr->data[pos].telephone,
			arr->data[pos].sex,
			arr->data[pos].age);
}
void(*p_f_arr[6])(struct Contact*) = { New,Delete,Edit,Sort,Show,Search };