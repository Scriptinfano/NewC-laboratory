#include<iostream>
#include<cstring>/*���ַ���������ز����ĺ�����ͷ�ļ�*/
#include<string>/*������string��ģ�������*/
using namespace std;
struct car_info {
	string manufacturer;
	int date;
};/*�����ṹ��car_info*/

int main()
{
	char words[20];
	cout << "��һ�����룺";
	cin >> words;
	cin.get();
	cout << words;
	cout << "�ڶ������룺";
	cin >> words;
	cout << words;

	return 0;
}
