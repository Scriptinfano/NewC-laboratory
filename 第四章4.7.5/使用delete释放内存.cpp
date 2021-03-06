#include <iostream>;
using namespace std;
int main()
{
	/*new用来请求内存，那么就有delete运算符来释放内存*/
	int* ps = new int;/*用new为指向int型变量的指针ps找一块用来存储int型数据的内存*/
	delete ps;/*释放指针ps所指向的内存块，将其归还于内存池*/
	/*delete指令只能释放指针所指向的内存块，不会删除指针本身*/
	/*delete不能用于释放已经释放内存的内存块，也不能用来释放声明变量所获得的内存，因为声明变量所存放的
	内存块可能在堆中存储，而指针指向的内存块在栈中，delete可能是专门用来删除栈中的内存块的（以上皆为推测）
	即只能使用delete来释放new分配的内存，new和delete是配合使用的*/
	/*另外，对空指针使用delete是安全的*/

	/*使用delete的关键在于，将它用于new分配的内存，这并不意味着要使用用于new的指针，而是用于new的地址*/
	int* huang = new int;
	int* zhang = huang;/*创建一个新指针，并使其和huang一样，指向同一处地址*/
	delete zhang;/*释放zhang内存的同时也将huang内存释放掉了，因为这两个指针指向的是同一个地址*/
	//delete huang;重复释放已经释放的内存是严重的错误

	/*上述三个语句创建了两个指向同一个内存块的指针，一般不能这样做，因为此行为将增加错误的删除同一个
	内存块两次的可能性，但对于返回指针的函数，使用另一个指针是有作用的（之后讨论什么是返回指针的函数）*/
	return 0;
}
