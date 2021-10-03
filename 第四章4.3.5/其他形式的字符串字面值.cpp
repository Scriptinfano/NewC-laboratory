#include<iostream>;
#include<cstring>;
#include<string>;
using namespace std;
int main()
{
	/*除char类型的字符串之外，还有一些不常用的类型,如wchar_t和C++11新增的char16_t和
	char32_t类型，同样可创建这些类型的数组和字符串字面值，C++分别使用前缀L,u,U来表示
	，这些前缀加在字符串前面，且在引号之外*/
	wchar_t title[] = L"chief astrogator";
	char16_t name[] = u"florida";
	char32_t state[] = U"california";
	//利用原始字符串语法来输出"(
	cout << R"+*("(fuck you)",i want.)+*" << endl;//R"+*(       "(fuck you)"字符串           )+*"
	/*万能定界符号简记：          R引加星扩                                                  扩加星引*/
	//  "+*(  和  )+*" 取代了默认定界符，默认定界符""是有限制的，而万能定界符号之间可添加任意数量的特殊符号，在万能定界符之间，想写什么写什么，没有任何限制

	return 0;
}