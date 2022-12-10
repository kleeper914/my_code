#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n);

int main(void)
{
    int num = 0;
    printf("请输入一个偶数：");
    scanf("%d", &num);
    for(int i = 2; i <= num/2; i++)
    {
        if(isPrime(i) && isPrime(num - i))
        {
            printf("该偶数可拆分为%d和%d\n", i, num - i);
        }
    }
    system("pause");
    return 0;
}

int isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}