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
13、 *tolower(ch):若ch为大写字符，则函数返回小写的该字符，否则返回该参数（to lower的意思就是到小写）
14、 *toupper(ch):若ch为小写字符，则函数返回大写的该字符，否则返回该参数（to upper的意思就是到大写）
*/
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cin.get(ch);
	while (ch != '@') {
		if (isdigit(ch)) {
			cin.get(ch);
			continue;
		}
		else if(islower(ch)){
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}
		cout << ch;
		cin.get(ch);
	}
	return 0;
};