#include<iostream>
using namespace std;
int main()
{
	double temp, sum = 0;
	bool once = true;
	bool twice = false;
	do {
		if (once) {
			for (int i=0;i<1;i++) {
				cout << "����һ�������ӵ����֣�";
			}
			once = false;
		}
		if (twice) {
			for (int x = 0; x < 1; x++) {
				cout << "�ٴ����������ӵ����֣�" << endl;
			}

		}
		
		cin >> temp;
		sum += temp;
		
		twice = true;
	} while (temp != 0);
	cout << "��⵽0�����룬�˳�ѭ��";
	cout << "������������ֵĺ�Ϊ=" << sum;
	return 0;
}