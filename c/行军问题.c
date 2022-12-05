#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* s_gets(char* arr, int len);

int main(void)
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	int num = 0;
	char arr3[20] = { 0 };
	char result[20] = { 0 };
	int n = 0;
	int flag = 0;

	s_gets(arr1, 20);
	s_gets(arr2, 20);
	scanf("%d", &num); getchar();
	s_gets(arr3, 20);
	int len = strlen(arr2);
	for (int i = 0; arr3[i] != '\0'; i++)
	{
		flag = 0;
		for (int j = 0; arr1[j] != '\0'; j++)
		{
			if (arr1[j] == arr3[i])
			{
				flag = 1;
				int count = num + j + 1;
				if (count <= len)
				{
					result[n++] = arr2[count - 1];
				}
				else
				{
					count %= len;
					if (count == 0)
					{
						result[n++] = arr2[len - 1];
					}
					else
					{
						result[n++] = arr2[count - 1];
					}
				}
			}
		}
		if (flag == 0)
		{
			result[n++] = arr3[i];
		}
	}
	puts(result);
	return 0;
}

char* s_gets(char* arr, int len)
{
	char* re_val = NULL;
	char* seek = NULL;

	re_val = fgets(arr, len, stdin);
	if (re_val)
	{
		seek = strchr(arr, '\n');
		if (seek)
		{
			*seek = '\0';
		}
	}
	return arr;
}