#include<iostream>
using namespace std;
int main()
{
	double wages[3] = { 1.2,3.2,1.2 };
	short stacks[3] = { 1,2,3 };

	/*���ַ���������ĵ�ַ����ָ��*/
	double* ps = wages;/*������������ʹ�õ�ַ�������ֻ�ܶ�����ĵ�һ��Ԫ��ʹ�õ�ַ������������һ��Ԫ�ص�
					   ��ַ�ʹ�������������ĵ�ַ*/
	short* px = &stacks[0];

	cout << "�����������Ϣ���£�wages[3] = { 1.2,3.2,1.2 }��stacks[3] = { 1,2,3 }; " << endl;
	cout << "psָ��ָ��wages���飬pxָ��ָ��stacks����" << endl;
	cout << "ps=" << ps << "," << "*ps=" << *ps << endl;
	cout << "px=" << px << "," << "*px=" << *px << endl;

	/*ָ������㷨��*/
	ps = ps + 1;/*psָ��ԭ��Ĭ��ָ������ĵ�һ��Ԫ�أ�+1��ʾָ��ָ��ڶ���Ԫ�أ��Դ�����*/
	px = px + 2;
	cout << "�ֱ��ָ��ps��px���м�1�������������\n" << "ps=" << ps << "\n" << "px=" << px << endl;
	cout << "*ps=" << *ps << "," << "*px=" << *px << endl;

	cout << "*(stacks+1)=" << *(stacks + 1) << endl;/* *stacks+1��stacks[1]�ǵȼ۵ģ��������ȼ����ַ��Ȼ�󷵻ش洢��
													���е�ֵ*/
													/*arrayname[i] �ȼ��� *(arrayname + i)
													  pointername[i] �ȼ��� *(pointername + i)*/
	cout << "ָ��ps�ĳ����ǣ�";
	cout << sizeof(ps) << endl;/*��ָ����ʹ��sizeof������õ�����ָ��ĳ��ȣ�������ָ��ָ�������ĳ���*/
	cout << "����stacks�ĳ����ǣ�";
	cout << sizeof(stacks) << endl;/*��������ʹ��sizeof������õ���������ĳ���*/

	return 0;
};