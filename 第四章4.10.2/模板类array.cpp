#include<iostream>;
#include<string>;
#include<cstring>;
#include<vector>;/*ʹ��vector����������ͷ�ļ�vector*/
#include<array>;/*ʹ��array����Ҳ�������ͷ�ļ�array*/
#pragma warning(disable:4996)
using namespace std;
int main()
{
	/*��Ȼvector�Ĺ��ܱ�����ǿ�󣬵������Ĵ�����Ч���Եͣ������Ҫ���ȹ̶���������ʹ��array�����������ѡ�񣬴���
	�ǲ�����Ͳ���ȫ��array���ֲ�����һȱ��*/
	/*array����ĳ����ǹ̶��ģ�Ҳ����ջ����̬�ڴ���䣩��Ч����������ͬ�������㣬����ȫ*/
	array<int, 5> ai;/*array�ĵڶ��������޶���array��ĳ��ȣ������﷨��vector���ƣ������˵ڶ���������ȷ��
					 array��ĳ����ǹ̶���*/
	array<double, 4> ad = { 2.3,12.2,25.2,23.3 };
	//array<typeName, n_elem> arr;��n_elem�����Ǳ�����������һ������

	return 0;
}