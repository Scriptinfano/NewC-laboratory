/*假设函数f1()和函数f2()的原型如下：
void f1(application* a);
const char* f2(const application* a1, const application* a2);
请将p1和p2分别声明为指向f1和f2的指针；将ap声明为一个数组，它包含5个类型与p1相同的指针；将pa声明为一个指针，它
指向的数组包含10个类型与p2相同的指针，使用typedef来帮助完成这项工作。*/
/*#include<iostream>
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

	//创建指针数组，数组的元素是函数指针
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
}*/
#include<iostream>
using namespace std;
int main()
{
	int array[3] = { 1,2,3 };
	cout << array << endl;
	int(*p)[3] = &array;//声明指向整个数组的指针
	/*array和&array[0]都是数组的首地址；&array是整个数组的地址*/
	cout << p + 1 << endl;
	cout << *(p + 1) << endl;
	
	return 0;
}