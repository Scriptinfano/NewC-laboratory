#include<iostream>
#include<fstream>
#include<cstdlib>/*该头文件包含成员函数exit()的原型*/
using namespace std;
/*
成员函数open()中的第二个参数文件打开模式标记参数大全
ios::in 					打开文件用于读取数据，若文件不存在，则打开出错
ios::out 					打开文件用于写入数据，若文件不存在，则新建该文件；如果文件原本存在，则代开后清除原内容
ios::app 					打开文件，用于在末尾添加数据，如果文件不存在，则新建文件
ios::trunc 					打开文件时会清空内部所有数据，单独使用时的作用和ios::out相同
ios::binary 				以二进制方式打开文件，若不指定此模式，则以文本模式代开
ios::in|ios::out			打开已存在的文件，可读取内容，也可以向其中写数据，文件打开时，原有内容保持不变，如果文件不存在，则打开出错
ios::out|ios::app			在文件末尾追加写入数据
ios::in|ios::out|ios::trunc	打开文件，可读取可写入，若文件本存在，打开时清除原有内容；若文件不存在，则新建文件
*/
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
	
	fin.open("D:/testfiles/test.txt", ios::in);//只读数据
	fout.open("D:/testfiles/test.txt", ios::out|ios::app); //写入数据，且以追加方式写入数据
	if (!fin.is_open()) /*文件打开成功时，is_open()返回true，经过取反得到false,不执行if条件中的代码*/
	{
		exit(EXIT_FAILURE);/*EXIT_FAILURE是一个与操作系统通信的参数值，该参数值也是在头文件cstdlib中定义的
						   执行这行代码将终止程序*/
	}
	cout << "输入想要在文件中显示的信息：";
	char testforfout[100];
	cin >> testforfout;
	fout <<"在程序中输入的内容如下：" << "\n" << testforfout;

	char testforfin[100];
	fin >> testforfin;
	cout << "从文件中读取的数据如下：\n";
	for (int i = 0; testforfin[i] != '\0';i++)
		cout << testforfin;
	return 0;
}