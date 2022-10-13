
#include <iostream>
using namespace std;

//返回最小公倍数
int min_mlt(int a, int b)
{
    //先求最大公约数（辗转相除法） 
    int t, num1 = a, num2 = b;

    while (t = a % b, t != 0)
    {
        a = b;
        b = t;
    }
    return (num1 / b) * num2;
}

int main()
{

    int n;
    char ch = '/';

    cin >> n;
    long int num[11][2] = { 0 }, num1, num2;//定义二维数组，num1为分子，num2为分母

    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> ch >> num2;//循环输入n个分数
        if (num1 != 0 && num2 != 0) //如果输入数字不等于0，才赋值给二维数组
        {
            num[i][0] = num1;
            num[i][1] = num2;
        }
    }

    int j = 0;
    int temp = 0;
    long int b;
    while (j < (n - 1))
    {
        long int mlt = min_mlt(num[j][1], num[j + 1][1]);//求出分母最小公倍数

        num[j + 1][0] = num[j][0] * mlt / num[j][1] + num[j + 1][0] * mlt / num[j + 1][1];//求通分后的分子
        num[j + 1][1] = mlt;

        b = min_mlt(num[j + 1][0], num[j + 1][1]);//求出通分后的分子分母最小公倍数
        temp = num[j + 1][1];//临时存储分母，因为下一步会改变分母
        num[j + 1][1] = b / num[j + 1][0];//将分母化简，即最小公倍数除以原来的分子
        num[j + 1][0] = b / temp;//将分子化简，即最小公倍数除以原来的分母
        j++;
    }

    if (num[j][0] % num[j][1] == 0)
    {
        cout << num[j][0] / num[j][1];
    }
    else
    {
        cout << num[j][0] << "/" << num[j][1];
    }
    return 0;
}
