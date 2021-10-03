/*副作用指的是在计算表达式时对某些东西进行了修改，顺序点是程序执行过程中的一个点
语句中的分号相当于顺序点，顺序点有助于阐明后辍递增何时进行*/
#include<iostream>
using namespace std;
int main()
{
	/*int guests = 0;
	while (guests++ < 10)
		cout << guests << endl;
		while循环将在之后讨论，类似于只有测试表达式的for循环*/
	int x;
	int y = (4 + x++) + (6 + x++);/*表达式4+x++不是一个完整表达式，因此c++不能保证
								  x的值在计算子表达式4+x++后立刻加1*/

	
	
	
	
	return 0;
}