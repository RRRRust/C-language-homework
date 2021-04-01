//检查一串数字中重复出现的数字
#include <stdio.h>
void find(int[], int,int);  //创建一个找数字并打印出其位置的函数(数组，数字个数，要找的数字)
int main()
{
	int a[100], x, i,n;
	printf("输入数字个数：");
	scanf_s("%d", &n);
	printf("输入数字串：");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("输入要查找的数：");
	scanf_s("%d", &x);
	find(a,n, x);
	
}
void find(int a[],int n, int x)
{
	int i,b[100],j=0;
  for (i = 0; i < n; i++) //遍历数组
	{
		if (a[i] == x)   //如果找到
		{
			b[j] = i;    //记录所在位置
			j++;         //有几个
		}
	}
  if (j == 0)
  {
	  printf("数字串里无要查找的数。\n");
  }
  else
	  printf("数字串中共%d个%d，在以下位置：", j, x);
	  for (i = 0; i < j; i++)
	  {
		  printf("%d ", b[i] + 1);  //位置是下标+1
	  }
	  printf("\n");
}
