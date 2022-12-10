#include<stdio.h>

#define MAXN 2000

int RecurBinarySearch(int a[], int key, int left, int right);

int main()
{
    int        a[MAXN];//这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
    int        n, m, i, key;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", RecurBinarySearch(a, key, 0, n - 1));
        if (i != m - 1) printf(" ");
        else printf("\n");
    }

    return 0;
}

int RecurBinarySearch(int a[], int key, int left, int right)
{
    int middle = (left + right) / 2;
    //注意判断的顺序，因为传来的right参数是数组最后的元素的下标，
    //所以要先判断left>right，不能大于等于，若大于等于，则无法查找最后一个元素
    if (left > right) return -1;
    //注意要是meddle-1，因为若是middle，则出现left=right时，而若查找的数小于第一个元素
    //则无法结束递归
    if (a[middle] > key) return RecurBinarySearch(a, key, left, middle - 1);
    //这里同理，一定要避免left=right的情况
    if (a[middle] < key) return RecurBinarySearch(a, key, middle + 1, right);
    if (a[middle] == key) return middle;
}