/*��If�����жϾ���������еĿո������ַ�����*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);/*cin.get()���ר����������char�ͱ�����ÿ��ֻ��ȡһ���ַ�,�����ַ���'.'ʱ�˳�ѭ��*/
	while (ch != '.'){
		if (ch == ' ') {
			++spaces;
			
	}
		++total;
		cin.get(ch);
	}
	cout << endl;
	cout << "�ܹ�������" << spaces << "�οո�" << endl;
	cout << "�ܹ���ȡ��" << total << "���ַ���";

		return 0;
}