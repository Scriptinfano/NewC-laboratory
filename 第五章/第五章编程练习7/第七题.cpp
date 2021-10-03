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
	int car_number;
	cout << "有多少辆车？";
	cin >> car_number;
	car_info* pcar = new car_info[car_number];;/*声明指向由结构car_info组成的数组的指针变量pcar*/
	/*用new创建包含结构体的动态数组的语法（运用指针）：结构名* 指针名=new 结构名[数组元素];*/




	for (int i = 0; i < car_number; i++) {
		cout << i + 1 << "号车" << endl;/*想要临时输出一个值，而不改变这个值时就可以直接将运算表达式放在
												输出语句中*/
		cout << "请输入制造商:";
		cin.get();/*读取掉上一个cin输入所残留的换行符，因为键盘在读取数据的输入语句时只在缓冲区为空时等待用户输入*/
		/*输入函数复习:
		1、getline(cin,字符串名)：定义在头文件string中，作用是读取键盘缓冲区中的字符串并抛弃换行符，使下一次输入无需使用cin.get()
								  就可以重新读取输入
		2、cin.getline(数组名，要读取的字符数)：getline()作为cin的成员函数，定义在iostream头文件中，该函数有两个
												参数，第二个参数要把空字符算上*/
		getline(cin, pcar[i].manufacturer);
		cout << "请输入生产年份:";
		cin >> pcar[i].date;
		cin.get();

	}
	cout << "here is your collection:" << endl;
	for (int i = 0; i < car_number; i++)
	{
		cout << pcar[i].date << " " << pcar[i].manufacturer;
	}
	return 0;
}