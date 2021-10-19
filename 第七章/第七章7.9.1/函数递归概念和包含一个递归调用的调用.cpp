#include<iostream>
using namespace std;
void countdown(int n);
int main()
{
    /*函数递归的概念：函数自己可以调用自己，但与C语言不同的是，main函数不能自己调用自己*/
    /*如果递归函数调用自己，则被调用的函数也将调用自己，这将无限循环，因此代码中必须包含终止调用链的内容，通常的
    方法是将递归函数调用放在if语句中，例如，将void类型的递归函数recurs()的代码如下：*/
    /*
    void recurs(argumentlist)
    {
       statement1;
       if(test)
       {
          recurs(arguments)
       }
       statements2;
    }
    当test最终为false时，调用链将断开。只要if语句为true，每个recurs()调用都会执行一次statements1，然后再调用
    recurs(),而不会执行statements2。当if语句为false时，当前调用将执行statements2,调用结束后，程序控制权将返回
    给前一个调用它的函数，以此类推。因此，如果recurs()进行了五次递归，则statements1部分将按函数调用的顺序执行五次，然后
    statements2部分将按函数调用相反的顺序执行五次
    */
    countdown(4);
    return 0;
}
void countdown(int n)
{
    cout << "向下数" << n << endl;
    cout << "(n的十六进制地址：" << &n << ")" << " " << "(n的十进制地址：" << (int)&n << ")" << endl;
    if (n > 0)
    {
        countdown(n - 1);
        cout << "(n的十六进制地址：" << &n << ")" << " " << "(n的十进制地址：" << (int)&n << ")" << endl;
    }
    cout << n << "kaboom!\n";
}
/*每个递归调用都创建自己的一套变量，因此，当程序达到第五次调用时，将有5个独立的n变量，其中每个值都不相同*/
/*重点：相同层级的n值的地址是相同的*/