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
	//�����������շת�����
	while (n2 > 0)
	{
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	printf("%d ", n1);
	//����С������
	printf("%d", (n / n1) * m);
	return 0;
}