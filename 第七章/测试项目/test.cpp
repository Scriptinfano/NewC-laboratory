/*#include<iostream>
using namespace std;
int main() {
	int age = 78;
	int* pd = &age;
	cout <<"输出pd" << pd << endl;
	cout << "输出指针本身的地址&pd" << &pd << endl;
	cout << "输出age的地址" << &age << endl;
	
	return 0;
}*/
/*#include <stdio.h>
int GB(int a, int b)
{
	int temp = a;
	while (temp % b != 0)
	{
		temp += a;
	}
	return temp;
}
int GY(int a, int b)
{
	int temp;
	while (b != 0);
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main()
{
	int a, b;
	printf("请输入两个整数:\n");
	scanf_s("%d %d", &a, &b);
	printf("最小公倍数是：%d\n", GB(a, b));
	printf("最大公因数是：%d\n", GY(a, b));
	return 0;
}*/
/*#include<iostream>
#define SUM 100000;
int main()
{
	int i;
	float amount, aver, total;
	for (i = 1, total = 0; i < 1000; i++) {
		scanf_s("%f", &amount);
		total += amount;
		if (total >= SUM) {
			break;
		}

	}
	aver = total / i;
	printf("num=%d \n aver=%f\n", i, aver);
	return 0;
}*/
/*#include<iostream>
using namespace std;
const int sum = 100000;
int main() {
	int i = 1;
	float total = 0;
	float amount, aver;
	for (i, total; i < 1000; i++) {
		cout << "输入数字" << endl;
		cin >> amount;
		total += amount;
		if (total >= sum) {
			break;
		}
	}
	aver = total / i;
	cout << "num=" << total << "\n" << "aver=" << aver;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v1 = { 1,56,45 };
	vector<int>v2{ v1 };
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	char mmm[15] = "minimum";
	cout << "输出char mmm[15] = \"minimum\";" << mmm << endl;
	//char walls[] = { 'u','l','t','i','m','a','t','e','\0' };
	char walls[] = { 'u','l','t','i','m','a','t','e' };
	cout << "输出char walls[] = { 'u','l','t','i','m','a','t','e','\0' };" << walls << endl;

	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int time = 15;
	int* ps = &time;
	cout << ps;
	return 0;
}
