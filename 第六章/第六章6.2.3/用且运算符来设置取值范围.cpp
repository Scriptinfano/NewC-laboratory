#include<iostream>
using namespace std;
const char* qualify[3] = {
	"ʮ�ߵ���ʮ����",
	"��ʮ�嵽��ʮ����",
	"��ʮ��������"
};/*��charָ�������е�ÿ��Ԫ����Ϊ��������ʾÿ��Ԫ�ز����޸�*/
int main()
{
	int age;
	cout << "�����������";
	cin >> age;
	int index;

	if (age > 17 && age < 35) {
		index = 0;
	}
	else if (age>=35&&age<65) {
		index = 1;
	}
	else {
		index = 2;
	}
	cout<<endl;
	cout << qualify[index];

	return 0;
}