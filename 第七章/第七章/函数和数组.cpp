#include<iostream>
using namespace std;
/**/
const int arsize = 8;/*arsiezeΪ����*/
int sum_arr(int arr[], int n);/*����ԭ�ͣ���һ������������,����������Ϊ�βδ��ݸ�����*/
/*�������׵�ַ��Ϊ�������ݸ�����ʱ������ԭ���е�һ����������������int arr[]����������int * arr,����arr��
Ԫ����int�ͣ����Ҫ���������׵�ַ����һ��������intָ�������д���*/
int sum_arr2(int* arr2, int n);
int main() {
	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, arsize);/*����һ�����Լ�������������Ԫ��֮�͵ĺ���*/
	cout << "�ܹ�����" << sum << "����";
	return 0;
}
int sum_arr(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total = total + arr[i];
	}
	return total;
}
int sum_arr2(int* arr2, int n) {
	;
}