#include <stdio.h>

int main(void)
{
	int num = 0, tem = 1, count = 0, num1, result;
	int sum = 0;

	scanf("%d", &num);
	num1 = num;
	while (num1 > 0)
	{
		num1 /= 10;
		count++;
	}
	num1 = num;
	for (int i = 1; i <= count; i++)
	{
		for (int j = i; j < count; j++)
		{
			tem *= 10;
		}
		result = (num1 / tem) % 10;
		sum += result * i;
		tem = 1;
	}
	printf("%d", sum % 97);
	return 0;
}