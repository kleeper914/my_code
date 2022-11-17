#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[100] = { 0 };
	char reserve[100][100] = { 0 };
	int m = 0, n = 0;
	int i = 0;

	fgets(arr, 100, stdin);
	while (arr[i] != '\n')
	{
		while (arr[i] != ' ' && arr[i] != '\n')
		{
			reserve[m][n] = arr[i];
			i++; n++;
		}
		if (m != 0)
		{
			reserve[m][n] = ' '; reserve[m][++n] = '\0';
		}
		if (arr[i] == '\n') break;
		m++; i++;
		n = 0;
	}
	for (int i = m; i >= 0; i--)
	{
		printf("%s", reserve[i]);
	}
	return 0;
}