//十进制转换为其它进制
#include <stdio.h>
int main()
{
	int a, x, t, b[100], c = 0;
	printf("输入十进制数：");
	scanf_s("%d", &a);
	printf("输入需转换的进制：");
	scanf_s("%d", &x);
	printf("转换后：");
	do
	{
		t = a % x; //每位取余
		a = a / x; //下一位
		b[c++] = t; //每位放入数组做新数
	} while (a != 0);  //循环条件a不等于0
	for (int i = c - 1; i >= 0; i--)  //转换进制后要倒着输出数组才是正确的数
	{
		printf("%d", b[i]);
	}
}
