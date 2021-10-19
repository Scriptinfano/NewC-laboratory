#include<iostream>
#include<array>
#include<string>
using namespace std;
const int seasons = 4;
void show(array<double, seasons>da);//array对象的类型不是array，而是array<数据类型，int值>
void fill(array<double, seasons>* pa, const array<string, seasons>sname);
int main()
{

	/*类对象基于结构，结构编程方面的有些考虑因素也适用于类*/
	const array<string, 4>snames = { "春季","夏季","秋季","冬季" };/*如果函数要修改对象，这需要将对象的地址传递给函数
	（下一章会介绍另一种方法--引用）*/
	//在array对象中，如果要在函数中传递array对象，array对象的类型是array<数据类型，int值>
	/*模板array并非只能存储基本数据类型，还可以存储类对象*/
	array<double, seasons>expenses;//创建存储开支的array对象
	fill(&expenses, snames);//调用填充函数
	show(expenses);//调用展示函数

	return 0;
}

void fill(array<double, seasons>* pa, const array<string, seasons>sname)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << "输入" << sname[i] << "开支：";
		cin >> (*pa)[i];/*pa是一个指向array<double,4>对象的指针，因此(*pa)[i]是该对象的一个元素。由于运算符优先级
		的影响，括号必不可少*/
	}
}
void show(array<double, 4>da)
{
	double total = 0.0;
	for (int i = 0; i < 4; i++)
	{
		cout << "四季的开支依次为：\n" << da[i] << "$" << endl;
		total += da[i];
	}
	cout << "总开支=" << total << "$" << endl;
}