#include<iostream>
#include<string>
#include<cstring>
using namespace std;
unsigned int counter(const char* str, char ch);/*第一个参数是指向char的常量指针，第二个参数是
												要计算的特定字符*/
int main()
{
	/*回顾表示字符串的三种方式：
	1、初始化一个char数组
	2、用引号括起的字符串常量
	3、被设置为字符串地址的char型指针*/

	/*字符串处理函数的参数一般为char指针*/
	/*char ghost[15] = "galloping";
	char* str = ghost;
	int n1 = strlen(ghost);
	int n2 = strlen(str);*/
	//int n3 = strlen("gamboling");将用引号括起的字符串作为参数传递给函数时，实际上传递的是字符串
	//第一个字符的地址
	/*cout << "strlen(ghost)的结果为" << n1 << endl;
	cout << "strlen(str)的结果为" << n1 << endl;*/
	//cout << "strlen(\"gamboling\")的结果为" << n1;

	/*包含字符但不以空字符结尾的char数组只是数组而不是字符串，不能被当做字符串处理，将指向char数
	组的指针作为参数传递给函数时，需要传递char数组的元素的数目，并将其作为第二个参数传递给函数
	而字符串不一样，它自带空值字符，就算不在参数中传递字符串的长度也可以在定义中使用循环依次检
	查每个字符直到遇到空字符为止*/

	/*示例程序（用函数检查计算特定的字符在字符串中出现的次数）*/
	char mmm[15] = "minimum";
	char walls[] = { 'u','l','t','i','m','a','t','e','\0' };//包含空值字符的字符数组可被视为字符串
	char* wall = walls;
	char* str1 = mmm;

	unsigned int ms = counter(mmm, 'm');
	unsigned int us = counter(walls, 'u');

	cout << "在minimum中，m出现的次数是" << ms;
	cout << "在ultimate中，u出现的次数是" << us;

	return 0;
}
unsigned int counter(const char* pointer, char ch) //用指针访问数组元素，并将元素和字符ch进行比较
{
	unsigned int count = 0;
	while (*pointer)/*当指针指向空字符时停止循环*/
	{
		if (*pointer == ch) {
			count++;
		}
		else {
			pointer++;/*将指针向后移动*/
		}
		return count;

	}
}