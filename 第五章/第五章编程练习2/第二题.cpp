#include <iostream>
#include<array>
using namespace std;
const int arsize = 101;/*arsize��array�����Ĵ�С*/
int main()
{
	array <long double, arsize>jiecheng;/*array�е�Ԫ�ظ����ǹ̶��ģ�arsize�޶���array�е�Ԫ�ظ���*/
	jiecheng[0] = jiecheng[1] = 1;/*��ʼ��0��1�Ľ׳ˣ���Ϊ0��1�Ľ׳˶���1�����Գ�ʼ��Ϊ1*/
	for (int i = 2; i < arsize; i = i + 1)
		jiecheng[i] = i * jiecheng[i - 1];

	/*��ѭ����������������ֵĽ׳�*/
	for (int i = 0; i < arsize; i++)
		cout << i << "�Ľ׳���" << jiecheng[i] << endl;

	return 0;
}