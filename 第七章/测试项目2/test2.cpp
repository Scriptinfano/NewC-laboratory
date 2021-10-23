#include<iostream>
using namespace std;

int main()
{
	char name[20] = "apple";
	char name2[20] = { "banana" };
	char name3[20] = { 'a','b','l','q' };
	cout << name << endl;
	cout << name2 << endl;
	cout << name[0] << endl;
	cout << name2[0] << endl;
	return 0;
}
