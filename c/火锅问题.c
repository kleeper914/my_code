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
		//动态数组
		int* p = (int*)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++)
		{
			scanf("%d", p + j);
		}

		for (int j = 0; j < N; j++)
		{
			//选择从愉快值为正数开始
			if (p[j] < 0)
			{
				continue;
			}
			temp = p[j];
			//若选择过程中出现一个比result还要大的正数，则选择从该数开始
			if (temp > result[i])
			{
				result[i] = temp;
			}
			for (int k = j + 1; k < N; k++)
			{
				//将从该数开始的一组连续的数之和存储在temp中，若出现temp大于result，则将temp赋给result
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