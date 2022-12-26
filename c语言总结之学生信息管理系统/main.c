#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void menu(void);
void help(void);
void scan(void);
void seek(void);
void add(void);
void delete(void);
void change(void);
void save(void);
void flush(void);

#define STU_NUM 10
#define NAME 8
#define SEX 7
#define NUM 100

int count = 0;

typedef struct
{
	int c_grade;
	int math_grade;
	int Eng_grade;
}Grade;

struct STUDENT
{
	char student_num[STU_NUM + 1];
	char name[NAME + 1];
	char sex[SEX + 1];
	int age;
	bool state;
	Grade grade;
}students[NUM];

int main(void)
{
	int n = 0;
	while (n != 9)
	{
		menu();
		printf("����������1-9�Լ���ʹ��:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			help();
			break;
		case 2:
			scan();
			break;
		case 3:
			seek();
			break;
		case 4:
			add();
			break;
		case 5:
			delete();
			break;
		case 6:
			change();
			break;
		case 7:
			save();
			break;
		case 8:
			flush();
			break;
		case 9:
			printf("\n���˳�ϵͳ\n");
			break;
		default:
			printf("\n�������,����������\n\n");
			break;
		}
	}
	return 0;
}

void menu(void)
{
	printf("**********************************************\n");
	printf("\n**********��ӭʹ��buptѧ����Ϣ����ϵͳ**********\n");
	printf("\n**********************************************\n");
	printf("\n||1.ʹ�ð���***************************2.���||\n");
	printf("\n||3.����*******************************4.���||\n");
	printf("\n||5.ɾ��*******************************6.�޸�||\n");
	printf("\n||7.����*******************************8.ˢ��||\n");
	printf("\n********************9.�˳�********************\n\n");
}

void help(void)
{
	printf("\n**********************************************\n");
	printf("\n1.����2���鿴��ǰϵͳ���Ѵ��ڵ�ѧ������\n");
	printf("\n2.����3��������ѧ��ѧ�ţ���ѯѧ����Ϣ\n");
	printf("\n3.����4����������Ҫ��ӵ�ѧ����Ϣ\n");
	printf("\n4.����5��������Ҫɾ����ѧ��ѧ�ţ�������delete\n");
	printf("\n5.����6��������Ҫ�޸ĵ�ѧ��ѧ�ţ��������޸ĺ��ѧ��ѧ��\n");
	printf("\n6.����7�����Ա�����Ϣ�����û�����C������student_data.txt�ļ������Զ������Ա�����Ϣ\n");
	printf("\n7.����8�����ٴ�����8����ɾ���ĵ�������ѧ����Ϣ\n");
	printf("\nѧ����Ϣ����ѧ�ţ��������Ա����䣬�Լ��ɼ�\n");
	printf("\n�ɼ�����c���ԣ�������Ӣ��\n");
	printf("\n��󣬸�лʹ�ã������κ����ʣ�CW����ɵ��\n\n");
	system("pause");
}

