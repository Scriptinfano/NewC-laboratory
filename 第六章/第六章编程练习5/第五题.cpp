#include<iostream>
#include<cstdlib>
#include <iomanip>/*iomanip����C++�������澭�����������ͷ�ļ�#include <iomanip>��io�������������manip��
manipulator��������������д(��c++��ֻ��ͨ��������д����Ч��*/
using namespace std;
const double taxrate = 0.1;
const double taxrate2 = 0.15;
const double taxrate3 = 0.2;
int main()
{
	double income;
	bool onceagain = 1;
	double incometax;
	bool onceagain2=false;
	cout << fixed << setprecision(4);
	cout << "����˵�����ó��򽫼������������˰\n����������ʽ����������룺";
	if (onceagain2) {
		cout << "���ٴ����������˵����룺";
	}
begin:if (cin >> income) {
	
		cout << "��������ƥ�䣬���򽫼����������˰\n";
		
		while (onceagain) {
			if (income >= 0 && income <= 5000) {
				cout << "�����ƣ����ý�˰��";
				begin2:cout << "�㻹�����������˵������𣿣�Y/N��:";
				char ch;
				cin.ignore();
				cin.get(ch);/*������*/
				if (ch == 'Y') {
					cin.ignore();					
					onceagain2 = true;
					goto begin;
				}
				else if (ch == 'N') {
					exit(EXIT_FAILURE);
				}
				else {
					cout << "��������Ҫ�����밡ι��������һ�飬";
					cin.ignore();
					goto begin2;
				}
			}
			else if (income > 5000 && income <= 15000) {
				cout << "��Ǯ�ˣ��������˰�ǣ�";
				incometax = 5000 + (income - 5000) * taxrate;
				cout << incometax;
				goto begin2;
			}
			else if (income > 15000 && income <= 35000) {
				cout << "��Ǯ�ˣ��������˰�ǣ�";
				incometax = 5000 + 10000 * taxrate + (income - 10000) * taxrate2;
				cout << incometax;
				goto begin2;
			}
			else if (income > 35000) {
				cout << "�Բۣ��������������˰Ϊ��";
				incometax = 5000 + 10000 * taxrate + 20000 * taxrate2 + (income - 20000) * taxrate3;
				cout << incometax;
				goto begin2;
			}
		}
	}
	else {
		cin.clear();
		cin.ignore();
		cout << "�������Ͳ�ƥ�䣬�����������������������룺";
		goto begin;
	}
	return 0;
};