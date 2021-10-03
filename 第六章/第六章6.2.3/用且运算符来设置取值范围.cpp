#include<iostream>
using namespace std;
const char* qualify[3] = {
	"十七到三十五岁",
	"三十五到六十五岁",
	"六十五岁以上"
};/*将char指针数组中的每个元素设为常量，表示每个元素不可修改*/
int main()
{
	int age;
	cout << "输入你的年龄";
	cin >> age;
	int index;

	if (age > 17 && age < 35) {
		index = 0;
	}
	else if (age>=35&&age<65) {
		index = 1;
	}
	else {
		index = 2;
	}
	cout<<endl;
	cout << qualify[index];

	return 0;
}