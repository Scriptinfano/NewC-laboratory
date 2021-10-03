#include <iostream>;
using namespace std;
int main()
{
	/*指针不是整形，但计算机通常将地址当做整数处理*/
	/*如何直接将地址赋给指针*/
	/*int *pt;
	pt=0xB8000000;
	上面的语句是错误的 0xB8000000是十六进制数，系统将认为是整数，而不是地址，要将十六进制数作为地址使用，必须使用
	强制类型转化*/
	int* pt;
	pt = (int*)0xB8000000;//将十六进制数转为地址，并将地址赋给指针pt
	cout << *pt;/*不能直接访问自定义的地址值，如果直接对自定义地址的指针进行解引用，将会发生错误，没有权限访问自定义的地址*/
	
	
	/*指针是一种变量，其存储的是值的地址，而不是值本身*/
	/*如何找到常规变量的地址：对变量应用地址运算符*/
	/*如：home是一个变量，&home是home的地址*/
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;

	/*还可以用解除引用运算符*，并将其用于指针，可以得到该地址所存储的值，相当于和&是反的。 */
	int updates = 6;
	int* p_updates;
	p_updates = &updates;/*将updates变量所在的地址赋给p_updates*/


	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	/*以上语句证明了int变量updates和指针变量p_updates相当于是一枚硬币的两面，因为p_updates指向updates，所以*p_updates和updates
	等价，可以将值直接赋给*p_updates相当于给updates，因为这两者等价 */
	
	
	
	
	return 0;
}