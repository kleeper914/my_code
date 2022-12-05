#include <stdio.h>

int count = 0;

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
	printf("输入任何键以回到菜单:");
	getchar();	getchar();
	printf("\n\n");
}

void scan(void)
{
	if (count == 0)
	{
		printf("\n现在系统内无学生信息储存，请输入学生信息\n");
	}
	else
	{
		printf("当前系统内存有学生信息数:%d", count);
		for (int i = 0; i < count; i++)
		{
			printf("学号:");
		}
	}
}