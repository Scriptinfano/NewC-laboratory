/*for循环提供了一种一次访问字符串中每个字符串的方式，基于这个概念，下面的程序将让我
们能够使用数组表示法来访问字符串中的字符*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "输入一个单词：";
	string word;
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--)/*size函数计算字符串的字符数时不包括空字符，因为元素索引值总是比
											  第几个元素的值少1，所以要获得最后一个元素的索引值，必须先获得字符
											  总数，然后减一获得最后一个字符的索引值*/
	cout << word[i];/*使用string类的对象时要包含头文件string
	word.size()的意思是让string类对象size()获得字符串word中的字符数并将i设置为字符串
	中最后一个字符的索引（不考虑空字符）为了反向计数，程序使用递减运算符--，在每轮循
	环后将数组的下标减1*/
	cout << "\nBye.\n";
	return 0;
}