#include <iostream>;
using namespace std;
int main()
{
	/*共用体是一种数据格式，能存储不同的数据类型，但只能同时存储其中的一种类型*/
	/*共用体和结构的区别：结构可以同时存储int,long,char等，而共用体只能存储int, long或double数据类型*/
	union one4all
	{
		int int_val;
		long long_val;
		double double_val;
	};/*使用one4all变量来存储int\long\double，条件是在不同时间进行*/

	one4all pail;
	pail.int_val = 15;
	cout << pail.int_val;
	pail.double_val = 1.38;
	cout << pail.double_val;
	/*因为pail有时是int变量，有时是long变量，共用体的成员名称标识了变量的容积，共用体每次
	只能存储一个值，所以共用体的长度为其最大成员的长度*/
	/*如果在管理小商品目录时，有些商品的ID为整数，有的ID为字符串，这时就要用共用体来表示每个商品的ID，如果每个商品的
	ID都是一个数据类型，如整数，则可以用结构来管理*/
	struct widget
	{
		char brand[20];//小商品的牌子
		int type;//小商品的类型
		union id/*共同体实际上只存储一个被选中的成员，共用体变量的长度等于最长的成员的长度*/
		{
			long id_num;        // type 1 widgets
			char id_char[20];   // other widgets
		} id_val;/*共用体变量名，其类型是共用体id，id是共用体类型的名字，不能将成员运算符用于类型名，成员运算符只可用在变量名上*/
	};

	widget prize;

	if (prize.type == 1)             // if-else statement (Chapter 6)
		cin >> prize.id_val.id_num;  // use member name to indicate mode
	else
		cin >> prize.id_val.id_char;

	return 0;
}