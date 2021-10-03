#include<iostream>
using namespace std;
int main()
{
	double wages[3] = { 1.2,3.2,1.2 };
	short stacks[3] = { 1,2,3 };

	/*两种方法将数组的地址赋给指针*/
	double* ps = wages;/*对数组名不能使用地址运算符，只能对数组的第一个元素使用地址运算符，数组第一个元素的
					   地址就代表了整个数组的地址*/
	short* px = &stacks[0];

	cout << "两个数组的信息如下：wages[3] = { 1.2,3.2,1.2 }、stacks[3] = { 1,2,3 }; " << endl;
	cout << "ps指针指向wages数组，px指针指向stacks数组" << endl;
	cout << "ps=" << ps << "," << "*ps=" << *ps << endl;
	cout << "px=" << px << "," << "*px=" << *px << endl;

	/*指针的运算法则*/
	ps = ps + 1;/*ps指针原本默认指向数组的第一个元素，+1表示指针指向第二个元素，以此类推*/
	px = px + 2;
	cout << "分别对指针ps和px进行加1操作，结果如下\n" << "ps=" << ps << "\n" << "px=" << px << endl;
	cout << "*ps=" << *ps << "," << "*px=" << *px << endl;

	cout << "*(stacks+1)=" << *(stacks + 1) << endl;/* *stacks+1和stacks[1]是等价的，编译器先计算地址，然后返回存储在
													其中的值*/
													/*arrayname[i] 等价于 *(arrayname + i)
													  pointername[i] 等价于 *(pointername + i)*/
	cout << "指针ps的长度是：";
	cout << sizeof(ps) << endl;/*对指针名使用sizeof运算符得到的是指针的长度，而不是指针指向的数组的长度*/
	cout << "数组stacks的长度是：";
	cout << sizeof(stacks) << endl;/*对数组名使用sizeof运算符得到的是数组的长度*/

	return 0;
};