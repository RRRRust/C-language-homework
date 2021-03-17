#include <stdio.h>
void pl(int[], int, int);
void swap(int[], int, int);
void main()
{
	int a[100], n, i;
	printf("输入元素个数：");
	scanf_s("%d", &n);
	printf("输入元素：");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	pl(a, 0, n - 1);
}

void pl(int a[], int m, int n)
{
	int i;
	if (m == n)
	{
		for (i = 0; i < n+1; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	else
	{
		for (i = m; i <= n; i++)
		{
			swap(a, m, i);
			pl(a, m + 1, n);
			swap(a, m, i);
		}
	}
}
void swap(int a[], int i, int j)
{
	int t;
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}