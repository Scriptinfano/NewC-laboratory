#include<iostream>
using namespace std;

int main()
{
    /*引用变量是一种C++新增的复合类型。引用是已经定义的变量的别名，例如如果将twain作为clement变量的引用，则可以
    交替使用twain和clement来表示该变量。
    这种别名的作用：用作函数的形参，通过将引用变量用作参数，函数将使用原始数据，而不是副本。
    除指针之外，引用也为函数处理大型结构提供了一种方便途径。
    引用在设计类时也是必不可少的
    */

    //创建引用变量
    /*C++中取址运算符&不仅可以取址，还可以用来声明引用变量：
    int rats;
    int & rodents=rats; //int &的意思是指向int的引用
    上面两个语句，实现了将rodents作为rats的引用变量的作用
    引用变量和被引用变量指向相同的值和内存单元*/
    int rats = 101;
    int& rodents = rats;
    cout << "rats=" << rats << endl;
    cout << "rodents=" << rodents << endl;

    rodents++;//影响一个有两个名字的变量
    cout << "rats=" << rats << endl;
    cout << "rodents=" << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << ", rodents address = " << &rodents << endl;

    int* prats = &rats;
    /*声明指向rats的指针后，rodents和*prats可以和rats互换；&rodents和prats和&rats可以互换*/

    /*声明引用的同时必须初始化，不能像普通指针一样可以先声明再初始化（注意const指针必须在创建时进行初始化）
      从某种意义上说，引用变量和指针常量非常相似：int &rodents=rats;基本上等效于int *const pr=&rats;
      rodents等效于*pr指针常量的指向不能修改但是可以修改它指向的值，引用变量一旦和某变量关联就不能再和其他
      变量关联了，一旦重关联，虽然语法上不会报错，但是会改变引用变量被引用的变量的值*/
    int bunnies = 50;
    rodents = bunnies;  //试图改变rodents的引用
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;/*rats会从原先的101变为bunnies的值50,相当于执行了rats=bunnies*/
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    /*
    int rats = 101;
    int * pt = &rats;
    int & rodents = *pt;
    int bunnies = 50;
    pt = &bunnies;
    将rodents初始化为*pt使得rodents指向rats,接下来改变指针的指向，并不能改变rodents引用的是rats这个结果*/
    return 0;
}