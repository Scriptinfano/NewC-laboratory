#include<iostream>
using namespace std;
double besty(int lens);
double pam(int lens);
void estimate(int lines, double(*pf)(int));

int main()
{
	int code;
	cout << "����Ҫ��������д��룺";
	cin >> code;
	cout << "����besty���㷨��\n";
	estimate(code, besty);
	cout << "����pam���㷨��\n";
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
	cout << lines << "�д���Ứ��" << (*pf)(lines) << "Сʱ" << endl;
}