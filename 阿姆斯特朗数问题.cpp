#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    int m = 1;
    int sum = 0;
    int flag = 0;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        m *= 10;
    }
    for (int i = m / 10; i < m; i++)
    {
        int temp = i;
        int j = 0;
        int arr[6] = { 0 };
        while (temp > 0)
        {
            arr[j] = temp % 10;
            sum += pow(arr[j], num);
            temp /= 10;
            j++;
        }
        if (sum == i)
        {
            cout << i << endl;
            flag = 1;
        }
        sum = 0;
    }
    if(flag == 0)
    {
        cout << "No output" << endl;
    }
    system("pause");
    return 0;
}