//rrrrust
//用数字1、2、3、4组成无重复的三位数有几个，并打印出来
#include <stdio.h>
void main()
{
	int a, b, c, n = 0;
	for (a = 1; a <= 4; a++)  //百位
	{
		for (b = 1; b <= 4; b++) //十位
		{
			for (c = 1; c <= 4; c++)  //个位
			{
				if (a != b && b != c && c != a) //都不相等的条件下
				{
					printf("%d%d%d\t", a, b, c); //挨在一起打印成三位数
					n++; //记录个数
				}

			}
		}
		printf("\n");
	}
	printf("共有%d个", n);
}
