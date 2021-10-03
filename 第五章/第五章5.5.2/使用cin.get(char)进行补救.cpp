#include<iostream>
using namespace std;
int main()
{
	/*逐个读取输入的程序需要检查每个字符，包括空格、制表符和换行符*/
	/*istream成员函数cin.get()读取输入中的下一个字符（包括空格）*/
	char ch;
	int count = 0;
	cout << "enter characters;enter # to quit:" << endl;
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read" << endl;
	cout << "请输入四个字母的单词";
	char a, b, c;
	cin.get(a).get(b).get(c);
	cout << "你输入的单词是" << a << b << c ;
	return 0;
}
/*头文件iostream将cin.get(ch)参数声明为引用类型，这样就不会像在C语言中将变量名作为参数放进函数后将修改变量的值的错误，但本程序传递的是ch,不是&ch，只要函数将参数声明为引用即可
。cin.get()每次只能读取一个字符，while循环执行到本行时，从输入流中读取一个字符后进入循环测试*/
/*C语言中，这个程序存在严重错误，使用cin.get(ch)时，将一个值放在ch变量中相当于改变了变量的值，在C语言中要修改变量的值必须将变量的地址传递给函数，所以cin.get(ch)在C语言中应该
写成cin.get(&ch)。*/
/*cin.get().get();相当于cin.get();cin.get();*/
/*C语言中，如果函数接受char指针和int参数，则使用该函数时，不能只传递一个参数，但在C++中可以这样做，因为该语言支持函数重载的OOP特性。函数重载允许创建多个同名函数，条件是他们的
参数列表不同。例如：如果使用cin.get(name,arsize)，则编译器将找到使用char*和int作为参数的cin.get()版本；使用cin.get(ch)也是一样的道理*/
/*ch=cin.get() 是将输入的一个字符（包括空白字符）的ascii码值作为函数返回值赋值给ch
cin.get（ch）功能一致，注意函数参数是字符引用，因此ch也被改变为输入的一个字符，但是函数的返回值是流的引用，因此可以这样一直进行下去：char a, b;
                                                                                                                                     cin.get(a).get(b);*/
/*cin.get(char)的参数一定是char,ch=cin.get()中的ch一定是除char以外的数据类型，最好是int*/