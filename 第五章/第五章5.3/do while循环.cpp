#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	/*do whileѭ����ͬ��forѭ����whileѭ�������ǳ�������ѭ��������ִ��ѭ����Ȼ���ٲ��Ա��ʽ�����Ƿ����ִ��ѭ��
	�������Ϊfalse����ѭ����ֹ*/
	char word[30];
	char password[30] = "huangmingxiang2003";
	
	bool once = true;
	cout << "��ˢ�����룺";
	do {
		cin.getline(word,30);
		
	} while (strcmp(password, word) != 0);
	cout << "������ȷ" << endl;

	int i = 0;
	for (;;) { /*forѭ���еĲ����������Ϊ�գ�Ҳ�ᱻ��Ϊtrue*/
		i++;
		if (30 >= i)break;
	}

	int x = 0;
	do {
		x++;
	} while (30 > x);

	int n = 0;
	while (n < 30) {
		n++;
	};
	return 0;
};