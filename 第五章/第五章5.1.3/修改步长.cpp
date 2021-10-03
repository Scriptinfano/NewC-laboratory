#include<iostream>
using namespace std;
int main()
{
	cout << "输入一个整形值：";
	double by;
	cin >> by;
	cout << "counting by " << by << "s:" << endl;
	for (double i = 0; i < 99999.9; i = i + by)
		cout << i << endl;
	return 0;
}