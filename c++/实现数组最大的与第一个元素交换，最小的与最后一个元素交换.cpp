#include <iostream>
#include <stdbool.h>
using namespace std;

int main()
{
	int arr[20] = { 0 };
	int length = 0;
	bool flag1 = true;//�ж����ֵ
	bool flag2 = true;//�ж���Сֵ
	int max = 0;
	int min = 0;

	cout << "�������鳤��:(<=20)\n";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < length; i++)
	{
		if (arr[i] >= arr[i + 1])
		{
			//������������ĳ��Ԫ�ش��ں�һ��Ԫ�����ø�Ԫ�����������Ԫ�رȽ�
			for (int j = i + 1; j < length; j++)
			{
				if (arr[i] < arr[j])
				{
					//�����ָ�Ԫ��С�ں���ĳһ��Ԫ�أ����жϷ����ֵ
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
			//������������ĳ��Ԫ��С�ں�һ��Ԫ�����ø�Ԫ�����������Ԫ�رȽ�
			for (int j = i + 1; j < length; j++)
			{
				if (arr[i] > arr[j])
				{
					//�����ָ�Ԫ�ش��ں���ĳһ��Ԫ�أ����жϷ���Сֵ
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