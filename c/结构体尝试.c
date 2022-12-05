#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[20];
    char sex[5];
    int  age;
}Stu;

void input(Stu* stu);
void output(Stu* stu);

int main(void)
{
    Stu stu[5];
    printf("请输入5个学生的信息：姓名 性别 年龄:\n");
    input(stu);
    printf("5个学生的信息如下：\n姓名  性别  年龄\n");
    output(stu);

    return 0;
}
void input(Stu* stu)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        //用visual studio 2022，scanf和scanf_s会得到不一样的结果
        scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
    }
}
void output(Stu* stu)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
    }
}