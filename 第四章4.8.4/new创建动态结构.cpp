#include<iostream>;
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	/*new不仅可以创建动态数组，还可以创建动态结构*/
	/*将new用于结构由两步组成：1、创建结构 2、访问其成员
	创建结构时需要同时使用结构类型和new*/



	inflatable* ps = new inflatable;/*创建一个未命名的inflatable类型，并将地址赋给一个指针*/
	/*创建动态结构时，不能将成员运算符.用于结构名，因为这种结构没有名称，仅知道地址。C++专为这种情况提供了一个
	运算符：箭头成员运算符(->),该运算符由连字符-和大于号>组成，可用于指向结构的指针*/
	/*箭头成员运算符：如果ps指向一个inflatable结构，则ps->price是被指向的结构的price成员*/
	/*何时使用句点成员运算符又何时使用箭头成员运算符：如果结构标识符是结构名，使用句点运算符；如果结构标识名
	是指向结构的指针，则使用箭头运算符*/
	/*如果ps是指向结构的指针，那么*ps指的就是结构本身，所以可以使用如下方法来访问结构成员：（*ps）.price  括号
	是C++的运算符的优先级规则，即先将*ps视为结构本身，然后在访问该结构中的结构成员*/
	/*下面是具体示例*/
	cout << "输入inflatable项目的名称：";
	cin.get(ps->name, 20);
	cout << "以立方英尺为单位输入体积:";
	cin >> (*ps).volume;
	cout << "以美元为单位输入钱数：";
	cin >> ps->price;
	cout << "名字：" << (*ps).name << endl;
	cout << "体积：" << ps->volume << "立方英尺" << endl;
	cout << "价钱：" << ps->price << endl;
	delete ps;
	return 0;
}