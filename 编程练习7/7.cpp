#include<iostream>
using namespace std;
int main()
{
	struct pizza
	{
		char company[40];
		float zhijing;
		float zhongliang;
	};
	pizza pizza1;
	cout << "请输入披萨饼一号的生产公司：";
	cin.getline(pizza1.company, 40);
	cout << "请输入披萨饼一号的直径：";
	cin >> pizza1.zhijing;
	cout << "请输入披萨饼一号的重量：";
	cin >> pizza1.zhongliang;
	cout << "披萨饼一号的信息为如下" << endl;
	cout << "生产公司：" << pizza1.company << endl;
	cout << "直径：" << pizza1.zhijing << endl;
	cout << "重量：" << pizza1.zhongliang << endl;
	return 0;
}