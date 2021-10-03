/*用If条件判断句计算输入中的空格数和字符总数*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);/*cin.get()语句专门用来输入char型变量，每次只读取一个字符,但当字符是'.'时退出循环*/
	while (ch != '.'){
		if (ch == ' ') {
			++spaces;
			
	}
		++total;
		cin.get(ch);
	}
	cout << endl;
	cout << "总共输入了" << spaces << "次空格。" << endl;
	cout << "总共读取了" << total << "个字符。";

		return 0;
}