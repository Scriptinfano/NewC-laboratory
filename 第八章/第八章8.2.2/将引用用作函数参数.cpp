#include<iostream>
using namespace std;
void swapr(int& a, int& b); //将引用作为函数参数的函数原型
void swapp(int* p, int* q); //将指针作为函数参数的函数原型
void swapv(int a, int b); //按值传递的函数原型
int main()
{
    /*引用被用作函数参数时，使得函数中的变量名称为调用程序中的变量的别名，这种传递参数的方法被称为按引用传递*/
    /*按引用传递允许被调用函数能够直接访问调用函数中的变量，而不是按值传递时会拷贝副本那样改变形参的量并不会
    改变实参的值。而C语言中想要改变实参的值时，只能传递指针*/

    //程序示例：交换两个变量的值 对使用引用和使用指针进行比较，交换函数必须修改调用程序中的变量的值，所以按值传递不起作用
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "使用参数为引用变量的函数交换数据:\n";
    swapr(wallet1, wallet2);/*函数的引用参数被初始化为函数调用传递的实参，此处已经将形参分别初始化wallet1和wallet2了*/
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "使用参数为指针的函数交换数据:\n";
    swapp(&wallet1, &wallet2);// pass addresses of variables
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "使用按值传递的函数交换数据:\n";
    swapv(wallet1, wallet2);  // pass values of variables
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int& a, int& b)  // use references
{
    int temp;

    temp = a;                 // use a, b for values of variables
    a = b;
    b = temp;
}
void swapp(int* p, int* q) // use pointers
{
    int temp;

    temp = *p;               // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)     // try using values
{
    int temp;

    temp = a;                // use a, b for values of variables
    a = b;
    b = temp;
}
/*这说明了引用和指针都可以修改原始数据，而按值传递不可以*/
