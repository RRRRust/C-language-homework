#include <stdio.h>
int main()
{
	int x,a,b,c;
	printf("����һԪ���η���\n������x��ֵ��");
	scanf_s("%d", &x);
	printf("���������ϵ����");
	scanf_s("%d", &a);
	printf("����һ����ϵ����");
	scanf_s("%d", &b);
	printf("���볣���");
	scanf_s("%d", &c);

	printf("y=%d",a*x*x+b*x+c );

	return 0;
}