#include <iostream>
double cube(double a);//按值传递
double refcube(double& ra);//按引用传递
double refcube2(const double& ra);
using namespace std;
int main()
{
    double x = 3.0;

    cout << "使用按值传递的结果：";
    cout << cube(x) << " = cube of " << x << endl;
    cout << "使用按引用传递的结果：";
    cout << refcube(x) << " = cube of " << x << endl;
    cout << "使用const保护的按引用传递的结果：";
    cout << refcube2(x) << " = cube of " << x << endl;

    double side = 3.0;
    double* pd = &side;
    double& rd = side;
    long edge = 5L;
    double lens[4] = { 2.0, 5.0, 10.0, 12.0 };
    double c1 = refcube(side);        // ra is side
    double c2 = refcube(lens[2]);     // ra is lens[2]
    double c3 = refcube(rd);          // ra is rd is side
    //double c4 = refcube(*pd);         // ra is *pd is side
    //double c5 = refcube(edge);        // edge的参数类型不正确
    //double c6 = refcube(7.0);         // 7.0类型正确，但是没有名称，编译器将创建临时变量
    //double c7 = refcube(side + 10.0); // side + 7.0类型正确，但是没有名称，编译器将创建临时变量，但有的编译器会报错
    //在函数中的临时变量只在函数调用期间存在

    /*注意：如果函数调用的参数不是左值或与相应的const引用参数的类型不匹配，则编译器将创建类型正确的匿名变量，
    将函数调用的参数的值传递给该匿名变量，并让参数来引用改变量*/

    /*尽可能使用const的原因：
    1、使用const避免无意中修改数据的编程错误
    2、使函数能处理const和非const实参否则将只能接受非const数据
    3、使函数能够正确生成并使用临时变量*/
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double& ra)
{
    ra *= ra * ra;
    return ra;
}

double refcube2(const double& ra)
{
    return ra * ra * ra;
}

/*如果想对参数进行修改，同时想要使用引用，则应使用常量引用，在这个例子中，应在函数原型和函数头中适用const：
double refcube(const double &ra);
当编译器发现代码修改了ra的值时会报错。当数据比较大，可以使用引用参数。
按值传递的函数参数可使用多种类型的实参，例如：
double z = cube(x + 2.0);  // evaluate x + 2.0, pass value
z = cube(8.0);             // pass the value 8.0
int k = 10;
z = cube(k);               // convert value of k to double, pass value
double yo[3] = { 2.2, 3.3, 4.4};
z = cube (yo[2]);          // pass the value 4.4
而接受引用参数的函数中，传递引用参数的限制更严格，参数必须是变量，不能是表达式，例如：
double z = refcube(x + 3.0); // should not compile
首先，x+3.0不是double型的变量，程序将创建一个临时的无名变量，并将其初始化为表达式x+3.0的值，然后ra成为该临时变量的
引用
*/

/*临时变量，引用参数和const*/
/*如果实参和引用参数不匹配，C++将生成临时变量。当且仅当参数为const引用时，C++才允许这样做。
在引用参数是const的情况下，编译器在以下两种情况下生成临时变量
1、实参的类型正确，但不是左值
2、实参的类型不正确，但可以转换为正确的类型*/

/*什么是左值？
左值参数：可被引用的数据对象，例如：变量、数组元素、结构成员、引用、解除引用的指针
非左值参数：字面常量（除了用引号括起的字符串，由引号括起的字符串常量由地址表示）、包含多项的
表达式。目前，常规变量和const常量都属于左值，只不过常规变量是可以修改的左值，而const常量
是不能修改的左值*/

/*尽可能使用const的原因：
1、使用const避免无意中修改数据的编程错误
2、使用const使函数能处理const和非const实参，否则只能接受非const数据
3、使用const引用使函数能正确生成并使用临时变量*/

/*在下面这个A程序中，函数原型中使用了const修饰的引用，但在函数参数传递时
使用了表达式传递，且类型是正确的（都是double）：
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;
    cout << "使用const保护的被引用传递的结果：\n";
    cout << refcube(x) << "= cube of " << x << endl;//cube是立方的意思
    double a = 3.0;
    cout << "在使用引用的情况下，在函数中传递表达式\n";
    cout << refcube(x + a) << "= cube of " << x + a << endl;
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

在下面这个B程序中函数原型中使用了const修饰的引用，但在函数参数传递时
使用了表达式传递，且其中有一个类型是错误的（函数原型要求double,但在传递
参数时，其中有一个是int值）
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    int q = 2;
    cout << "在使用引用的情况下，在函数中传递表达式（其中有一个类型不正确）\n";
    cout << refcube(q + x) << " =cube of " << x + q<<endl;
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

在下面这个C程序中函数原型中使用了const修饰的引用，但在函数参数传递时
使用了表达式传递，且两个类型是错误的（函数原型要求double,但在传递
参数时，表达式中两个加数都是int值）
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    cout << "在使用引用的情况下，在函数中传递表达式（两个类型都不正确）\n";
    cout << refcube(q + q) << " =cube of " << q + q << endl;

    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

在下面这个D程序中函数原型中使用了const修饰的引用，但在函数参数传递时
使用了表达式传递，两个类型是正确的，但其中一个使用了数字，由数字和字母组成表达式
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;

    cout << "在使用引用的情况下，在函数中传递带数字的表达式（两个类型都正确）\n";
    cout << refcube(3.0 + q) << " =cube of " << 3 + q << endl;
\
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}


以上四个小程序合在一起的完整程序：
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;
    cout << "使用const保护的被引用传递的结果：\n";
    cout << refcube(x) << "= cube of " << x << endl;//cube是立方的意思

    double a = 3.0;
    cout << "在使用引用的情况下，在函数中传递表达式(类型都正确)\n";
    cout << refcube(x + a) << "= cube of " << x + a << endl;

    int q = 2;
    cout << "在使用引用的情况下，在函数中传递表达式（其中有一个类型不正确）\n";
    cout << refcube(q + x) << " =cube of " << x + q<<endl;


    cout << "在使用引用的情况下，在函数中传递表达式（两个类型都不正确）\n";
    cout << refcube(q + q) << " =cube of " << q + q << endl;

    cout << "在使用引用的情况下，在函数中传递带数字的表达式（两个类型都正确）\n";
    cout << refcube(3.0 + q) << " =cube of " << 3 + q << endl;
\
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

以上程序说明表达式参数的传递只能在函数原型中使用了const引用的情况下实现*/

/*函数原型在使用引用类形参的前提下，如果实参的类型和函数原型中形参的类型不匹配
例如如下程序：
#include<stdio.h>
void swap(int &a,int &b);
int main()
{
    int a=1,b=2;
    swap(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
void swap(int & a, int & b) // use references
{
    int temp;

    temp = a; // use a, b for values of variables
    a = b;
    b = temp;
}
该程序将两个int型参数传递给了原型中应为两个double值的函数，编译器将创建两个临时变量
并将他们分别初始化为3和5，然后交换临时变量的内容，而a和b保持不变。创建临时变量会阻止
意图是修改作为参数传递变量的接受引用参数的函数实现其功能
*/

/*C11标准新增了另一种引用--右值引用，这种引用可指向右值，是使用&&声明的*/