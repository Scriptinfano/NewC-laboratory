#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "����һ������(����done����)��" << endl;
	int count = 0;
	char words[20];
	cin >> words;
	cin.get();
	while (strcmp(words,"done")) {
		cin >> words;
		count++;
	}
	cout << "һ��������" << count << "������";

	return 0;
}