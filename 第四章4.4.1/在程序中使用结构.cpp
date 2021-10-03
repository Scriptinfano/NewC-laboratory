#include <iostream>;
struct inflatable//声明结构时不需要使用分号，但声明结构后需要使用分号
	/*inflatable是结构的名字，相当于一种结构格式，不同的结构相当于不同
	的商店，而char,float等数据类型相当于商店中的水果类和干果类，而数据
	名称相当于具体的水果名字或干果名字*/
	/*结构声明的位置，既可以在main函数之前，也可以在main函数的开头声明*/
{
	char name[20];
	float volume;
	double price;

};

int main()
{
	using namespace std;
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
/*注意，在C++11的结构初始化中，如果大括号内未包含任何东西，则各个成员将被设置为零
*/