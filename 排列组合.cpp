#include <stdio.h>
void pl(int[], int, int,int);
void swap(int[], int, int);
void print(int[],int );
int main()
{
	int a[100], n, i,m;
	printf("输入元素个数：");
	scanf_s("%d", &n);
	printf("输入元素：");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("从n个元素中选m个进行排列组合，输入m的值：");
	scanf_s("%d", &m);
	
		pl(a, 0, n-1,m);
	
	return 0;
}

void pl(int b[], int m, int n,int k)
{
	int i;
	if (m == n)
	{
		print(b,k);
	}
	else
	{
		for (i = m; i <= n; i++)
		{
			swap(b, m, i);
			pl(b, m + 1, n,k);
			swap(b, m, i);
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
void print(int a[], int k)
{
	int i;
	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}