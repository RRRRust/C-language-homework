//���һ���������ظ����ֵ�����
#include <stdio.h>
void find(int[], int,int);  //����һ�������ֲ���ӡ����λ�õĺ���
int main()
{
	int a[100], x, i,n;
	printf("�������ָ�����");
	scanf_s("%d", &n);
	printf("�������ִ���");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("����Ҫ���ҵ�����");
	scanf_s("%d", &x);
	find(a,n, x);
	
}
void find(int a[],int n, int x)
{
	int i,b[100],j=0;
  for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			b[j] = i;    //��¼����λ��
			j++;         //�м���
		}
	}
  if (j == 0)
  {
	  printf("���ִ�����Ҫ���ҵ�����\n");
  }
  else
	  printf("���ִ��й�%d��%d��������λ�ã�", j, x);
	  for (i = 0; i < j; i++)
	  {
		  printf("%d ", b[i] + 1);
	  }
	  printf("\n");
}