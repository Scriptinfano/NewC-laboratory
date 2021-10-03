#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "输入一个单词(输入done结束)：" << endl;
	int count = 0;
	char words[20];
	cin >> words;
	cin.get();
	while (strcmp(words,"done")) {
		cin >> words;
		count++;
	}
	cout << "一共输入了" << count << "个单词";

	return 0;
}