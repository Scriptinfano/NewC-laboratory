#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;
int main()
{
	double numbers[10];
	double input;/*��ʱ�洢Ҫ���뵽����Ԫ�ص�ֵ*/
	int counter = 0;/*��¼Ԫ�ظ���*/
	double average = 0.0;/*��¼ƽ��ֵ*/
	double sum = 0;/*��¼���ֵĺ�*/
	int bigger = 0;/*��¼����ƽ��ֵ��Ԫ�ظ���*/
	cout << "����ʮ��˫����С��ֵ��";
	cin >> input;
	while (input != 0 && counter < 10)/*counter��0��9֮��䶯��counter��Ϊ����Ԫ�ص��±�*/ {
		numbers[counter++] = input;/*�����counterʹ���˺��õ������������ʹ����counter��ֵ��Ȼ���ٶ�
								   �����+1����*/
		begin:cin >> input;
		if (!cin.good()) {
			cout << "�������Ͳ�ƥ�����������������������";
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
	cout << "���ֵ�ƽ��ֵ��" << average << endl;
	cout << "����ƽ��ֵ��Ԫ�ظ����ܹ���" << bigger << "��";
	
	return 0;
};