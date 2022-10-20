#include <stdio.h>

int main(void)
{
    int num = 0;
    int temp = 0;
    int n = 0, count = 0;
    int m = 1;
    int flag = 0;

    scanf("%d", &num);
    int num_2 = num * num;
    if (num > 10000)
    {
        printf("%d out of range\n", num);
    }
    while (num_2 > 0)
    {
        temp = num_2 % 10;
        num_2 /= 10;
        count++;
        for (int i = 0; i < count - 1; i++)
        {
            m *= 10;
        }
        n += temp * m;
        m = 1;
        if (n == num)
        {
            printf("Yes\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("No\n");
    }
    return 0;
}