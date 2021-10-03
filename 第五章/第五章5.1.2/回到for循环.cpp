/*使用循环来计算前16个阶乘，零阶乘写作0！，零阶乘被定义为1*/
/*该程序使用一个循环计算连续阶乘的值，并将值存储在数组中，然后用另一个循环来显示结果*/
#include <iostream>
const int ArSize = 20; /*定义一个const值来表示数组中的元素个数的好处是当你想将程序
                       扩展为20个阶乘时直接更改const声明中的值即可，无需在程序中逐个修改*/
int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;/*1LL说明这个1是long long类型的1，它不是普通的1*/
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}