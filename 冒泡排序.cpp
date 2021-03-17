#include <stdio.h>
int main()
{
	int i, j, n, x, a[100];
	printf("输入一个数n：");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("输入一个数：");
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
			if (a[j] > a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}