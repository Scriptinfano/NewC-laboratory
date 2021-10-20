#include<iostream>
using namespace std;
double besty(int lens);
double pam(int lens);
void estimate(int lines, double(*pf)(int));

int main()
{
	int code;
	cout << "你需要计算多少行代码：";
	cin >> code;
	cout << "这是besty的算法：\n";
	estimate(code, besty);
	cout << "这是pam的算法：\n";
	estimate(code, pam);

	return 0;
}
double besty(int lens)
{
	return 0.03 * lens + 0.0004 * lens * lens;
}


double pam(int lens)
{
	return 0.05 * lens;
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << "行代码会花费" << (*pf)(lines) << "小时" << endl;
}