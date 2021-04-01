//rrrrust
//递归打印出C m n所有组合
//整体是全排列，但打印时不同
#include <stdio.h>
void pl(int[], int, int,int);  //用来排列的函数的原型 (要排列的数组成的数组，起始下标，结束下标，要排列组合数字个数（以便调用打印函数）)
void swap(int[], int, int);
void print(int[],int );  //打印函数(已排列的数组，要打印出的个数)
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
		print(b,k);  //其实数组里已经全排列，再调用打印函数
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
	for (i = 0; i < k; i++)  //只打出全排列的某些
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//造成问题。如4选2排列组合，会出现 1234、1243，会打印出 12、12重复，待解决
