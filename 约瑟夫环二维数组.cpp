//rrrrust
//N个人围成一圈，从第一个人开始报数，数到第k时那人出队；下一个人再从1开始报数，依次循环，直到最后一个人
//要求：①用数组存放N个人（可设定为确定值）；②用户分别依次输入N个人名；③k由用户输入；④依次输出退出人的顺序；⑤将数组以参数形式传递给单独的函数进行处理。
#include <stdio.h>
#include <string.h>  //用到strcmp()
#include <conio.h>  //用到getch()
#define N 5  //5个人玩
#define LEN 10 //人名不超过10个字
void JP(char[][LEN], int); //JosephProblem（人名数组，第几个淘汰）
int main()
{
	char name[N][LEN];
	int i, k;
	printf("请依次输入%d个人名（每个人名不超出10字符）：\n", N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", name[i],10);
	}
	printf("\n请输入数到第几个人退出：");
	scanf_s("%d", &k);
	JP(name, k);  //调用函数
	puts("Press any key to exit...");
	getch();
	return 0;
}

void JP(char ary[][LEN], int K)
{
	int out = 0, counter = 0, idx = -1;  //out为出列人数计数，counter数数计数器，idx为数组索引指针
	while (out < N)   //out=N时循环结束，出列人数<总人数，继续循环
	{
		idx++;  //数人
		if (idx == N) //把数组索引指针看成循环指针对待
			idx = 0;
		if (strcmp(ary[idx], "\0") == 0)    //见45行
			continue;                   //表示该人已出队，直接下一轮
		else
		{
			counter++;
		
		 if (counter == K) //出队
		 {
			out++;
			printf("第%2d个退出者：%s\n", out, ary[idx]);
			strcpy_s(ary[idx], "\0");  //名字清空
			counter = 0;  //计数清零，准备下一轮
         }
		}
	}
}
