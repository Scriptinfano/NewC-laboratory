/*#include<iostream>
using namespace std;
int main() {
	int age = 78;
	int* pd = &age;
	cout <<"���pd" << pd << endl;
	cout << "���ָ�뱾��ĵ�ַ&pd" << &pd << endl;
	cout << "���age�ĵ�ַ" << &age << endl;
	
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
	printf("��������������:\n");
	scanf_s("%d %d", &a, &b);
	printf("��С�������ǣ�%d\n", GB(a, b));
	printf("��������ǣ�%d\n", GY(a, b));
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
#include<iostream>
using namespace std;
const int sum = 100000;
int main() {
	int i = 1;
	float total = 0;
	float amount, aver;
	for (i, total; i < 1000; i++) {
		cout << "��������" << endl;
		cin >> amount;
		total += amount;
		if (total >= sum) {
			break;
		}
	}
	aver = total / i;
	cout << "num=" << total << "\n" << "aver=" << aver;
}