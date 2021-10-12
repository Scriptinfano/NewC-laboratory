#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "输入一个单词(输入done结束)：" << endl;
	int count = 0;
	char words[20];
	cin >> words;
	cin.get();/*使用cin的成员函数get()函数简单的暂停屏幕直到按下回车键且不需要存储任何
			  字符*/
	while (strcmp(words,"done")) /*strcmp(str1,str2)函数用于两个字符串的比较，根据比较结果返回一个int类型的值
								 若返回结果的值小于 0，则表示在ASCII码上， str1字符串小于str2字符串;
								 若返回结果返回值大于0，则代表str2字符串小于str1字符串
								 只有当返回值为0时，两个字符串才是相同的*/ {
		cin >> words;/*相当于重写字符串数组的内容，原先的内容会被新写入的内容覆盖，如果想要在words之后
					 添加新的内容应该使用strcat()函数，strcat(str1,str2)将str2的内容追加到str1的内容之后*/
		count++;
	}
	cout << "一共输入了" << count << "个单词";

	return 0;
}