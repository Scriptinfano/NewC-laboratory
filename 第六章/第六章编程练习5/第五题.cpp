#include<iostream>
#include<cstdlib>
#include <iomanip>/*iomanip，在C++程序里面经常见到下面的头文件#include <iomanip>，io代表输入输出，manip是
manipulator（操纵器）的缩写(在c++上只能通过输入缩写才有效）*/
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
	cout << "程序说明：该程序将计算收入的所得税\n请以整数形式输入你的收入：";
	if (onceagain2) {
		cout << "请再次输入其他人的收入：";
	}
begin:if (cin >> income) {
	
		cout << "输入类型匹配，程序将计算你的所得税\n";
		
		while (onceagain) {
			if (income >= 0 && income <= 5000) {
				cout << "你个穷逼，不用交税。";
				begin2:cout << "你还想输入其他人的收入吗？（Y/N）:";
				char ch;
				cin.ignore();
				cin.get(ch);/*有问题*/
				if (ch == 'Y') {
					cin.ignore();					
					onceagain2 = true;
					goto begin;
				}
				else if (ch == 'N') {
					exit(EXIT_FAILURE);
				}
				else {
					cout << "笨蛋，按要求输入啊喂，我再问一遍，";
					cin.ignore();
					goto begin2;
				}
			}
			else if (income > 5000 && income <= 15000) {
				cout << "有钱人，你的所得税是：";
				incometax = 5000 + (income - 5000) * taxrate;
				cout << incometax;
				goto begin2;
			}
			else if (income > 15000 && income <= 35000) {
				cout << "有钱人，你的所得税是：";
				incometax = 5000 + 10000 * taxrate + (income - 10000) * taxrate2;
				cout << incometax;
				goto begin2;
			}
			else if (income > 35000) {
				cout << "卧槽，富豪，你的所得税为：";
				incometax = 5000 + 10000 * taxrate + 20000 * taxrate2 + (income - 20000) * taxrate3;
				cout << incometax;
				goto begin2;
			}
		}
	}
	else {
		cin.clear();
		cin.ignore();
		cout << "输入类型不匹配，发生非致命错误，请重新输入：";
		goto begin;
	}
	return 0;
};