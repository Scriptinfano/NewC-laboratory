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

	cout << "������������һ�ŵ�������˾��";
	cin.getline(ppizza->company, 40);
	cout << "������������һ�ŵ�ֱ����";
	cin >> ppizza->zhijing;
	cout << "������������һ�ŵ�������";
	cin >> ppizza->zhongliang;
	cout << "������һ�ŵ���ϢΪ����" << endl;
	cout << "������˾��" << ppizza->company << endl;
	cout << "ֱ����" << ppizza->zhijing << endl;
	cout << "������" << ppizza->zhongliang << endl;
	return 0;
}