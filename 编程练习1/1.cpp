#include <iostream>;
using namespace std;
int main()
{
	char firstname[20], lastname[20];
	char grade;
	int age;

	cout << "你的名字是什么：";
	cin.getline(firstname, 20);
	cout << "你的姓是什么：";
	cin.getline(lastname, 20);
	cout << "你上哪一个年纪了：";
	cin >> grade;
	cout << "你多大年纪了：";
	cin >> age;
	cout << "你的信息如下" << endl;
	cout << "姓名：" << firstname << "." << lastname << endl;
	cout << "年级：" << char(grade + 1) << endl;/*如果在grade中存入的数据是B，那么+1意味着输出下一个字母C*/
	cout << "年龄：" << age;
	return 0;
}