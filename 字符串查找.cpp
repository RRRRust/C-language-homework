#include <stdio.h>
#include <string.h>
int find(char*, char*);
void main()
{
	char s1[50], s2[50];
	printf("输入一串字符：");
	scanf_s("%s", &s1,50);
	printf("输入需查找的字符串：");
	scanf_s("%s", &s2,50);
	int x;
	x = find(s1, s2);
	if (x == -1)
	{
		printf("s1中未找到s2\n");
	}
	else
	{
		printf("s1中第%d个字符起为s2\n", x);
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
		}         //没有完整s2则中断重读
		if (b == 1)
			t = a+1;  //a从0起，计位+1
		if (b == l - 1)
			break;   //s2已出现完
		a++;
	}
	if (t == 0)
		return -1;
	else
		return t;
}