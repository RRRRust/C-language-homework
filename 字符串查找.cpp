#include <stdio.h>
#include <string.h>
int find(char*, char*);
void main()
{
	char s1[50], s2[50];
	printf("����һ���ַ���");
	scanf_s("%s", &s1,50);
	printf("��������ҵ��ַ�����");
	scanf_s("%s", &s2,50);
	int x;
	x = find(s1, s2);
	if (x == -1)
	{
		printf("s1��δ�ҵ�s2\n");
	}
	else
	{
		printf("s1�е�%d���ַ���Ϊs2\n", x);
	}
}
int find(char* s1, char* s2)
{
	int a = 0, b = 0, t = 0, l;
	l = strlen(s2);
	while (*(s1 + a) != '\0')
	{
		if (*(s1 + a) == *(s2 + b))
			b++;
		else
		{
			b = 0;
			t = 0;
		}         //û������s2���ж��ض�
		if (b == 1)
			t = a+1;  //a��0�𣬼�λ+1
		if (b == l - 1)
			break;   //s2�ѳ�����
		a++;
	}
	if (t == 0)
		return -1;
	else
		return t;
}