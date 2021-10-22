#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    //关键字typedef可创建类型别名
    //typedef的语法：typedef 要转换的类型名 转换成的新类型名
    //例：typedef double real;  使real成为double的别名

    /*数组名参数被C++视为第一个元素的地址，从技术上讲，这仍然是按值传递，因为指针是原始地址的拷贝，但函数将使用指针
    来访问原始数组的内容*/

    /*
    当且仅当声明函数的形参时，下面两个声明才是等价的：
    typename arr[];
    typename *arr;
    这两个声明都表示，arr是指向typename的指针，但在定义函数时，可以像使用数组名那样使用arr访问元素：arr[i]。

    在传递指针时，可以将形参声明为const指针保护原始数据完整性。

    传递数据地址时，不会传输有关数组长度的信息，通常将数组长度作为独立参数传递

    还可传递两个指针，一个指针指向数组开头，另一个指向数组末尾，以确定一个范围
    */
    string s1 = "apple";
    int size = s1.size();/*string对象有一个成员函数size()以计算string对象的产度，可以直接使用成员访问符访问成员函数*/
    cout << size;

    /*C++处理结构的方式与基本类型完全相同，可以按值传递结构，并将其作为函数返回类型，如果结构非常大，则应该传递
    结构的地址，即使用指针*/


    return 0;
}
