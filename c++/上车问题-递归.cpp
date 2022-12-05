#include <iostream>
using namespace std;

int f(int j, int i, int a);

int main()
{
	int a, n, m, x;
	int sum = 0;
	int result = 0;
	int count = 0;

	cin >> a >> n >> m >> x;
	for (int i = 1; ; i++)
	{
		for (int j = 1; j < n; j++)
		{
			sum += f(j, i, a);
		}
		if (sum == m)
		{
			count = i;
			break;
		}
		sum = 0;
	}
	for (int i = 1; i <= x; i++)
	{
		result += f(i, count, a);
	}
	cout << result;
	return 0;
}

int f(int j, int i, int a)
{
	switch (j)
	{
	case(1):
		return a;
	case(2):
		return 0;
	case(3):
		return a;
	case(4):
		return i;
	default:
		return (f(j - 1, i, a) + f(j - 2, i, a));
	}
}