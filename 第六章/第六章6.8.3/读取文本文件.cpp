#include<iostream>
#include<fstream>
#include<cstdlib>/*该头文件包含成员函数exit()的原型*/
using namespace std;

int main()
{
	/*从文件中输出内容，所必须要有的条件：
	1、包含头文件fstream
	2、头文件fstream中定义了一个用来处理输入的ifstream类
	3、声明一个或多个用于处理输入的ifstream对象
	4、指明名称空间std
	5、将ifstream对象和文件关联起来，同样适用open()
	6、用close()关闭文件*/

	/*当打开一个不存在的文件进行输入时，这种错误将导致后面使用ifstream对象进行输入时失败。
	检查文件是否被成功打开的首要方法是is_open(),下面是使用方法*/
	ifstream fin;
	ofstream fout;
	fin.open("D:/testfiles/test.txt", ios::in);
	fout.open("D:/testfiles/test.txt", ios::out|ios::app);
	if (!fin.is_open())/*文件打开成功时，is_open()返回true，经过取反得到false,不执行if条件中的代码*/ {
		exit(EXIT_FAILURE);/*EXIT_FAILURE是一个与操作系统通信的参数值，该参数值也是在头文件cstdlib中定义的
						   执行这行代码将终止程序*/
	}
	cout << "输入想要在文件中显示的信息：";
	char testforfin[100];
	cin >> testforfin;
	fout <<"在程序中输入的内容如下：" << "\n" << testforfin;
	return 0;
};