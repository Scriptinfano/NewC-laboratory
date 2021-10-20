#include<iostream>
using namespace std;
int main()
{
	/*下面是一些函数的原型，他们的参数列表和返回类型相同
	const double*f1(const double ar[],int n);一式
	const double*f2(const double [],int);二式
	const double*f3(const double*,int);三式
	const double*f4(const double*ar,int)四式
	在函数原型中，可以省略标识符，省略标识符后，一式变为二式，四式变三式
	但是在函数定义中必须提供标识符，需要使用const double ar[]或者是const double *ar
	*/
	/*声明一个指针，指向上面三个函数之一：
	const double*(*p1)(const double*,int);直接将原型中的函数名替换为(*p1)即可
	在声明的同时进行初始化：const double*(*p1)(const double*,int)=f1;
	使用C++的auto自动类型推断功能（简化代码）：
	auto p2=f2;自动声明函数指针，并将函数的地址赋给该指针

	cout<<(*p1)(av,3)<<":"<<*(*p1)(av,3); 前半部分是调用指针指向的函数，并将参数传递给该函数，并得到函数的返回
	值，该返回值根据原型的描述const double*，可见返回值是一个double值的十六进制地址，后半部分对返回值执行了解引用
	操作，进而得到存储在该地址处的实际值


	*/
	return 0;
}