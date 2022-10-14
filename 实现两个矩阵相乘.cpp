#include <iostream>
#include <ctime>
using namespace std;

#define M 5
#define Q 8
#define S 3

int main()
{
	int arr1[Q][M];
	int arr2[M][S];
	int arr3[Q][S];
	int i, j, k;

	srand((unsigned int)time(NULL));
	cout << "¾ØÕó1Îª£º" << endl;
	for (i = 0; i < Q; i++)
	{
		for (j = 0; j < M; j++)
		{
			arr1[i][j] = rand() % 10;
			printf("%5d", arr1[i][j]);
		}
		cout << '\n';
	}
	cout << "¾ØÕó2Îª£º" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < S; j++)
		{
			arr2[i][j] = rand() % 10;
			printf("%5d", arr2[i][j]);
		}
		cout << '\n';
	}

	for (i = 0; i < Q; i++)
	{
		for (j = 0; j < S; j++)
		{
			arr3[i][j] = 0;
			for (k = 0; k < M; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	cout << "¾ØÕó3Îª£º\n";
	for (i = 0; i < Q; i++)
	{
		for (j = 0; j < S; j++)
		{
			printf("%5d", arr3[i][j]);
		}
		cout << '\n';
	}
	return 0;
}