#include<iostream>
#include<cstring>/*对字符串进行相关操作的函数的头文件*/
#include<string>/*包含对string类模板的声明*/
using namespace std;
struct car_info {
	string manufacturer;
	int date;
};/*声明结构体car_info*/

int main()
{
	char words[20];
	cout << "第一次输入：";
	cin >> words;
	cin.get();
	cout << words;
	cout << "第二次输入：";
	cin >> words;
	cout << words;

	return 0;
}
