#include <stdio.h>
int GB(int a, int b);
#include<stdio.h>
int main()
{
	int m, n, t, r, num;//t为临时变量，r为余数，num为m和n的乘积
	printf("请输入两个正整数,两数之间用空格隔开：");
	scanf_s("%d %d", &m, &n);
	num = m * n;
	if (m < n)//使最大值为m
	{
		t = n;
		n = m;
		m = t;
	}
	do             //用do...whlie语句是为了声明初始化变量r
	{
		r = m % n;//用除数代替被除数，余数代替除数
		m = n;
		n = r;
	} while (r == 0);//直到让r=0，输出除数n就是最大公约数
	printf("最大公约数是%d\n", n);
	printf("最大公倍数是%d\n", num / n);//最小公倍数=两个数的乘积/最大公约数
	return 0;
}
