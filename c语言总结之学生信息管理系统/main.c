#define _CRT_SECURE_NO_WARNINGS

#include "my_funtion.h"

#define STU_NUM 10
#define NAME 8
#define SEX 7

typedef struct
{
	int c_grade;
	int math_grade;
	int Eng_grade;
}Grade;

typedef struct
{
	char student_num[STU_NUM + 1];
	char name[NAME + 1];
	char sex[SEX + 1];
	int age;
	Grade grade;
}STUDENT;

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
		default:
			break;
		}
	}
	return 0;
}