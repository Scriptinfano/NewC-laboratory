#include<iostream>
using namespace std;
int main()
{
	/*������һЩ������ԭ�ͣ����ǵĲ����б�ͷ���������ͬ
	const double*f1(const double ar[],int n);һʽ
	const double*f2(const double [],int);��ʽ
	const double*f3(const double*,int);��ʽ
	const double*f4(const double*ar,int)��ʽ
	�ں���ԭ���У�����ʡ�Ա�ʶ����ʡ�Ա�ʶ����һʽ��Ϊ��ʽ����ʽ����ʽ
	�����ں��������б����ṩ��ʶ������Ҫʹ��const double ar[]������const double *ar
	*/
	/*����һ��ָ�룬ָ��������������֮һ��
	const double*(*p1)(const double*,int);ֱ�ӽ�ԭ���еĺ������滻Ϊ(*p1)����
	��������ͬʱ���г�ʼ����const double*(*p1)(const double*,int)=f1;
	ʹ��C++��auto�Զ������ƶϹ��ܣ��򻯴��룩��
	auto p2=f2;�Զ���������ָ�룬���������ĵ�ַ������ָ��

	cout<<(*p1)(av,3)<<":"<<*(*p1)(av,3); ǰ�벿���ǵ���ָ��ָ��ĺ����������������ݸ��ú��������õ������ķ���
	ֵ���÷���ֵ����ԭ�͵�����const double*���ɼ�����ֵ��һ��doubleֵ��ʮ�����Ƶ�ַ����벿�ֶԷ���ִֵ���˽�����
	�����������õ��洢�ڸõ�ַ����ʵ��ֵ


	*/
	return 0;
}