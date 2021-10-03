#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;
int main()
{
	double numbers[10];
	double input;/*临时存储要输入到数组元素的值*/
	int counter = 0;/*记录元素个数*/
	double average = 0.0;/*记录平均值*/
	double sum = 0;/*记录数字的和*/
	int bigger = 0;/*记录大于平均值的元素个数*/
	cout << "输入十个双精度小数值：";
	cin >> input;
	while (input != 0 && counter < 10)/*counter在0到9之间变动，counter作为数组元素的下标*/ {
		numbers[counter++] = input;/*这里对counter使用了后置递增运算符，先使用了counter的值，然后再对
								   其进行+1操作*/
		begin:cin >> input;
		if (!cin.good()) {
			cout << "输入类型不匹配或发生其他错误，请重新输入";
			cin.clear();
			goto begin;
		}

	}
	for (int i = 0; i < counter; i++) {
		sum += numbers[i];
			}
	average = sum / counter;
	for (int i = 0; i < counter; i++) {
		if (numbers[i] > average) {
			bigger++;
		}
	}
	cout << fixed;
	cout << "数字的平均值：" << average << endl;
	cout << "大于平均值的元素个数总共有" << bigger << "个";
	
	return 0;
};