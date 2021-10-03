#include<iostream>;
#include<string>;
#include<cstring>;
#include<vector>;/*使用vector对象必须包含头文件vector*/
#include<array>;/*使用array对象也必须包含头文件array*/
#pragma warning(disable:4996)
using namespace std;
int main()
{
	double a1[4] = { 1.2,2.4,3.6,4.8 };
	vector<double>a2(4);/*创建包含4个元素的vector类double型数组a2*/
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	array<double, 4>a3 = { 3.14,2.72,1.62 };
	array<double, 4>a4;
	/*vector和array的声明语法类似，array对数组元素的多少做了具体的限定且不可更改，vector更适合用于在程序运行时由用户自己决定要创建的数组元素个数
	array<数据类型，元素个数>数组名;
	vector<数据类型>数组名（元素个数）;*/
	a4 = a3;/*可以将一个array对象赋给另一个array对象，而对于数组必须逐元素复制*/

	cout << "a1[2]:" << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	a2.at(1) = 2.3;/*at()函数将a2[1]更改为2.3，将at()函数用于数组可以更改具体的元素值*/
	/*中括号表示法和at()成员函数的区别：使用at()时，将在运行期间捕获非法索引，而程序默认将中断，这种额外的
	检查造成运行时间的延长，有关*/

	/*array和数组存储在相同的区域中（栈），vector存储在另一个区域（自由存储区或堆）*/
	/*array对象是可以赋给另一个array的对象的，比数组自由一些，对于数组来说，必须诸元素赋值数据*/
	return 0;
}