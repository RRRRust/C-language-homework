#include <stdio.h>
int main()
{
	int a, x, t, b[100], c = 0;
	printf("����ʮ��������");
	scanf_s("%d", &a);
	printf("������ת���Ľ��ƣ�");
	scanf_s("%d", &x);
	printf("ת����");
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