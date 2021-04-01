/*
rrrrust
在一串字符串中查找另一个字符串，如果没有则返回-1，有就返回开始位置
*/
#include <stdio.h>
#include <string.h>

int find(char*, char*);  //写一个查找的函数，返回类型为整型数字，没找到就返回-1，找到就返回从第几个开始，里面的变量是两个字符串

void main()
{
	char s1[50], s2[50];  //定义两串字符串的长度都不超过50个字符
	printf("输入一串字符：");
	scanf_s("%s", &s1,50);
	printf("输入需查找的字符串：");
	scanf_s("%s", &s2,50);
	int x; 
	x = find(s1, s2); //find函数的返回值

	if (x == -1)  //没找到
	{
		printf("s1中未找到s2\n");
	}
	else //找到了
	{
		printf("s1中第%d个字符起为s2\n", x);
	}
}
int find(char* s1, char* s2)
{
	int a = 0, b = 0, t = 0, l;
	l = strlen(s2);
	while (*(s1 + a) != '\0')  //读s1
	{
		if (*(s1 + a) == *(s2 + b)) //找到s2的开头
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
//以上为最简便解决：该函数只可找出最先出现的那次，可改进。
