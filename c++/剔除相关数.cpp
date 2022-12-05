#include <iostream>
#include <cstdlib>
using namespace std;

int is_relation(int n1, int n2);
void bubble_sort(int arr[], int num);
int main()
{
    int num = 1;

    while (num != 0)
    {
        cin >> num;
        if (num == 0)break;
        int* p = new int[num];
        int* out = new int[num];
        int n = 0;
        for (int i = 0; i < num; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < num; i++)
        {
            int flag = 0;
            int count = 0;
            for (int j = 0; j < num; j++)
            {
                if (j == i)continue;
                count++;
                if (is_relation(p[i], p[j]))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0 && count != 0)
            {
                out[n++] = p[i];
            }
        }
        if (n == 0)
        {
            cout << "None" << endl;
            continue;
        }
        bubble_sort(out, n);
        for (int i = 0; i < n; i++)
        {
            cout << out[i];
            if (i < n - 1)
            {
                cout << " ";
            }
        }
        cout << '\n';
        delete[] p;
        delete[] out;
    }
    return 0;
}

int is_relation(int n1, int n2)
{
    int count1[10] = { 0 };
    int count2[10] = { 0 };
    while (n1 > 0)
    {
        count1[n1 % 10]++;
        n1 /= 10;
    }
    while (n2 > 0)
    {
        count2[n2 % 10]++;
        n2 /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count1[i] != count2[i]) return 0;
    }
    return 1;
}

void bubble_sort(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}