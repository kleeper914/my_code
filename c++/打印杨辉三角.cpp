#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int i, j;
	int arr[11][11] = { 0 };

	cin >> n;
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		if (i == 0)
		{
			cout << "1";
		}
		else
		{
			for (j = 0; j < (i + 1); j++)
			{
				arr[i + 1][j] = arr[i][j] + arr[i][j - 1];
				cout << arr[i + 1][j] << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}