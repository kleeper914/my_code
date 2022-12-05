#include <stdio.h>

int main(void)
{
	int n1, n2;

	scanf_s("%d %d", &n1, &n2);
	int n = n1;
	int m = n2;
	if (n1 < n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	//求最大公因数，辗转相除法
	while (n2 > 0)
	{
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	printf("%d ", n1);
	//求最小公倍数
	printf("%d", (n / n1) * m);
	return 0;
}