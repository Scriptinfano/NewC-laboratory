#include <iostream>
#include<array>
using namespace std;
const int arsize = 101;/*arsize是array类对象的大小*/
int main()
{
	array <long double, arsize>jiecheng;/*array中的元素个数是固定的，arsize限定了array中的元素个数*/
	jiecheng[0] = jiecheng[1] = 1;/*初始化0和1的阶乘，因为0和1的阶乘都是1，所以初始化为1*/
	for (int i = 2; i < arsize; i = i + 1)
		jiecheng[i] = i * jiecheng[i - 1];

	/*用循环挨个输出各个数字的阶乘*/
	for (int i = 0; i < arsize; i++)
		cout << i << "的阶乘是" << jiecheng[i] << endl;

	return 0;
}