#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 20

char* s_gets(char* arr, int len);
void exchange(char* p1, char* p2);
void bubble_sort(char arr[], int len);

int main(void)
{
	char arr[LEN] = { 0 };
	char arr_up[LEN] = { 0 };
	char arr_low[LEN] = { 0 };
	int n = 0, m = 0;

	while (s_gets(arr, LEN) != NULL)
	{
		for (int i = 0; i < LEN; i++)
		{
			if (isupper(arr[i]))
			{
				arr_up[n++] = arr[i];
			}
			else if (islower(arr[i]))
			{
				arr_low[m++] = arr[i];
			}
		}
		bubble_sort(arr_up, strlen(arr_up));
		bubble_sort(arr_low, strlen(arr_low));
		m = 0; n = 0;

		if (strlen(arr_up) == 0)
		{
			puts(arr_low);
		}
		else if (strlen(arr_low) == 0)
		{
			puts(arr_up);
		}
		else
		{
			while (isalpha(arr_low[m]) && isalpha(arr_up[n]))
			{
				if (arr_up[n] - 'A' <= arr_low[m] - 'a')
				{
					printf("%c", arr_up[n++]);
				}
				else if (arr_up[n] - 'A' > arr_low[m] - 'a')
				{
					printf("%c", arr_low[m++]);
				}
			}
			while (arr_low[m] != '\0')
			{
				printf("%c", arr_low[m++]);
			}
			while (arr_up[n] != '\0')
			{
				printf("%c", arr_up[n++]);
			}
		}
		for (int i = 0; i < LEN; i++)
		{
			arr_low[i] = '\0';
			arr_up[i] = '\0';
		}
		m = 0; n = 0;
		printf("\n");
	}
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

void exchange(char* p1, char* p2)
{
	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubble_sort(char arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}