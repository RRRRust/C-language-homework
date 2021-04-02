//rrrrust
//37人围成一圈，编上编号（1~37),第一个人从1数起，数到5的那个人被淘汰出局，接下来的那个人又开始从1数起，数到5的那个人也被淘汰……最后剩下的那个人为赢家，问第几个人是赢家？
#include <stdio.h>

#define nmax 50  //最多50人玩

int main()
{
	int i, k, m, n, num[nmax], * p;
	printf("please input the total of numbers:");
	scanf_s("%d", &n);  //人数
	p = num;  //设置指针
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;  //循环编号
	i = 0;
	k = 0;  //读数器
	m = 0;  //淘汰计数
	while (m < n - 1)  //没有淘汰到最后一人就继续
	{
		if (*(p + i) != 0)
			++k;
		if (k == 5)
		{
			*(p + i) = 0;  //被淘汰的人编号改为0
			k = 0;   //重新开始的第一人就报1
			++m;
		}
		++i;
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		++p;
	printf("%d is left\n", *p);
	return 0;
}
