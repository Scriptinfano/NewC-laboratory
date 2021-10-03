#include<iostream>;
using namespace std;
int main()
{
	/*C++允许指定占用特定位数的结构成员*/
	/*字段的类型为整形或枚举*/
	/*可以使用没有名称的字段来提供间距*/
	/*每个成员被称为位字段*/
	/*不同于一般结构体的是位字段在定义成员的时候需要指定成员所占的位数，这个成员最好是整形*/
	struct MyStruct
	{
		unsigned int SN : 4;/*冒号后面的数字指定了位数*/
		unsigned int : 4;//没有名称的字段提供间距
		bool gooin : 1;
		bool goodtorgle : 1;

	};
	/*使用标准结构表示法来访问位字段*/

	return 0;
}