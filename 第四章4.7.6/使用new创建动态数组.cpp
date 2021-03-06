#include <iostream>
using namespace std;
int main()
{
	/*什么是静态联编内存：例如在程序声明时定义了一个数组，则该数组在编译时就会被实现分配空间，占用了内存，不管是否使用数组
	该数组所占用的空间内存就被称为静态联编内存*/
	/*什么是动态联编内存：如果数组是在程序运行时创建的，即在程序运行时选择数组的长度，则此时分配的内存被称为动态联编内存*/
	/*整数变量加减与指针变量加减的区别：
	1、整数变量的加减是给值进行加减，而指针加减的量等于它指向的类型的字节数（如：将指向double的指针增加1后，如果系统对double
	使用8个字节存储，则数值将再次增加8）*/
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };

	/*创建动态数组与删除动态数组*/
	int* px = new int[10];/*创建一个包含十个元素的动态数组，将该动态数组的第一个元素的地址赋给指针px，访问数组时需要使用指针
						  px*/
	delete[]px;/*这是删除动态数组的格式：delete[]pointer name;方括号告诉程序应释放整个数组，不仅是指针指向的
			   元素，一般指针指向数组时会指向数组第一个元素，第一个元素的地址代表了整个数组的地址*/
	double* pw = wages;/*多数情况下，C++将数组名解释为数组第一个元素的地址。该语句将pw声明为指向double类型的指针，然后将其
					   初始化为wages（数组名在此时被编译器解释为该数组第一个元素的地址，即10000.0的地址）*/
	short* ps = &stacks[0];/*将ps声明为指向short类型的指针，并将数组stacks第一个元素的地址初始化到指针*/

	cout << "pw= " << pw << ",*pw= " << *pw << endl;/*pw指针此时指向数组wages的第一个元素，因此*pw表示第一个元素的值即10000.0*/
	pw = pw + 1;/*这个语句是指针的加减法，前面说过，指针的加减法改变的是指向的地址值，pw是指向double型的指针，pw+1相当于将数字
				地址值加8，因为double的总空间占8个字节（注意不是double值所占的空间，double值所占的空间一定比8个字节要小），如果
				加2，则地址值增加16（不是空间扩大了16），以此类推。这样做使得pw的值变成了第二个元素的值*/
	cout << "为pw指针加1:" << endl;
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;/*类比为pw+1就能理解，ps指针是指向short型的，为指针ps+1后，由于short总大小为2字节，因此会让地址值增加2，进而
				地址值变为第二个元素的地址*/
	cout << "为ps指针加1:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	/*重点：将指针变量+1后，其增加的值等于指向的类型占用的字节数*/

	cout << "使用数组表示法访问两个元素\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "使用指针表示法访问两个元素\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;/*“*(stacks+1)”的意思：stacks是一个数组，stacks+1指的是该数组的
														 第二个元素，外面的*()意思是计算stacks第二个元素的地址然后找到存储
														 在那里的值，结果就是stacks[1]的含义。运算符的优先级要求使用括号，如
														 果不用括号，将给*stacks加1，相当于给指针在加减*/
														 //*(stacks+1)=stacks[1],我们称*(stacks+1)为stacks[1]的指针表示法
														 /*再次说明，虽然指针名和数组名可以表示地址，但指针值是可以改变的，而数组名是常量*/
	/*使用指针访问动态数组元素*/
	int* poi = new int[5];

	cout << sizeof(wages) << " = 数组wages的大小为\n";
	cout << sizeof(pw) << " = 指针pw的大小为\n";

	/*数组本身也是有地址的，直接对数组名应用地址运算符时将得到数组的地址*/
	/*从数字上看，数组的地址与数组中第一个元素的地址的值是相等的
	  从概念上看，&tell[0]是一个2字节内存块的地址，而&tell是一个20字节内存块的地址
	  因此，表达式tell+1将地址值增加2，而表达式&tell+1将地址增加20，为什么是20，下一行注释将解释*/
	short tell[10];/*该数组中有十个元素，而这个数组是short型数组，每个元素所占的字节是2，所以这个数组所占的总空间
							 是20，所以在用表达式&tell+1的意思是将地址增加20，&tell表示的是一个20字节内存块的地址*/
	cout << tell << endl;
	cout << &tell << endl;
	cout << &tell[0];
	/*short* pas = tell;数组网格理论：short型指针pas指向整个数组tell，如果把数组看做一行表格，许多数组从上到下一次排列就构成了一个
							二维网格，网格是有坐标的（x,y），x时是横向坐标，y是纵向坐标，y告诉我们要到哪个数组找元素，x告诉我
							们要在这个数组的第几个位置找到该元素，而指针既可以指向x坐标，也可以指向y坐标,指向x坐标时就是指向
							某个具体元素，而指向y坐标时就是指向某整个数组
							注意，不能使用sizeof()来确定动态分配的数组包含的字节数
							总之：使用new和delete时，应遵守以下规则：
							1、不要使用delete来释放不是new分配的内存
							2、不要使用delete释放同一个内存块两次
							3、如果使用new[]为数组分配内存，则应使用delete[]来释放
							4、如果使用new为一个实体分配内存，则应使用delete（没有方括号）来释放
							5、对空指针使用delete是安全的*/
	return 0;
}