void scan()
{
	if (count == 0)
	{
		printf("\n����ϵͳ����ѧ����Ϣ���棬������ѧ����Ϣ\n\n");
		system("pause");
	}
	else
	{
		printf("��ǰϵͳ�ڴ���ѧ����Ϣ��:%d\n\n", count);
		for (int i = 0; i < count; i++)
		{
			printf("ѧ��:%s\t", students[i].student_num);
			printf("����:%s\t", students[i].name);
			printf("�Ա�:%s\t", students[i].sex);
			printf("����:%d\n", students[i].age);
			printf("�ɼ�:  1.����:%d  2.c����:%d  3.Ӣ��:%d", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
			printf("\n\n");
		}
		system("pause");
	}
}

void seek(void)
{
	char temp_num[20] = { 0 };
	int flag = 0;

	printf("������Ҫ���ҵ�ѧ����ѧ��:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("\n���ҵ�����ѧ�Ŷ�Ӧ��ѧ��, ��ѧ������ϢΪ:\n");
			printf("ѧ��:%s", students[i].student_num);

			printf("ѧ��:%s\t", students[i].student_num);
			printf("����:%s\t", students[i].name);
			printf("�Ա�:%s\t", students[i].sex);
			printf("����:%d\n", students[i].age);
			printf("�ɼ�:  1.����:%d  2.c����:%d  3.Ӣ��:%d\n\n", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
			break;
		}
	}
	if (flag == 0)
	{
		printf("ϵͳ���޸�ѧ��!\n");
	}
	system("pause");
}

void add(void)
{
	int flag = 1;
	int temp = 0;

	printf("������Ҫ�洢��ѧ����:");
	scanf("%d", &temp);
	for (int i = 0; i < temp; i++)
	{
		printf("�������%d��ѧ����ѧ��:", i + 1);
		scanf("%s", students[count].student_num);
		for (int i = 0; i < count; i++)
		{
			if (strcmp(students[count].student_num, students[i].student_num) == 0)
			{
				printf("��ѧ���Ѵ��ڣ�����������!");
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("�������ѧ��������:");
			scanf("%s", students[count].name);
			printf("�������ѧ�����Ա�:");
			scanf("%s", students[count].sex);
			printf("�������ѧ��������:");
			scanf("%d", &students[count].age);
			printf("�������ѧ���ĸ����ɼ�:");
			scanf("%d", &students[count].grade.math_grade);
			printf("�������ѧ����c���Գɼ�:");
			scanf("%d", &students[count].grade.c_grade);
			printf("�������ѧ����Ӣ��ɼ�:");
			scanf("%d", &students[count].grade.Eng_grade);
			students[count].state = true;
			count++;
		}
		flag = 1;
	}
	system("pause");
}

void delete(void)
{
	char temp_num[20] = { 0 };
	int flag = 0;

	printf("��������Ҫɾ����ѧ��ѧ��:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count - 1; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("���ҵ�Ҫɾ����ѧ����Ϣ, ��ʼɾ��ѧ����Ϣ\n\n");
			for (int j = i; j <= count - 1; j++)
			{
				students[j] = students[j + 1];
			}
			count--;
			printf("ɾ�����\n\n");
			break;
		}
	}
	if (flag == 0)
	{
		printf("ϵͳ���޸�ѧ��!\n");
	}
	system("pause");
}

void change(void)
{
	char temp_num[20] = { 0 };
	int flag = 0;

	printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("���ҵ���Ҫ�޸ĵ�ѧ����Ϣ\n");
			printf("�������޸ĺ��ѧ����Ϣ:\n");
			printf("�������޸ĺ��ѧ��:");
			scanf("%s", students[i].student_num);
			printf("�������ѧ��������:");
			scanf("%s", students[i].name);
			printf("�������ѧ�����Ա�:");
			scanf("%s", students[i].sex);
			printf("�������ѧ��������:");
			scanf("%d", &students[i].age);
			printf("�������ѧ���ĸ����ɼ�:");
			scanf("%d", &students[i].grade.math_grade);
			printf("�������ѧ����c���Գɼ�:");
			scanf("%d", &students[i].grade.c_grade);
			printf("�������ѧ����Ӣ��ɼ�:");
			scanf("%d", &students[i].grade.Eng_grade);
			break;
		}
	}
	if (flag == 0)
	{
		printf("ϵͳ���޸�ѧ��!\n\n");
	}
	system("pause");
}

void save(void)
{
	FILE* fp;
	fp = fopen("D:\\students_info.txt", "w+");//���û�D�����޸��ļ����򴴽�һ��students_info.txt�ļ�
	if (fp == NULL)
	{
		printf("�ļ��򿪻򴴽�����!!!\n");
		return 0;
	}
	for (int i = 0; i <= count; i++)
	{
		if (students[i].state == true)
		{
			fprintf(fp, "ѧ�����:%d\n", i + 1);
			fprintf(fp, "ѧ��:%s\t", students[i].student_num);
			fprintf(fp, "����:%s\t", students[i].name);
			fprintf(fp, "�Ա�:%s\t", students[i].sex);
			fprintf(fp, "����:%d\n", students[i].age);
			fprintf(fp, "�ɼ�:  1.����:%d  2.c����:%d  3.Ӣ��:%d", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
			fprintf(fp, "\n\n");
		}
	}
	system("pause");
}

void flush(void)
{
	FILE* fp;
	fp = fopen("D:\\students_info.txt", "w");
	if (fp == NULL)
	{
		printf("�ļ��򿪴����δ����!!!\n");
	}
}