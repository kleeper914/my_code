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
    printf("������5��ѧ������Ϣ������ �Ա� ����:\n");
    input(stu);
    printf("5��ѧ������Ϣ���£�\n����  �Ա�  ����\n");
    output(stu);

    return 0;
}
void input(Stu* stu)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        //��visual studio 2022��scanf��scanf_s��õ���һ���Ľ��
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