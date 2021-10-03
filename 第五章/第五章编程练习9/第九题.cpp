#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout << "输入一个单词(输入done结束)：" << endl;
	int count = 0;
	string words;
	getline(cin,words);

	while (words!="done") {
		getline(cin, words);
		count++;
	}
	cout << "一共输入了" << count << "个单词";
	
	return 0;
}