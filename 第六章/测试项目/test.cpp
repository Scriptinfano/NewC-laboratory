#include <stdio.h>
int GB(int a, int b);
#include<stdio.h>
int main()
{
	int m, n, t, r, num;//tΪ��ʱ������rΪ������numΪm��n�ĳ˻�
	printf("����������������,����֮���ÿո������");
	scanf_s("%d %d", &m, &n);
	num = m * n;
	if (m < n)//ʹ���ֵΪm
	{
		t = n;
		n = m;
		m = t;
	}
	do             //��do...whlie�����Ϊ��������ʼ������r
	{
		r = m % n;//�ó������汻�����������������
		m = n;
		n = r;
	} while (r == 0);//ֱ����r=0���������n�������Լ��
	printf("���Լ����%d\n", n);
	printf("��󹫱�����%d\n", num / n);//��С������=�������ĳ˻�/���Լ��
	return 0;
}
