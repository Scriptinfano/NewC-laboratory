#include<iostream>
using namespace std;
const string month[12] = {"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
int sales_per_month[12];
int main()
{
	int m = 0;
	for (int i = 1; i <= 12; i++) {
		cout << "输入" << i << "月的销售量：";
		cin >> sales_per_month[m];
		m++;
	}/*用循环输入每月的销售量*/
	cout << "输入完成,十二月的销售量如下：" << endl;
	int sum = 0;
	for (int x = 0; x <= 11; x++) {
		cout << month[x] << "的销售量是" << sales_per_month[x] << "元。" << endl;
		sum += sales_per_month[x];
	}
	cout << "十二个月的销售总量为：" << sum << "元。" << endl;
	return 0;
};