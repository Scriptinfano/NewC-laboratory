#include<iostream>
using namespace std;
const string month[12] = {"һ��","����","����","����","����","����","����","����","����","ʮ��","ʮһ��","ʮ����"};
int sales_per_month[12];
int main()
{
	int m = 0;
	for (int i = 1; i <= 12; i++) {
		cout << "����" << i << "�µ���������";
		cin >> sales_per_month[m];
		m++;
	}/*��ѭ������ÿ�µ�������*/
	cout << "�������,ʮ���µ����������£�" << endl;
	int sum = 0;
	for (int x = 0; x <= 11; x++) {
		cout << month[x] << "����������" << sales_per_month[x] << "Ԫ��" << endl;
		sum += sales_per_month[x];
	}
	cout << "ʮ�����µ���������Ϊ��" << sum << "Ԫ��" << endl;
	return 0;
};