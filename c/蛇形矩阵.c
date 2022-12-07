#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;
    int count = 1;

    scanf("%d", &num);
    int** arr = (int**)malloc(sizeof(int*)*num);
    for(int i = 0; i < num; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*num);
    }
    //先蛇前半段
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                //偶数时，左下到右上递增
                arr[j][i - j] = count++;
            }
            else
            {
                //奇数时，右上到左下递增
                arr[i - j][j] = count++;
            }
        }
    }
    //再蛇后半段
    for(int i = num - 2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                //偶数时，左下到右上递增
                arr[num - j - 1][num - i - 1 + j] = count++; 
            }
            else
            {
                //奇数时，右上到左下递增
                arr[num - i - 1 + j][num - j - 1] = count++;
            }
        }
    }
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(j < num - 1) printf("%d ", arr[i][j]);
            else printf("%d\n", arr[i][j]);
        }
    }
    free(arr);
    system("pause");
    return 0;
}