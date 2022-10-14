#include <iostream>
#include <ctime>
using namespace std;

#define M 5

int main()
{
	int arr1[M][M];
	int arr2[M][M];
	int arr3[M][M];
	int i, j, k;

	srand((unsigned int)time(NULL));
	cout << "¾ØÕó1Îª£º" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			arr1[i][j] = rand() % 10;
			printf("%4d", arr1[i][j]);
		}
		cout << '\n';
	}
	cout << "¾ØÕó2Îª£º" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			arr2[i][j] = rand() % 10;
			printf("%4d", arr2[i][j]);
		}
		cout << '\n';
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			arr3[i][j] = 0;
			for (k = 0; k < M; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	cout << "¾ØÕó3Îª£º\n";
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%4d", arr3[i][j]);
		}
		cout << '\n';
	}
	return 0;
}