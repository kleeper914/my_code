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
		printf("请输入数字1-9以继续使用:");
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
			printf("\n已退出系统\n");
			break;
		default:
			printf("\n输入错误,请重新输入\n\n");
			break;
		}
	}
	return 0;
}

void menu(void)
{
	printf("**********************************************\n");
	printf("\n**********欢迎使用bupt学生信息管理系统**********\n");
	printf("\n**********************************************\n");
	printf("\n||1.使用帮助***************************2.浏览||\n");
	printf("\n||3.查找*******************************4.添加||\n");
	printf("\n||5.删除*******************************6.修改||\n");
	printf("\n||7.保存*******************************8.刷新||\n");
	printf("\n********************9.退出********************\n\n");
}

void help(void)
{
	printf("\n**********************************************\n");
	printf("\n1.输入2，查看当前系统中已存在的学生数据\n");
	printf("\n2.输入3，并输入学生学号，查询学生信息\n");
	printf("\n3.输入4，并输入想要添加的学生信息\n");
	printf("\n4.输入5，输入想要删除的学生学号，并输入delete\n");
	printf("\n5.输入6，输入想要修改的学生学号，并输入修改后的学生学号\n");
	printf("\n6.输入7，用以保存信息，若用户电脑C盘中无student_data.txt文件，则自动创建以保存信息\n");
	printf("\n7.输入8，若再次输入8，则删除文档中所有学生信息\n");
	printf("\n学生信息包括学号，姓名，性别，年龄，以及成绩\n");
	printf("\n成绩包括c语言，高数，英语\n");
	printf("\n最后，感谢使用，若有任何疑问，CW就是傻子\n\n");
	system("pause");
}

void scan()
{
	if (count == 0)
	{
		printf("\n现在系统内无学生信息储存，请输入学生信息\n\n");
		system("pause");
	}
	else
	{
		printf("当前系统内存有学生信息数:%d\n\n", count);
		for (int i = 0; i < count; i++)
		{
			printf("学号:%s\t", students[i].student_num);
			printf("姓名:%s\t", students[i].name);
			printf("性别:%s\t", students[i].sex);
			printf("年龄:%d\n", students[i].age);
			printf("成绩:  1.高数:%d  2.c语言:%d  3.英语:%d", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
			printf("\n\n");
		}
		system("pause");
	}
}

void seek(void)
{
	char temp_num[20] = { 0 };
	int flag = 0;

	printf("请输入要查找的学生的学号:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("\n已找到输入学号对应的学生, 该学生的信息为:\n");
			printf("学号:%s", students[i].student_num);

			printf("学号:%s\t", students[i].student_num);
			printf("姓名:%s\t", students[i].name);
			printf("性别:%s\t", students[i].sex);
			printf("年龄:%d\n", students[i].age);
			printf("成绩:  1.高数:%d  2.c语言:%d  3.英语:%d\n\n", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
			break;
		}
	}
	if (flag == 0)
	{
		printf("系统内无该学号!\n");
	}
	system("pause");
}

void add(void)
{
	int flag = 1;
	int temp = 0;

	printf("请输入要存储的学生数:");
	scanf("%d", &temp);
	for (int i = 0; i < temp; i++)
	{
		printf("请输入第%d名学生的学号:", i + 1);
		scanf("%s", students[count].student_num);
		for (int i = 0; i < count; i++)
		{
			if (strcmp(students[count].student_num, students[i].student_num) == 0)
			{
				printf("该学生已存在，请重新输入!");
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("请输入该学生的姓名:");
			scanf("%s", students[count].name);
			printf("请输入该学生的性别:");
			scanf("%s", students[count].sex);
			printf("请输入该学生的年龄:");
			scanf("%d", &students[count].age);
			printf("请输入该学生的高数成绩:");
			scanf("%d", &students[count].grade.math_grade);
			printf("请输入该学生的c语言成绩:");
			scanf("%d", &students[count].grade.c_grade);
			printf("请输入该学生的英语成绩:");
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

	printf("请输入想要删除的学生学号:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count - 1; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("已找到要删除的学生信息, 开始删除学生信息\n\n");
			for (int j = i; j <= count - 1; j++)
			{
				students[j] = students[j + 1];
			}
			count--;
			printf("删除完毕\n\n");
			break;
		}
	}
	if (flag == 0)
	{
		printf("系统内无该学号!\n");
	}
	system("pause");
}

void change(void)
{
	char temp_num[20] = { 0 };
	int flag = 0;

	printf("请输入想要修改的学生学号:");
	scanf("%s", temp_num);
	for (int i = 0; i <= count; i++)
	{
		if (strcmp(temp_num, students[i].student_num) == 0)
		{
			flag = 1;
			printf("已找到想要修改的学生信息\n");
			printf("请输入修改后的学生信息:\n");
			printf("请输入修改后的学号:");
			scanf("%s", students[i].student_num);
			printf("请输入该学生的姓名:");
			scanf("%s", students[i].name);
			printf("请输入该学生的性别:");
			scanf("%s", students[i].sex);
			printf("请输入该学生的年龄:");
			scanf("%d", &students[i].age);
			printf("请输入该学生的高数成绩:");
			scanf("%d", &students[i].grade.math_grade);
			printf("请输入该学生的c语言成绩:");
			scanf("%d", &students[i].grade.c_grade);
			printf("请输入该学生的英语成绩:");
			scanf("%d", &students[i].grade.Eng_grade);
			break;
		}
	}
	if (flag == 0)
	{
		printf("系统内无该学号!\n\n");
	}
	system("pause");
}

void save(void)
{
	FILE* fp;
	fp = fopen("D:\\students_info.txt", "w+");//若用户D盘中无改文件，则创建一个students_info.txt文件
	if (fp == NULL)
	{
		printf("文件打开或创建错误!!!\n");
		return 0;
	}
	for (int i = 0; i <= count; i++)
	{
		if (students[i].state == true)
		{
			fprintf(fp, "学生编号:%d\n", i + 1);
			fprintf(fp, "学号:%s\t", students[i].student_num);
			fprintf(fp, "姓名:%s\t", students[i].name);
			fprintf(fp, "性别:%s\t", students[i].sex);
			fprintf(fp, "年龄:%d\n", students[i].age);
			fprintf(fp, "成绩:  1.高数:%d  2.c语言:%d  3.英语:%d", students[i].grade.math_grade, students[i].grade.c_grade, students[i].grade.Eng_grade);
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
		printf("文件打开错误或未创建!!!\n");
	}
}