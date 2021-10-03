/*if else相比于switch来说，虽然二者都可以提供选择，但switch中的每一个标签必须是一个单独的值，也就是说switch语句
不能处理取值范围的问题，而if else则可以。switch语句的效率更高*/
#include<iostream>
using namespace std;
const int arsize = 80;
int main()
{
	/*break和continue语句可使程序跳过部分代码，break语句一般在switch语句或其他循环中使用使程序跳到switch或循环之后
	的语句处执行。continue一定要用在循环体之中，使程序跳过循环体中余下的代码，并开始新一轮循环，就算continue在循环体
	当中的一个if条件句中，也算在循环体之内。而break则在跳过循环体中余下的代码后执行循环体之后的代码，不再进入循环*/
	char line[arsize];
	int spaces = 0;
	
	cout << "输入一行文本\n";
	cin.getline(line, arsize);/*cin.getline(数组名,限定读取的个数)是cin调用成员函数以专门将字符串填入字符数组的
							一种方式*/
	cout << "结束行：\n" << line << endl;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << "line[" << i << "]=" << line[i] << endl;
		if (line[i] == '.')
			break;/*如果在每次循环中逐个检测字符数组中的字符时，发现有一个字符是‘.’，则退出循环*/
		if (line[i] != ' ')
			continue;/*检测到空格时则跳过if条件句中剩下的部分*/
		spaces++;/*本句只有在未输入空格或句点时才会执行，功能就是给输入的字符计数*/
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "完成。\n";

	/*continue语句导致程序跳过循环体的剩余部分，但是不会跳过循环的更新表达式。
	在不同循环中，continue语句跳到哪是不一样的：
	1、在for循环中，continue语句使程序直接跳到更新表达式处，然后跳到测试表达式处。
	2、在while循环中，continue语句使程序直接跳到测试表达式，循环的更新部分将被跳过，因为while循环的更新部分是写
	在循环体中的。*/
	/*在if条件句中使用continue语句：如果if条件句中只有一行代码，则不需要在这一行代码和if之间加上continue，若if
	条件句中有多行代码，想要跳过某句之后的代码时则应使用continue。*/
	return 0;
}