#include <iostream>;
using namespace std;
int main()
{
	char firstname[20], lastname[20];
	char grade;
	int age;

	cout << "���������ʲô��";
	cin.getline(firstname, 20);
	cout << "�������ʲô��";
	cin.getline(lastname, 20);
	cout << "������һ������ˣ�";
	cin >> grade;
	cout << "��������ˣ�";
	cin >> age;
	cout << "�����Ϣ����" << endl;
	cout << "������" << firstname << "." << lastname << endl;
	cout << "�꼶��" << char(grade + 1) << endl;/*�����grade�д����������B����ô+1��ζ�������һ����ĸC*/
	cout << "���䣺" << age;
	return 0;
}