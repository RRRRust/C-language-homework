//rrrrust
//全排列问题：从n个不同元素中取出m个元素的一个排列。当m=n时所有的排列情况叫全排列。n和m任意输入，打印出所有的全排列元素。
#include <stdio.h>
void pl(int[], int, int);    //用来排列的函数的原型 (要排列的数组成的数组，起始下标，结束下标)
void swap(int[], int, int);  //用来交换的函数的原型 (要交换的数组成的数组，交换数下标，交换数下标)
void main()
{
	int a[100], n, i;
	printf("输入元素个数：");
	scanf_s("%d", &n);
	printf("输入元素：");
	for (i = 0; i < n; i++)  //循环输入要排列的数作数组的元素
	{
		scanf_s("%d", &a[i]);
	}
	pl(a, 0, n - 1);   //调用全排列函数，注意是下标
}

void pl(int a[], int m, int n)
{
	int i;
	if (m == n)  //跳出条件：当起始等于结束时
	{
		for (i = 0; i < n+1; i++)   //打印出现在数组中的数字排列
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	else  //如果不是
	{
		for (i = m; i <= n; i++)   
		{
			swap(a, m, i);   //从起始位分别和后面的每位数字交换
			pl(a, m + 1, n); //后面的排列，起始位不断向后
			swap(a, m, i);   //一次换起始位后要换回来，保证每位都和起始换
		}
	}
}

void swap(int a[], int i, int j) //交换
{
	int t; 
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}
