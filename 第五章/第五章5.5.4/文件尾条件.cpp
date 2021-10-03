#include<iostream>
using namespace std;
int main()
{
	/*文件尾条件的设置方法是在输入结束后键入ctrl+z即可设置EOF*/
	/*第一种方法检测文件尾条件（使用char型数据和cin.fail()函数）*/
	char ch;
	int count = 0;
	int count2 = 0;
	cin.get(ch);
	while (cin.fail() == false) {/*测试文件尾条件EOF，cin.fail()检测到EOF时返回值true，true不等于false，测试条件为
								 false，则结束循环*/
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read" << endl;

	/*第二种方法检测文件尾条件（使用int型数据和EOF关键字）*/
	int chu; /// for compatibility with EOF value
	chu = cin.get();
	while (chu != EOF)
	{
		cout.put((char)chu); // cout.put(char(ch)) for some implementations
		++count2;
		chu = cin.get();
	}
	cout << endl << count2 << "characters read" << endl;
	/*注意，循环测试条件中的括号是必不可少的，尤其要注意各个符号的优先级，例如
	while(ch=cin.get()!=EOF);这句话是不正确的，由于比较运算符!=的优先级大于赋值运算符，就导致cin.get()先和EOF进行比较，比较的结果是false或true，这些布尔值会被转换为int值1和0
	并赋给ch*/
	return 0;
};