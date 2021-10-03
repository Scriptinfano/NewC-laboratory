/*流的状态可以通过检测ios_base类中的位来判断。
1）当输入流遇到文件尾时， eofbit位将被设置。
可以调用函数 cin.eof()来判断是否到达文件末尾
在cin中遇到文件末尾时返回true，否则返回false。
2）当在流中发生格式错误时，failbit位将被设置。
例如程序要求输入整数，但是在输入流中有非整数的字符的情况。在遇到这种错误时，这些字符不会丢失。
成员函数fail将报告流操作失败了，通常这种错误是可以恢复的。
3）当发生数据丢失时，将会设置badbit位。
成员函数bad将报告流操作是否失败了。一般情况下，这种严重的错误是不能修复的。
4）如果流中的eofbit、failbit 和 badbit位都没有被设置，那么goodbit位将被设置
即如果函数eof, fail 和 bad都返回false值，则成员函数good返回true值。I / O操作只在“好的”流中才能进行。
5）成员函数rdstate返回流中的错误状态。
例如，通过调用cout.rdstate返回流的状态，然后通过switch语句检查eofbit、badbit、failbit 和 goodbit来检查这些状态。
检测流状态的首选方法是使用成员函数eof， fail, bad 和 good， 使用这些函数不要求了解具体的状态位。
6）clear成员函数将流的状态重置为“好的”，使得流可以继续执行I / O操作。
clear函数的默认参数是goodbit所以语句
cin.clear()
清空了cin， 并且为该流设置goodbit位。
语句cin.clear(ios::failbit)则为流设置failbit位。
注意：
如果failbit位 和 badbit位其中至少一个被设置, 则basic_ios的成员函数operator!返回true；operator void* 返回false值(0)
示例代码：*/

#include<iostream>
#include<iomanip>/*I/O流的控制头文件*/

using namespace std;

int main()
{

	int integerValue;
	cout << "Before a bad input operation:"
		<< " cin.rdstate():" << cin.rdstate()/*我们定义要输入到的变量是整型,但如果我们输入了英文字母或者汉字,
											 那就会发生错误,cin里有个方法能检测这个错误,就是cin.rdstate();
											 1、当cin.rdstate()返回0(即ios::goodbit)时表示无错误,可以继续输入或者
											 操作
											 2、返回2则发生非致命错误（即ios::failbit）,则不能继续输入或操作，在
											 用cin.clear()清除failbit后cin才可以继续输入
											 3、返回4发生致命错误（即ios::hardfail）*/
		<< " cin.eof():" << cin.eof()
		<< " cin.fail():" << cin.fail()
		<< " cin.bad():" << cin.bad()
		<< " cin.good():" << cin.good() << endl;
	cout << " Expects an integer, but enter a character:";

	cin >> integerValue;
	cout << endl;

	cout << "After a bad input operation:"
		<< " cin.rdstate():" << cin.rdstate()
		<< " cin.eof():" << cin.eof()
		<< " cin.fail():" << cin.fail()
		<< " cin.bad():" << cin.bad()
		<< " cin.good():" << cin.good() << endl << endl;
	cin.clear();
	cout << "After cin.clear()" << " cin.fail():" << cin.fail()
		<< " cin.good():" << cin.good() << endl;

	return 0;
}