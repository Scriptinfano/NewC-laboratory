#include<iostream>
using namespace std;
int main()
{
	/*基于范围的for循环简化了一种常见的循环任务：对数组（或容器类，如vector和array的每个元素）执行相同的操作*/
	double prices[5] = { 4.99,10.99,6.87,7.99,8.49 };
	for (double x : prices)
		cout << x << endl;/*x最初表示数组prices的第一个元素，显示第一个元素后不断执行循环，该循环将显示数组中
						  的每个值*/
	/*要修改数组中的元素，需要使用不同的循环变量语法*/
	for (double& x : prices)/*符号&表明x是一个引用变量，这种声明能让接下来的代码修改数组中的内容*/
		x = x * 0.8;

	for (int x : {3, 5, 2, 8, 6})/*这种特殊的循环暂时不做解释，第八章讨论*/
		cout << x << " " << endl;
	return 0;
};