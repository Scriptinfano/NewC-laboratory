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
	pizza* ppizza = new pizza;

	cout << "请输入披萨饼一号的生产公司：";
	cin.getline(ppizza->company, 40);
	cout << "请输入披萨饼一号的直径：";
	cin >> ppizza->zhijing;
	cout << "请输入披萨饼一号的重量：";
	cin >> ppizza->zhongliang;
	cout << "披萨饼一号的信息为如下" << endl;
	cout << "生产公司：" << ppizza->company << endl;
	cout << "直径：" << ppizza->zhijing << endl;
	cout << "重量：" << ppizza->zhongliang << endl;
	return 0;
}