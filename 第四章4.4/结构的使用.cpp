#include <iostream>;
using namespace std;
int main()
{
	/*结构与数组的区别
	结构可以在一个单元中存储多个不同类型的元素*/
	/*创建结构的步骤：
	1、定义结构描述（标记能够存储在结构中的各种数据类型）
	2、按描述创建结构变量*/

	struct inflatable//结构声明,语法：struct 结构名称，在C++11中，声明结构可以省略struct
	{
		//以下是结构存储的数据类型列表
		//在数据类型列表中，一般语法为：成员类型（如char,int等） 成员名称;
		char name[20];
		float volume;
		double price;
	};//结束结构声明要在第二个大括号之后写上;
	//结构定义后，可创建已定义类型的变量
	inflatable hat;
	inflatable woopie_cushion;
	struct inflatable mainframe;//C语言中声明结构变量的语句，必须加上struct
		//用结构变量来访问结构成员，其相当于声明了一个变量
		//语法：结构变量名.结构成员名
	hat.name;
	hat.price;/*由于price成员被声明为double类型,因此hat.price表示的是
			  一个double型的变量*/

			  /*在具体的程序中使用结构*/
	inflatable guest =
	{
		/*以下三行数据，均和声明结构中的数据类型列表中所罗列的数据类型
		一一对应*/
		"glorious gloria",//对应char name[20];
		1.88,//对应float volume;
		29.99//对应double price;
	};/*这样就将三种不同数据类型的数据存储进一个inflatable型结构变量
	  guest中*/
	inflatable pal =
	{
		"audacious arthur",
		3.12,
		32.99
	};

	cout << "expand your guest list with" << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "you can have both for $" << guest.price + pal.price << "!" << endl;

	return 0;
}