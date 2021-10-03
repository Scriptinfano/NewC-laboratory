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
	s2.mingzi = "花生";
	s2.jiaqian = 15.2;
	s2.nianfen = 2003;
	s3.mingzi = "一坨屎";
	s3.jiaqian = 0.12;
	s3.nianfen = 2004;
	jiegou* p1 = &s1;
	cout << "一号商品的名字是" << p1->mingzi << endl;
	cout << "一号商品的价钱是" << p1->jiaqian << endl;
	cout << "一号商品的生产年份是" << p1->nianfen << endl;

	jiegou sulan[3];
	sulan[0].mingzi = "薯片";
	sulan[0].jiaqian = 10.5;
	sulan[0].nianfen = 1956;
	(sulan + 1)->mingzi = "坚果";
	(sulan + 1)->jiaqian = 23.6;
	(sulan + 1)->nianfen = 1957;

	const jiegou* zhizhenshuzu[2] = { &s2,&s3 };
	cout << zhizhenshuzu[0]->mingzi << "  " << zhizhenshuzu[0]->jiaqian << "  " << zhizhenshuzu[0]->nianfen << endl;/*指针名->成员名*/
	const jiegou** ppa = zhizhenshuzu;/*zhizhenshuzu是一个数组的名称，因此他是第一个元素的地址，但第一个元素是指针
									  因此ppa是一个指针，指向一个指向const jiegou的指针。typeName** pointer_name;
									  (指针的指针的声明)*/
									  /*在c++11中还可以这样声明指针的指针*/
	auto ppb = ppa;/*自动创建指向指针ppa的指针ppb*/
	/*ppa是一个指向结构指针的指针，因此*ppa是一个结构指针，可将间接成员运算符应用于它*/
	cout << (*ppa)->mingzi << endl;
	cout << (*(ppb + 1))->jiaqian << endl;/*ppb指向ppa，ppa又指向了指针数组zhizhenshuzu，因此ppb+1指的是指针数组
										  的第二个元素，(*ppb+1)->jiaqian指的就是结构s3的成员jiaqian*/

										  /*如何理解指针的指针*/
	int foo;
	int* p = &foo;
	int** pp = &p;
	int*** ppp = &pp;

	return 0;
}