#include <iostream>
#include <stdbool.h>
using namespace std;

int main()
{
	int arr[20] = { 0 };
	int length = 0;
	bool flag1 = true;//判断最大值
	bool flag2 = true;//判断最小值
	int max = 0;
	int min = 0;

	cout << "设置数组长度:(<=20)\n";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < length; i++)
	{
		if (arr[i] >= arr[i + 1])
		{
			//如果出现数组的某个元素大于后一个元素则让该元素与后面所有元素比较
			for (int j = i + 1; j < length; j++)
			{
				if (arr[i] < arr[j])
				{
					//若出现该元素小于后面某一个元素，则判断非最大值
					flag1 = false;
				}
			}
			if (flag1 == true)
			{
				max = arr[i];
				arr[i] = arr[0];
				arr[0] = max;
				break;
			}
			flag1 = true;
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			//如果出现数组的某个元素小于后一个元素则让该元素与后面所有元素比较
			for (int j = i + 1; j < length; j++)
			{
				if (arr[i] > arr[j])
				{
					//若出现该元素大于后面某一个元素，则判断非最小值
					flag2 = false;
				}
			}
			if (flag2 == true)
			{
				min = arr[i];
				arr[i] = arr[length - 1];
				arr[length - 1] = min;
				break;
			}
			flag2 = true;
		}
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}