#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int T, N, temp;
	int result[10] = { 0 };

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);
		//��̬����
		int* p = (int*)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++)
		{
			scanf("%d", p + j);
		}

		for (int j = 0; j < N; j++)
		{
			//ѡ������ֵΪ������ʼ
			if (p[j] < 0)
			{
				continue;
			}
			temp = p[j];
			//��ѡ������г���һ����result��Ҫ�����������ѡ��Ӹ�����ʼ
			if (temp > result[i])
			{
				result[i] = temp;
			}
			for (int k = j + 1; k < N; k++)
			{
				//���Ӹ�����ʼ��һ����������֮�ʹ洢��temp�У�������temp����result����temp����result
				temp += p[k];
				if (temp > result[i])
				{
					result[i] = temp;
				}
			}
		}
		free(p);
	}

	for (int i = 0; i < T - 1; i++)
	{
		printf("%d\n", result[i]);
	}
	printf("%d", result[T - 1]);
	return 0;
}