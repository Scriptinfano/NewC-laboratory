/*����˵�����û����������������ó��򽫼��㲢�������������֮�����������ĺ͡������������С�����������磺�û�����2��9���������2~9֮�����������ĺ�*/
/* #include<iostream>
using namespace std;
int sum(int jiashu, int beijiashu);
int main()
{
	int begin, end,temp;
	cout << "����������������Ҫ�󣺵�һ����ҪС�ڵڶ�������������֮���ÿո������������һ������һ�»س�����";
	begin:cin >> begin >> end;
	if (begin >= end) {
		cout << "����Ҫ�����룬���������롣";
		goto begin;
	}
	else {
		
		for (int i = 1; i <= (end - begin); i++) {
			temp = sum(begin, begin + 1);
			begin = begin + 1;
		}
		cout << "���Ϊ��" << temp;
	}
	
	return 0;
};
int sum(int x, int y) {
	x = x + y;
	return x;
} */

/*�����Ǵ𰸣�*/
#include <iostream>
using namespace std;
int main()
{
	int min, max;
	int sum = 0;
	cout << "����������������Ҫ�󣺵�һ����ҪС�ڵڶ�������������֮���ÿո������������һ������һ�»س�����";
begin:cin >> min >> max;
	if (min >= max) {
		cout << "����Ҫ�����룬���������롣";
		goto begin;
	}
	else {
		for (int i = min; i <= max; i++)/*��forѭ���У���ʼֵ�Ͳ�����������������*/
			sum += i;/*��sum+i��ֵ����sum*/
	}
	cout << "��Χ֮�����������ĺ�Ϊ��" << sum;
	return 0;
}