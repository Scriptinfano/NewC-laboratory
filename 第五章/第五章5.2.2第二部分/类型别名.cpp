#define BYTE char/*ʹ��Ԥ������ָ��ڱ������ʱ��char�滻���е�BYTE*/
#define FLOAT_POINTER float*

#include<iostream>
using namespace std;
int main()
{
	typedef int byte;/*ʹ��C++�ؼ���typedef���������͵ı���*/
	typedef BYTE* pointer;/*��pointer��Ϊcharָ��ı���*/
	FLOAT_POINTER pa, pb;
	return 0;
};