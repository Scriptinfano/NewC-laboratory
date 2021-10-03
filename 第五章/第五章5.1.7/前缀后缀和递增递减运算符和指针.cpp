#include<iostream>
using namespace std;
int main()
{
	/*前缀版本的效率要高于后缀版本，也就是先将值加1，然后返回结果*/
	/*递增运算符可用于指针和基本变量，将递增运算符用于指针时，将把指针的值增加指向的数据
	类型占用的字节数*/
	double arr[5] = { 21.2,32.56,21.3,153.3,151.36 };
	double* pt = arr;
	++pt;/*指针指向索引值为1的元素*/
	/*前缀递增、前缀递减、解除引用运算符的优先级相同，以从右到左的方式进行结合
	  后缀递增和后缀递减的优先级相同，但比前缀运算符的优先级高，以从左到右的方式结合*/
	/*前缀运算符的从右到左的结合规则的几个例子说明：
	1、*++p的含义是先将++应用于pt再将*应用于被递增的pt。
	2、++*pt意味着先取得pt指向的值，再将该值加一。 
	3、（*pt）++意味着圆括号指出首先对指针解除引用，得到一个值，然后递增运算符为该值
	    加一，但此时pt仍然指向该值。
	4、x=*pt++ 后缀运算符的优先级更高，意味着将运算符用于pt而不是*pt，因此最后对指针递增
	但后缀运算符意味着将对原来的地址而不是后来对指针递增后的新地址解除引用，因此*pt++的
	值为arr[2],该语句执行结束后,pt的值将为arr[3]的地址*/
	return 0;
};