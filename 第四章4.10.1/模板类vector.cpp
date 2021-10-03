#include<iostream>;
#include<string>;
#include<cstring>;
#include<vector>;/*使用vector对象必须包含头文件vector*/
#pragma warning(disable:4996)
using namespace std;
int main()
{
	/*模板类vector类似于string类，是一种动态数组，当需要在运行阶段由用户自定义数组长度时应该首选vector对象来作为数组的替代品，比使用new来创建动态数组好用，因为不需要再使用delete删除
	空间*/
	/*使用vector对象替代动态数组的通用做法：定义存储数组元素个数的变量，用cin为变量输入值，声明vector对象数组，将元素个数设定为前面的变量*/
	bool once = false;
	if (once) {
		vector<int> vi;/*声明vi是一个vector<int>对象，可以大概理解为一个int变量加了vector的buff成为了vector对象*/
		int n;
		cin >> n;
		vector<double>vd(n);/*创建一个名为vd的vector对象，可以存储n个类型为double的元素*/
		/*vector对象在插入或添加值时可以自动调整长度，因此可以将vi的初始长度设置为0，但要调整长度需要使用vector包
		的各种方法*/
	}
	cout << "请输入要创建的结构数组的长度";

	cout << "录入用户信息开始：";
	struct documentrary {
		string name;
		int age;
		string job;
		string sex;
	};
	int n;
	cin >> n;
	vector<documentrary>shuzu(n);
	for (int i = 0; i < n; i++) {
		cout << "输入第一位用户的信息\n";
		cout << "姓名：";
		cin >> shuzu[i].name;
		cin.get();
		cout << "年龄：";
		cin >> shuzu[i].age;
		cin.get();
		cout << "职业：";
		cin >> shuzu[i].job;
		cin.get();
		cout << "性别：";
		cin >> shuzu[i].sex;
		cin.get();
		cout << "是否继续录入成员信息？（Y/N）：";
		char ch;
		if (cin >> ch) {
			cin.clear();
			cout << "输入类型不匹配,请重新输入";

		}

	}



	return 0;
}