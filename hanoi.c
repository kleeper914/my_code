#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void move(char a, int n, char b);
void hanoi(char A, char B, char C, int n);

int count = 0;

int main(void)
{
	int n = 0;

	scanf("%d", &n);
	hanoi('A', 'B', 'C', n);
	return 0;
}

void move(char a, int n, char b)
{
	printf("%d: %c --> %c\n", ++count, a, b);
}

void hanoi(char A, char B, char C, int n)
{
	if (n == 1)
	{
		move(A, 1, C);
	}
	else
	{
		hanoi(A, C, B, n - 1);
		move(A, n, C);
		hanoi(B, A, C, n - 1);
	}
}