#include<iostream>
#include<cstring>/*包含字符串处理函数*/
#include<string>/*有这个头文件才能使用string对象*/
using namespace std;
struct dounation {
	string name;
	double money;
	
};
int main() {
	cout << "\t\t\t\t\t维护合法权利团体成员资料录入与显示\n";
	int dounators_numbers;
	
	cout << "录入成员信息开始:\n";
	cout << "请输入捐献者数目：";
	cin >> dounators_numbers;
	cin.get();/*读掉输入后的换行符达到清空缓冲区的目的*/
	dounation* ps = new dounation[dounators_numbers];/*用new创建动态结构数组*/
	for (int i = 0; i < dounators_numbers; i++) {
		cout << "输入第" << i + 1 << "位用户的数据\n";
		cout << "姓名：";
		getline(cin,ps[i].name);/*也可以使用getline()函数，这个函数是专门把读取的字符串放到string对象中的，其语法为：
						getline(输入流（一般是cin）,string对象名称,结束输入的字符（一般不写第三个参数，默认是换
						行符）)*/
		/*getline函数读到换行符后，将换行符之前的数据读入目标数组，然后将缓冲区的换行符丢弃*/
		cout << "捐款数目：";
		cin >> ps[i].money;
		cin.get();
		cout << "继续输入，或者按F退出输入";
		if (cin.get() == 'F') {
			break;
		}
	}
	cout << "\n";
	cout << "录入结束\n";
	cout << "下面的捐款者是重要捐款者（捐款超过10000的捐款者的姓名和其捐款数目）\n";
	for (int x = 0; x < dounators_numbers; x++) {
		
		if (ps[x].money >= 1000) {
			cout << "第" << x + 1 << "位用户：\n";
			cout << "\t" << "姓名：" << ps[x].name << "\n";
			cout << "\t" << "捐款数额：" << ps[x].money << "\n";
			
		}
		else {
			x++;
		}
	}

	
	
	return 0;
}