/*���躯��f1()�ͺ���f2()��ԭ�����£�
void f1(application* a);
const char* f2(const application* a1, const application* a2);
�뽫p1��p2�ֱ�����Ϊָ��f1��f2��ָ�룻��ap����Ϊһ�����飬������5��������p1��ͬ��ָ�룻��pa����Ϊһ��ָ�룬��
ָ����������10��������p2��ͬ��ָ�룬ʹ��typedef����������������*/
#include<iostream>
using namespace std;
struct application
{
	char name[30];
	int credit_ratings[3];
};

void f1(application* a);
const char* f2(const application* a1, const application* a2);

int main()
{
	application v1 = { {"shit on you"},{15,56,14} };
	application v2 = { {"fuck you"},{15,56,14} };
	void (*p1)(application * a);
	const char* (*p2)(const application * a1, const application * a2);

	//����ָ�����飬�����Ԫ���Ǻ���ָ��
	void (*ap[5])(application * a) = { f1 };
	const char* (*pa[10])(const application * a1, const application * a2) = { f2 };

	return 0;
}

void f1(application* a)
{
	for (int i = 0; i < 3; i++)
	{
		cout << a->credit_ratings[i];
	}
	for (int j = 0; j < 30; j++)
	{
		cout << a->name[j];
	}
}

const char* f2(const application* a1, const application* a2)
{
	cout << a1->credit_ratings << endl;
	cout << a1->name << endl;
	cout << a2->credit_ratings << endl;
	cout << a2->name << endl;
}