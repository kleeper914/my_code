//�� n ��������ʹ��ǰ�����˳������� m ��λ�ã���� m ���������ǰ��� m ������
#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;

	cin >> n;
	int* p = (int*)malloc(n * sizeof(n));//��̬����

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}

	cin >> m;
	int* p1 = (int*)malloc(m * sizeof(m));//��������Ϊm�Ķ�̬���飬����ƶ�������ײ���m������
	for (int j = 0; j < m; j++)
	{
		int* temp = p1 + j;
		temp = p + (n - m + j);
		cout << *temp << " ";
	}

	int* p2 = (int*)malloc((n - m) * sizeof(int));//��������Ϊ(n - m)�����飬����ƶ������p1�����������(n - m)������
	for (int i = 0; i < n - m; i++)
	{
		int* temp = p2 + i;
		temp = p + i;
		cout << *temp << " ";
	}
	free(p);
	free(p1);
	free(p2);
	return 0;
}
