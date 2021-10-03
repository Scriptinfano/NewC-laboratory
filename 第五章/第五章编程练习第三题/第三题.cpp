#include<iostream>
using namespace std;
int main()
{
	double temp, sum = 0;
	bool once = true;
	bool twice = false;
	do {
		if (once) {
			for (int i=0;i<1;i++) {
				cout << "输入一个用来加的数字：";
			}
			once = false;
		}
		if (twice) {
			for (int x = 0; x < 1; x++) {
				cout << "再次输入用来加的数字：" << endl;
			}

		}
		
		cin >> temp;
		sum += temp;
		
		twice = true;
	} while (temp != 0);
	cout << "检测到0的输入，退出循环";
	cout << "所有输入的数字的和为=" << sum;
	return 0;
}