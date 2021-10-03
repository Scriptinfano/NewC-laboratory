#include<iostream>
using namespace std;
int main()
{
	/*使用键盘读取键盘的文本输入时，一般选择某个特殊字符来停止读取输入，该特殊字符被称为哨兵字符，并将其作为停止标记*/
	/*下则程序在遇到#字符时停止读取输入，该程序计算读取的字符数，并在屏幕上显示读取的字符*/
	char ch;
	int count = 0;
	cout << "输入字母，并输入#来退出:" << endl;
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << "个字符被读取";
	/*提醒：cin在读取char值时，将忽略空格与换行符*/
	return 0;
};