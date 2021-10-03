#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	/*do while循环不同于for循环和while循环，它是出口条件循环，即先执行循环体然后再测试表达式决定是否继续执行循环
	如果条件为false，则循环终止*/
	char word[30];
	char password[30] = "huangmingxiang2003";
	
	bool once = true;
	cout << "请刷入密码：";
	do {
		cin.getline(word,30);
		
	} while (strcmp(password, word) != 0);
	cout << "密码正确" << endl;

	int i = 0;
	for (;;) { /*for循环中的测试条件如果为空，也会被视为true*/
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