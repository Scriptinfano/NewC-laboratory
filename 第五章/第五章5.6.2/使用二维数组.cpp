#include<iostream>
using namespace std;
const int cities = 5;/*cities是程序数量*/
const int years = 4;/*years是年份数量*/
int main()
{
	const char* pcities[cities] = {/*pcities是指针数组的名字*/
		"new york city",
		"los angeles",
		"san fransisko",
		"boston",
		"washinton DC"
	};/*声明指针数组，且这些指针指向的值不可改变*/
	int maxtemps[years][cities] = {/*maxtemps是二维数组的名字*/
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	cout << "在2008到2011年之间五个城市的温度如下：\n\n";
	for (int city = 0; city <cities; ++city) {/*city是for循环中的初始值，也是索引值*/
		cout << pcities[city] << ":\t";
		for (int year = 0; year <years; ++year) {/*year作为索引值，小于年份数量*/
			cout << maxtemps[year][city] << "\t";
		};
			
		cout << endl;
	}
	
	char cities2[5][25] =  /*创建一个char数组的数组，将5个字符串的
						   最大长度设置为24个字符，指针数组存储的
						   是5个字符串的地址，而使用char数组的数组
						   时，将5个字符串分别复制到包含25个元素的
						   char数组中，第25个元素是空字符*/
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	return 0;
}