
#include <iostream>
using namespace std;

//������С������
int min_mlt(int a, int b)
{
    //�������Լ����շת������� 
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
    long int num[11][2] = { 0 }, num1, num2;//�����ά���飬num1Ϊ���ӣ�num2Ϊ��ĸ

    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> ch >> num2;//ѭ������n������
        if (num1 != 0 && num2 != 0) //����������ֲ�����0���Ÿ�ֵ����ά����
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
        long int mlt = min_mlt(num[j][1], num[j + 1][1]);//�����ĸ��С������

        num[j + 1][0] = num[j][0] * mlt / num[j][1] + num[j + 1][0] * mlt / num[j + 1][1];//��ͨ�ֺ�ķ���
        num[j + 1][1] = mlt;

        b = min_mlt(num[j + 1][0], num[j + 1][1]);//���ͨ�ֺ�ķ��ӷ�ĸ��С������
        temp = num[j + 1][1];//��ʱ�洢��ĸ����Ϊ��һ����ı��ĸ
        num[j + 1][1] = b / num[j + 1][0];//����ĸ���򣬼���С����������ԭ���ķ���
        num[j + 1][0] = b / temp;//�����ӻ��򣬼���С����������ԭ���ķ�ĸ
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
