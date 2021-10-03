#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	/*如果想要知道字符数组中的字符串是不是mate，假设word是数组名，然而word == "mate";
	并不能工作，数组名是数组的地址，用引号括起的字符串常量也是其地址，这个表达式的作用
	是查看他们是否存储在相同的地址上，地址一定是不同的*/
	/*要比较字符串内容是否相同，应使用strcmp()函数(strcmp()函数包含于头文件cstring)进行
	比较*/
	/*strcmp(字符串1，字符串2)，只有当字符串1等于字符串2时循环才会停止，参数可是指针、字
	符串常量、字符数组名。如果两个字符串相同，该函数将返回0即false，只有当测试部分得到
	布尔值是false时循环才会终止；如果第一个字符串按字母顺序排在第二个字符串之前，函数返回
	负数，排在之后则返回正数。按系统排列顺序比按字母排列顺序更准确，大写字母将位于小写字
	母之前。*/
	/*关系运算符虽然无法比较字符串，但可以比较字符，因为字符在ASC码中实际上是整型数据*/
	/*for(ch='a';ch<='z';ch++);*/
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "循环之后，单词是" << word << endl;
	return 0;
};