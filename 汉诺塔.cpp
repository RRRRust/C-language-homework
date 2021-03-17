#include <stdio.h>
int n = 0;  //ע��λ�ã��ŵ�������ᱻ�ݹ���ö��޷�����
void hanoi(int, char, char, char);
void main()
{
	int num;
	printf("���������Ӹ�����\n");
	scanf_s("%d", &num);
	hanoi(num, 'A', 'B', 'C');
}

void hanoi(int num, char a, char b, char c)
{
	
	if (num == 1)
		printf("Step:%3d:%c-->%c\n", ++n, a, c);
	else
	{
		hanoi(num - 1, a, c, b);
		printf("Step:%3d:%c-->%c\n", ++n, a, c);
		hanoi(num - 1, b, a, c);
	}
}