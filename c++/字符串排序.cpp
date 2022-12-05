#include <iostream>
#include <cstring>
using namespace std;

void sort(char* arr[]);

int main()
{
	char* arr[5] = { NULL };
	char arr1[5][20] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
		arr[i] = arr1[i];
	}
	sort(arr);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}

void sort(char* arr[])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				char temp[20] = { 0 };
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], temp);
			}
		}
	}
}