#include<iostream>
using namespace std;

const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
	/*下面是一些函数的原型，他们的参数列表和返回类型相同
	const double*f1(const double ar[],int n);一式
	const double*f2(const double [],int);二式
	const double*f3(const double*,int);三式
	const double*f4(const double*ar,int)四式
	在函数原型中，可以省略标识符，省略标识符后，一式变为二式，四式变三式
	但是在函数定义中必须提供标识符，需要使用const double ar[]或者是const double *ar */

	/*声明一个指针，指向上面三个函数之一：
	const double*(*p1)(const double*,int);直接将原型中的函数名替换为(*p1)即可
	在声明的同时进行初始化：const double*(*p1)(const double*,int)=f1;
	使用C++的auto自动类型推断功能（简化代码）：
	auto p2=f2;自动声明函数指针，并将函数的地址赋给该指针

	cout<<(*p1)(av,3)<<":"<<*(*p1)(av,3); 前半部分是调用指针指向的函数，并将参数传递给该函数，并得到函数的返回
	值，该返回值根据原型的描述const double*，可见返回值是一个double值的十六进制地址，后半部分对返回值执行了解引用
	操作，进而得到存储在该地址处的实际值*/

	/*当需要很多函数指针调用多个函数时，可建立以函数指针作为元素的数组
	示例：const double*(*pa[3])(const double*,int)={f1,f2,f3}; 初始化语句
	将3放到这个位置的原因：pa是一个包含三个元素的数组，首先使用pa[3]。该声明的其他部分指出了
	数组包含的元素是什么样子的，运算符[]的优先级高于*，因此*pa[3]表明pa是一个包含三个指针的数组，(*pa)[3]表示一个
	指向有3个元素的数组的指针。初始化剩下的部分又指出了每个指针指向的是什么。指针指向的就是参数列表为(const double*,int),
	返回类型为const double*的函数。因此，pa是一个包含3个指针的数组，其中每个指针都指向这样的函数。

	建立以函数指针作为元素的数组时是否能使用auto，答案是不能，因为auto只能用于单值初始化，不能用于初始化列表，声明
	数组pa后，声明同样类型的数组就很简单了：auto pb=pa; pa已经是一个包含三个函数指针的数组了，这里pb也将成为包含
	3个函数指针的数组，随后可以利用循环依次将函数的地址赋给数组中的每个函数指针*/

	/*数组名是指向第一个元素的指针，同样的，pa和pb是指向函数指针的指针，使用pa[i]和pb[i]调用函数，因为pa[i]和pb[i]
	是数组中的指针，指针可调用函数：
	const double *px=pa[i](av,3);
	const double *py=(*pb[i])(av,3);
	在上一节中，已经说明了pa[i]和*pb[i]都可以表示数组中的元素
	要获得指向的double值，可使用运算符*对函数返回值进行解引用：
	double x=*pa[0](av,3);
	double y=*(*pb[1](av,3));*/

	double av[3] = { 1112.3,1542.6,2227.9 };

	const double* (*p1)(const double*, int) = f1;/*声明并初始化函数指针语句，f1是函数名也是函数的地址，将地址
	赋给指针是这句话的核心结构，等号前面的部分const double *是指针指向的函数f1的返回类型，后面的(const double*,int)
	是指针指向的函数f1的参数列表*/
	auto p2 = f2;/*指针p2被auto自动配置了,f2是函数名也是地址,起的作用和上一句是一样的*/
	auto p3 = f3;
	/*以上三句实现了三个目的：指针p1指向函数f1;指针p2指向函数f2;指针p3指向函数f3*/


	cout << "使用常规方法用指针直接调用函数" << endl;
	cout << "指针p1:" << endl;
	cout << "用指针调用函数后,函数返回的地址：" << (*p1)(av, 3) << endl;
	cout << "对地址解除引用后获得的值：" << *(*p1)(av, 3) << endl << endl;

	cout << "指针p2:" << endl;
	cout << "用指针调用函数后获得的地址：" << (*p2)(av, 3) << endl;
	cout << "对地址解除引用后获得的值：" << *(*p2)(av, 3) << endl << endl;

	cout << "指针p3:" << endl;
	cout << "用指针调用函数后获得的地址：" << (*p3)(av, 3) << endl;
	cout << "对地址解除引用后获得的值：" << *(*p3)(av, 3) << endl << endl;

	cout << "创建指针数组，然后使用循环依次使用指针调用函数" << endl;
	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };/*pa是一个包含三个元素的数组，首先使用pa[3]。该声明的
	其他部分指出了数组包含的元素是什么样子的，运算符[]的优先级高于*，因此*pa[3]表明pa是一个包含三个指针的数组。剩下
	的部分又指出了每个指针指向的是什么。指针指向的就是参数列表为(const double*,int),返回类型为const double*的函数。
	,因为函数名可视为函数地址，所以在{}中，只需要写上函数名，即可批量将函数地址赋给函数指针*/

	auto pb = pa;/*使pb成为pa类型的指针，所以pa和pb都是指向函数指针的指针*/

	//使用循环依次使用pa数组中的函数指针，并用这些函数指针调用函数：
	for (int i = 0; i < 3; i++)
	{
		cout << pa[i](av, 3) << ":" << *pb[i](av, 3) << endl;
	}


	/*创建指向整个数组的指针，由于数组名pa是指向函数指针的指针，因此指向数组的指针将是这样的指针，即它指向数组指针
	的指针，由于可使用单个值对其进行初始化，因此可使用auto：
	auto pc=&pa; pc是指向整个数组的指针，&pa是整个数组的地址
	不用auto，自己声明指向数组指针的指针：
	核心部分：(*pd)[3] pd是一个指针，指向包含3个元素的数组
	完整部分：const double*(*(*pd)[3])(const double*,int)=&pa;  解析：pd指向整个数组，*pd就是数组本身，*pd[i]
	是数组中的具体的元素，这个元素就是函数指针，对这个函数指针进行解引用得到函数名，函数名后再加参数列表就实现了
	调用函数的功能。前面的const double*是函数的返回类型，后面的(const double*,int)是函数的参数列表。后面的&pa
	和pa之间的差别：pa是数组第一个元素的地址，即&pa[0]。因此它是单个指针的地址。但&pa是整个数组的地址，正如之前
	所说，&pa和pa的值是相同的，但类型不一样，也就是对他们进行加减运算是获得的结果不一样。另一个差别是，要得到第一个
	元素的值，对pa解除一次引用，但需要对&pa解除两次引用：**&pa==*pa==pa[0],*/

	auto pc = &pa;
	//const double*(*(*pc)[3])(const double*,int)=&pa;

	cout << (*pc)[0](av, 3) << ":" << *(*pc)[0](av, 3) << endl;

	const double* (*(*pd)[3])(const double*, int) = &pa;

	//将调用函数的返回值赋给const double指针pdb
	const double* pdb = (*pd)[1](av, 3);/*调用函数的返回值赋给指针*/

	/*使用包含3个函数指针的数组调用函数：*/
	//const double *px = pa[0](av,3);
	//const double *py = (*pb[1])(av,3);
	//以上两种方法，函数名的表示分别为pa[0],用函数指针指代函数指针指向的函数是可以的。或者对函数指针(*pa[1])解引用
	//也达到了调用函数名的作用



	//pa和&pa的区别：
	/*pa在大多数情况下，pa是数组第一个元素的地址，即&pa[0]，因此，它是单个指针的地址。但&pa是整个数组的地址，
	从数字上来讲，二者的值是相同的，但类型不同，pa+1是下一个元素的地址，而&pa+1是数组pa后面一个12字节内存块的
	地址。另一个差别是，要得到第一个元素值，要对pa进行一次解引用，对&pa进行两次解引用
	**&pa==*pa==pa[0];
	*/




	return 0;
}

const double* f1(const double* ar, int n)
{
	return ar;//返回数组第一个元素的地址，作用和&ar[0]相同
}
const double* f2(const double ar[], int n)
{
	return ar + 1;//由于ar代表数组第一个元素的地址，所以ar+1表示的是数组第二个元素的地址
}
const double* f3(const double ar[], int n)
{
	return ar + 3;//与上同理，表示数组第三个元素的地址
}

/*
关于本节中所使用的auto：
以下两句的结果所产生的结果是一样的，有了C++11中auto的帮助，可以简化代码：
auto pc=&pa;
const double*(*(*pd)[3])(const double*,int)=&pa;
自动类型推断确保变量的类型与赋给它的初值的类型一致

*/