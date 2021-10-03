#define BYTE char/*使用预处理器指令将在编译程序时用char替换所有的BYTE*/
#define FLOAT_POINTER float*

#include<iostream>
using namespace std;
int main()
{
	typedef int byte;/*使用C++关键字typedef来创建类型的别名*/
	typedef BYTE* pointer;/*让pointer成为char指针的别名*/
	FLOAT_POINTER pa, pb;
	return 0;
};