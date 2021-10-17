#include<iostream>
using namespace std;
struct travel_time
{
	int hours;
	int mins;
};//结构声明最好放到main函数之外，且放到程序的开头，以便函数原型声明时能识别结构类型名
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
const int mins_per_hr = 60;
int main()
{
	/*结构变量的行为更接近于基本的单值变量，结构将其数据组合成单个实体或数据对象，该实体被视为一个
	整体*/
	/*函数可以返回结构，结构明只是结构的名称不是地址，要获得地址必须使用地址运算符&*/
	/*按值传递结构的缺点：如果结构非常大，则复制结构将增加内存要求，降低系统运行速度。因此C语言程序
	员大多数时候采用传递结构的地址，然后使用指针来访问结构的内容。C++中有第三种选择：按引用传递（第八章讨论）*/
	/*以下介绍传递和返回整个结构*/

	//例一：处理行程时间，有些地图指出从A到B需要3小时50分钟，而从B城到C城需要1小时25分钟
	//这种时间应用结构表示，一个成员表示小时值，另一个成员表示分钟值。两个时间加起来时将分钟值转化
	//为小时值.具体做法：将分钟成员相加，然后通过整除法（除数为60）得到小时值，通过求模运算符（%）
	//得到剩余的分钟数
	travel_time day1 = { 5,45 };
	travel_time day2 = { 4,55 };

	travel_time trip = sum(day1, day2);
	cout << "从A城市到C城市所需要的总时间是：";
	show_time(trip);


	return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;//再定义一个结构变量存储分钟值的和与小时值的和
	total.mins = (t1.mins + t2.mins) % mins_per_hr;//所有分钟之和在转化为整型小时值后所剩下的分钟数
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / mins_per_hr;//将总时间转化为小时值
	return total;
}
void show_time(travel_time t)
{
	cout << t.hours << "小时" << t.mins << "分钟";
}
//travel_time类似于标准类型名，可被用来声明变量，函数的返回类型和函数的参数类型