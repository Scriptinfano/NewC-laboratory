#include<iostream>
#include<cstring>
using namespace std;
void showmenu();
void response(char);
int main()
{
	cout << "��ѡ��һ���������г����Ĳ�Ʒ��" << endl;
	showmenu();
	cout << endl;
	cout << "����ѡ�";
	char ch;
	cin.get(ch);
	while (ch != 'A' && ch != 'B' && ch != 'C' && ch != 'D') {
		cin.get();
		cout << "����Ҫ�����룬��������" << endl;
		cin.get(ch);
	}
	switch (ch)
	{
	case 'A':response(ch);
		break;
	case 'B':response(ch);
		break;
	case 'C':response(ch);
		break; 
	case 'D':response(ch);
		break;
	}
	return 0;
}
void showmenu() {
	cout << "A)���Ŷ���\t\tB)������������\nC)�Ǵ��Ｙ\t\tD)������";
}
void response(char ch) {
	if (ch == 'A') {
		cout << "��ѡ����" << "���Ŷ���";
	}
	else if (ch == 'B') {
		cout << "��ѡ����" << "������������";
	}
	else if (ch == 'C') {
		cout << "��ѡ����" << "�Ǵ��Ｙ";
	}
	else if (ch == 'D') {
		cout << "��ѡ����" << "������";
	}
}