//rrrrust
//���ַ���������������ת��Ϊһ���������
#include <stdio.h>
#include <string.h>  //�������ַ�������
int str2int(char[]); //�ַ�ת���ֺ���(�ַ���)�������Ǹ�����
int main()
{
	int i, m;
	char str[20];  //�19
  for (i = 0; i < 20; i++)  //ѭ�������ַ�
	{
		scanf_s("%c",&str[i],1);
	}
  m=str2int(str);   //�Ǹ�����
  printf("%d", m);
	return 0;
}
int str2int(char str[20])
{
	int a[20], i, len, x = 0, s = 0,j,t;  //a[20]���ڽ��ַ��������ִ�Ϊ���飬sΪ�Ǹ���
	len = strlen(str);  //�ַ�������
	for (i = 0; i < len; i++)  //�����ַ�
	{
		if (48 <= str[i] && str[i] <= 57)  //��ASCII���ж�����
		{
			a[x] = str[i];  //�����־ʹ�����
			x++;  //���ָ���
		}
	}
		for (i = 0; i < x; i++)
		{
			s += a[i] * 10 * (x - 1 - i); //�����λ���ۼ�
		}
	
	return s;  //���������
}