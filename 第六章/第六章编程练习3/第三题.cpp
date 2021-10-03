#include<iostream>
#include<cstring>
using namespace std;
void showmenu();
void response(char);
int main()
{
	cout << "请选择一个下面罗列出来的菜品：" << endl;
	showmenu();
	cout << endl;
	cout << "输入选项：";
	char ch;
	cin.get(ch);
	while (ch != 'A' && ch != 'B' && ch != 'C' && ch != 'D') {
		cin.get();
		cout << "不按要求输入，重新输入" << endl;
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
	cout << "A)麻婆豆腐\t\tB)西红柿炒鸡蛋\nC)糖醋里脊\t\tD)炒鱿鱼";
}
void response(char ch) {
	if (ch == 'A') {
		cout << "你选择了" << "麻婆豆腐";
	}
	else if (ch == 'B') {
		cout << "你选择了" << "西红柿炒鸡蛋";
	}
	else if (ch == 'C') {
		cout << "你选择了" << "糖醋里脊";
	}
	else if (ch == 'D') {
		cout << "你选择了" << "炒鱿鱼";
	}
}