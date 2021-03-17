#include <stdio.h>
int main()
{
	int x,a,b,c;
	printf("计算一元二次方程\n请输入x的值：");
	scanf_s("%d", &x);
	printf("输入二次项系数：");
	scanf_s("%d", &a);
	printf("输入一次项系数：");
	scanf_s("%d", &b);
	printf("输入常数项：");
	scanf_s("%d", &c);

	printf("y=%d",a*x*x+b*x+c );

	return 0;
}