/*C++从C语言中继承了一个与字符相关的函数软件包，可简化例如确定字符是否是大写、数字、标点符号等工作，函数原型
定义于头文件cctype*/
/*cctype中的常见函数（注意：这些函数的返回值均为int型的值）：
打*的为重点记忆
1、  isalpha(ch):若ch为字母，则函数返回非零，否则返回零
2、  ispunct(ch):若ch为标点符号，则函数返回非零,否则返回零
3、  isdigits(ch):若ch为数字，则函数返回非零，否则返回零
4、  isspace(ch):若ch为空白（空白包括换行符，制表符，空格），则函数返回非零，否则返回零
5、  isalnum(ch):若ch为字母或数字，则函数返回非零，否则返回零
6、  iscntrl(ch):若ch为控制字符，则函数返回非零，否则返回零
7、  isdigit(ch):若ch为0~9的数字，则函数返回非零，否则返回零
8、  *isgraph(ch):若ch为除空格以外的打印字符，则函数返回非零，否则返回零
9、  *islower(ch):若ch为小写字母，则函数返回非零，否则返回零
10、 isprint(ch):若ch为打印字符，则函数返回非零，否则返回零
11、 *isupper(ch):若ch为大写字母，则函数返回非零，否则返回零
12、 *isxdigit(ch):若ch为十六进制数字，则函数返回非零，否则返回零
13、 *tolower(ch):若ch为大写字符，则函数返回小写的该字符，否则返回该参数
14、 *toupper(ch):若ch为小写字符，则函数返回大写的该字符，否则返回该参数*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char asd;
	cout << "输入一个字符（程序检测输入的是字母还是标点符号）";
    cin.get(asd);
	if (isalpha(asd))/*如果不用cctype中定义的检测是否为字母的函数，则应使用逻辑表达式((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))*/ {
		cout << "你输入了字母" << endl;
	}
	else {
		cout << "你输入了标点符号";
	}

    cout << endl << endl;
    cout << "Enter text for analysis, and type @"
        " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);              // get first character
    while (ch != '@')         // test for sentinel
    {
        if (isalpha(ch))       // is it an alphabetic character?
            chars++;
        else if (isspace(ch))  // is it a whitespace character?
            whitespace++;
        else if (isdigit(ch))  // is it a digit?
            digits++;
        else if (ispunct(ch))  // is it punctuation?
            punct++;
        else
            others++;
        cin.get(ch);          // get next character
    }
    cout << chars << " letters, "
        << whitespace << " whitespace, "
        << digits << " digits, "
        << punct << " punctuations, "
        << others << " others.\n";

	return 0;
}