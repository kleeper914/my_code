//有 n 个整数，使其前面各数顺序向后移 m 个位置，最后 m 个数变成最前面的 m 个数。
#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;

	cin >> n;
	int* p = (int*)malloc(n * sizeof(n));//动态数组

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}

	cin >> m;
	int* p1 = (int*)malloc(m * sizeof(m));//创建长度为m的动态数组，存放移动后放在首部的m个数字
	for (int j = 0; j < m; j++)
	{
		int* temp = p1 + j;
		temp = p + (n - m + j);
		cout << *temp << " ";
	}

	int* p2 = (int*)malloc((n - m) * sizeof(int));//创建长度为(n - m)的数组，存放移动后放在p1代表的数组后的(n - m)个数字
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
