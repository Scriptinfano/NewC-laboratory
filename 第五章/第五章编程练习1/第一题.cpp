/*程序说明：用户输入两个整数，该程序将计算并输出这两个整数之间所有整数的和。假设先输入较小的整数。例如：用户输入2和9，程序计算2~9之间所有整数的和*/
/* #include<iostream>
using namespace std;
int sum(int jiashu, int beijiashu);
int main()
{
	int begin, end,temp;
	cout << "输入两个数（输入要求：第一个数要小于第二个数，两个数之间用空格隔开或者输入一个数按一下回车）：";
	begin:cin >> begin >> end;
	if (begin >= end) {
		cout << "不按要求输入，请重新输入。";
		goto begin;
	}
	else {
		
		for (int i = 1; i <= (end - begin); i++) {
			temp = sum(begin, begin + 1);
			begin = begin + 1;
		}
		cout << "结果为：" << temp;
	}
	
	return 0;
};
int sum(int x, int y) {
	x = x + y;
	return x;
} */

/*以下是答案：*/
#include <iostream>
using namespace std;
int main()
{
	int min, max;
	int sum = 0;
	cout << "输入两个数（输入要求：第一个数要小于第二个数，两个数之间用空格隔开或者输入一个数按一下回车）：";
begin:cin >> min >> max;
	if (min >= max) {
		cout << "不按要求输入，请重新输入。";
		goto begin;
	}
	else {
		for (int i = min; i <= max; i++)/*在for循环中，初始值和测试条件最好另设变量*/
			sum += i;/*将sum+i的值赋给sum*/
	}
	cout << "范围之内所有整数的和为：" << sum;
	return 0;
}