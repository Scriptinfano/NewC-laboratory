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
	cout << "������������һ�ŵ�������˾��";
	cin.getline(pizza1.company, 40);
	cout << "������������һ�ŵ�ֱ����";
	cin >> pizza1.zhijing;
	cout << "������������һ�ŵ�������";
	cin >> pizza1.zhongliang;
	cout << "������һ�ŵ���ϢΪ����" << endl;
	cout << "������˾��" << pizza1.company << endl;
	cout << "ֱ����" << pizza1.zhijing << endl;
	cout << "������" << pizza1.zhongliang << endl;
	return 0;
}