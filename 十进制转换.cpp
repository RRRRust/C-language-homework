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
		t = a % x;
		a = a / x;
		b[c++] = t;
	} while (a != 0);
	for (int i = c - 1; i >= 0; i--)
	{
		printf("%d", b[i]);
	}
}