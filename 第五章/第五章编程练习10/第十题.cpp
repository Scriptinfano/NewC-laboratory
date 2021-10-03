#include<iostream>
using namespace std;
int main()
{
	/*cout << "输入行数：";
	int rows;
	cin >> rows;
	int i2 = 1;
	int i = 1;
	int count = 0;
	for (i; i <= rows;i++) {
		for (i2; rows - i2 >= 1;i2++) {
			cout << ".";
			count++;
		}
		i2 += 1;
		for (count;count<rows;count++) {
			cout << "*";
		}
		cout << endl;
		count = 0;
		
		i2++;
	}*/
	int line;
	cout << "输入行数：";
	cin >> line;
	
	for (int i=0; i <= line; i++) {
		for (int j=0; j <= line - i;j++) {
			cout << ".";

		}
		for (int j = 0; j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}