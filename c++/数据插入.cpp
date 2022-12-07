<<<<<<< HEAD
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int num);

int main()
{
	int num = 0;
	int n = 0;
	int count = 0;

	cin >> num;
    if(num == 0) return 0;
	int* arr = new int[num + 1];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cin >> n;
	bubble_sort(arr, num);
	if (n >= arr[0])
	{
		for (int i = num; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = n;
		cout << "1";
	}
	else if (n < arr[num - 1])
	{
		arr[num] = n;
		cout << num + 1;
	}
	else
	{
		for (int i = 0; i < num - 1; i++)
		{
			if (n < arr[i] && n >= arr[i + 1])
			{
				for (int j = num; j > i + 1; j--)
				{
					arr[j] = arr[j - 1];
				}
				arr[i + 1] = n;
				count = i + 2;
				break;
			}
		}
		cout << count;
	}
	return 0;
}

void bubble_sort(int arr[], int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
=======
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int num);

int main()
{
	int num = 0;
	int n = 0;
	int count = 0;

	cin >> num;
    if(num == 0) return 0;
	int* arr = new int[num + 1];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cin >> n;
	bubble_sort(arr, num);
	if (n >= arr[0])
	{
		for (int i = num; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = n;
		cout << "1";
	}
	else if (n < arr[num - 1])
	{
		arr[num] = n;
		cout << num + 1;
	}
	else
	{
		for (int i = 0; i < num - 1; i++)
		{
			if (n < arr[i] && n >= arr[i + 1])
			{
				for (int j = num; j > i + 1; j--)
				{
					arr[j] = arr[j - 1];
				}
				arr[i + 1] = n;
				count = i + 2;
				break;
			}
		}
		cout << count;
	}
	return 0;
}

void bubble_sort(int arr[], int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
>>>>>>> e7f2b911e9dd32e9e37d2dbf93e2de1f72b9fcc5
}