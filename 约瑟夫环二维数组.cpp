#include <stdio.h>
#include <string.h>
#include <conio.h>
#define N 5
#define LEN 10
void JP(char[][LEN], int);
int main()
{
	char name[N][LEN];
	int i, k;
	printf("����������%d��������ÿ������������10�ַ�����\n", N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", name[i],10);
	}
	printf("\n�����������ڼ������˳���");
	scanf_s("%d", &k);
	JP(name, k);
	puts("Press any key to exit...");
	getch();
	return 0;
}

void JP(char ary[][LEN], int K)
{
	int out = 0, counter = 0, idx = -1;
	while (out < N)
	{
		idx++;
		if (idx == N)
			idx = 0;
		if (strcmp(ary[idx], "\0") == 0)
			continue;
		else
		{
			counter++;
		
		 if (counter == K)
		 {
			out++;
			printf("��%2d���˳��ߣ�%s\n", out, ary[idx]);
			strcpy_s(ary[idx], "\0");
			counter = 0;
         }
		}
	}
}