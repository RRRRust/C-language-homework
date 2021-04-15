//rrrrust
//将字符串内连续的数字转换为一个数字输出
#include <stdio.h>
#include <string.h>  //需运用字符串函数
int str2int(char[]); //字符转数字函数(字符串)，返回那个数字
int main()
{
	int i, m;
	char str[20];  //最长19
  for (i = 0; i < 20; i++)  //循环输入字符
	{
		scanf_s("%c",&str[i],1);
	}
  m=str2int(str);   //那个数字
  printf("%d", m);
	return 0;
}
int str2int(char str[20])
{
	int a[20], i, len, x = 0, s = 0,j,t;  //a[20]用于将字符串中数字存为数组，s为那个数
	len = strlen(str);  //字符串长度
	for (i = 0; i < len; i++)  //遍历字符
	{
		if (48 <= str[i] && str[i] <= 57)  //用ASCII码判断数字
		{
			a[x] = str[i];  //是数字就存起来
			x++;  //数字个数
		}
	}
		for (i = 0; i < x; i++)
		{
			s += a[i] * 10 * (x - 1 - i); //从最高位起累加
		}
	
	return s;  //返回这个数
}