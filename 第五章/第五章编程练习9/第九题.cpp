#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout << "����һ������(����done����)��" << endl;
	int count = 0;
	string words;
	getline(cin,words);

	while (words!="done") {
		getline(cin, words);
		count++;
	}
	cout << "һ��������" << count << "������";
	
	return 0;
}