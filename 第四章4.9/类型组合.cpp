#include<iostream>;
#include<string>;
#include<cstring>;
#pragma warning(disable:4996)
using namespace std;
int main()
{
	struct jiegou
	{
		string mingzi;
		double jiaqian;
		int nianfen;
	};
	jiegou s1, s2, s3;
	s1.mingzi = "shupian";
	s1.jiaqian = 10.5;
	s1.nianfen = 1956;
	s2.mingzi = "����";
	s2.jiaqian = 15.2;
	s2.nianfen = 2003;
	s3.mingzi = "һ��ʺ";
	s3.jiaqian = 0.12;
	s3.nianfen = 2004;
	jiegou* p1 = &s1;
	cout << "һ����Ʒ��������" << p1->mingzi << endl;
	cout << "һ����Ʒ�ļ�Ǯ��" << p1->jiaqian << endl;
	cout << "һ����Ʒ�����������" << p1->nianfen << endl;

	jiegou sulan[3];
	sulan[0].mingzi = "��Ƭ";
	sulan[0].jiaqian = 10.5;
	sulan[0].nianfen = 1956;
	(sulan + 1)->mingzi = "���";
	(sulan + 1)->jiaqian = 23.6;
	(sulan + 1)->nianfen = 1957;

	const jiegou* zhizhenshuzu[2] = { &s2,&s3 };
	cout << zhizhenshuzu[0]->mingzi << "  " << zhizhenshuzu[0]->jiaqian << "  " << zhizhenshuzu[0]->nianfen << endl;/*ָ����->��Ա��*/
	const jiegou** ppa = zhizhenshuzu;/*zhizhenshuzu��һ����������ƣ�������ǵ�һ��Ԫ�صĵ�ַ������һ��Ԫ����ָ��
									  ���ppa��һ��ָ�룬ָ��һ��ָ��const jiegou��ָ�롣typeName** pointer_name;
									  (ָ���ָ�������)*/
									  /*��c++11�л�������������ָ���ָ��*/
	auto ppb = ppa;/*�Զ�����ָ��ָ��ppa��ָ��ppb*/
	/*ppa��һ��ָ��ṹָ���ָ�룬���*ppa��һ���ṹָ�룬�ɽ���ӳ�Ա�����Ӧ������*/
	cout << (*ppa)->mingzi << endl;
	cout << (*(ppb + 1))->jiaqian << endl;/*ppbָ��ppa��ppa��ָ����ָ������zhizhenshuzu�����ppb+1ָ����ָ������
										  �ĵڶ���Ԫ�أ�(*ppb+1)->jiaqianָ�ľ��ǽṹs3�ĳ�Աjiaqian*/

										  /*������ָ���ָ��*/
	int foo;
	int* p = &foo;
	int** pp = &p;
	int*** ppp = &pp;

	return 0;
}