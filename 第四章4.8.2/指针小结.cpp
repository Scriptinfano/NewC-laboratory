#include <iostream>;
using namespace std;
int main()
{
	double* pn;/*声明指向特定类型数据的指针*/
	double fuckyou = 32.3;
	pn = &fuckyou;/*将fuckyou的地址赋给指针pn*/

	char* pc;
	pc = new char;/*new运算符将返回未命名的内存的地址*/

	cout << *pn;
	*pc = 's';/*对指针解除引用=获得指针指向的值*/
	/*对指针解除引用除了用解除引用运算符还可以用数组表示法，例如：pn[0]与*pn是一样的
	注意：不能对未初始化为适当地址的指针解除引用*/

	/*区分指针和指针所指向的值*/
	int* pt = new int;
	*pt = 5;/*pt是指针，而*pt是一个int型的值*/

	/*数组名：在多数情况下，数组名将被视为数组的第一个元素的地址*/
	int tacos[10] = { 5,2,4,6,7,4,5,2,1,5 };/*tacos从现在开始将被视为数组的第一个元素的地址*/

	/*指针的算术：指针和整数可以相加，加1的结果是等于原来的地址值加上指向的对象占用的总字节数
				  如果将一个指针减去另一个指针，将获得两个指针的差，后一种运算将得到一个整数，
				  仅当两个指针指向同一个数组时，这种运算才是有意义的，将得到两个元素的间隔*/
				  /*仍用数组tacos来做示例*/
	int* po = tacos;/*int型指针po指向数组tacos的第一个元素，也相当于指向整个数组，参见数组网格理论（在new创建动态数组和指针算数中）*/
	cout << "数组tacos的值为{5,2,4,6,7,4,5,2,1,5}" << endl;
	cout << "Po指针目前所指的值为" << *po << endl;
	po = po + 1;/*tacos是int型数组，每个元素占4个字节，所以在对指针运用加减法时，加1相当于将地址值加4，,这个语句会让指针从
				指向第一个元素挪到指向第二个元素*/
	cout << "po指针现在所指的值为" << *po << endl;
	int* pi = &tacos[9];
	pi = pi - 1;/*指针pi向前挪一个元素,地址值向前减4*/
	int diff = pi - po;
	cout << diff << endl;/*输出时diff显示为7，说明两个元素的间隔是7个元素，地址值相差28，每个元素占4字节是由int型数组决定的*/

	/*数组的动态联编和静态联编*/
	/*一般使用数组声明来创建数组时，将采用静态联编，数组的长度在编译时设置
	  使用new[]运算符创建数组时采用动态联编，长度在运行时设置*/
	  /*注意：在使用动态联编数组时，在使用完这种数组后，一定要用delete[]来释放其占用的内存*/
	int size;
	cout << "请输入一段数字" << endl;
	cin >> size;
	int* pz = new int[size];
	cout << "你输入的数组是" << size << endl;
	delete[]pz;

	int* pl = new int[10];
	*pl = 5;/*未命名的数组的第一个元素被设为5，且让int型指针pl指向该元素*/
	cout << pl[0] << endl;/*当未提供数组名称时，可以使用指针表示法来访问数组中的元素*/
	pt[9] = 44;
	int coats[10];
	*(coats + 4) = 12;/*用指针表示法来设定数组中元素的具体值，该语句的意思是将数组coats上的第四位元素设为12*/
	/*数组表示法设定数组中的元素：1、数组类型 数组名称[元素个数]={元素值1，元素值2}
								  2、先初始化数组：数组类型 数组名称[元素个数];
									 再为数组中的具体元素赋值：数组名称[要设定的元素索引号]=想设定的0元素值;*/
									 /*指针表示法设定数组中的元素：1、先初始化数组：数组类型 数组名称[元素个数];
																   2、用指针表示法为数组元素赋值：*(数组名称 + 想要设定的元素索引号) = 想要设定的元素索引值;*/
	return 0;
}