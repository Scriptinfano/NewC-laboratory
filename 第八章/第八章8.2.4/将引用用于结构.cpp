//将引用用于结构
/*C++引入引用的目的就是为了结构和类，引用一般不用于基本数据类型。
使用结构引用参数的方式与使用基本变量引用相同，在声明结构参数时使用&*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};
void set_pc(free_throws& ft);//函数将指向该结构的引用作为参数
void display(const free_throws& ft); //不希望函数修改传入的结构时使用const
free_throws& accumulate(free_throws& target, const free_throws& source);//该函数返回一个指向结构的引用。由于只修改第一个参数中结构的值，所以第一个参数没有加const修饰
int main()
{
    /*初始化多个结构对象，如果初始化的成员比指定的成员变量少，余下的成员被设置为0*/
    free_throws one = { "Ifelsa Branch", 13, 14 };
    free_throws two = { "Andor Knott", 10, 16 };
    free_throws three = { "Minnie Max", 7, 9 };
    free_throws four = { "Whily Looper", 5, 9 };
    free_throws five = { "Long Long", 6, 14 };
    free_throws team = { "Throwgoods", 0, 0 };

    free_throws dup;

    set_pc(one);//将结构中的成员变量percent算出来，然后将结果赋给成员变量percent
    display(one);//展示有了percent之后的结构one
    accumulate(team, one);//将temp和one中的两项成员变量进行加和操作并将结果赋给temp结构，并计算新结构的percent成员
    display(team);//展示变化之后的temp结构

    display(accumulate(team, two));
    /*35行代码详解：将结构对象team作为第一个参数传递给了accumulate()。在函数accumulate()
    中引用target指向team，函数accumulate()修改team，再返回指向它的引用*/
    accumulate(accumulate(team, three), four);
    /*38行代码详解：第一个参数是accumulate()函数的返回值，返回的是修改后的team结构
    所以第一个参数实际上还是team，外部函数的第二个参数是结构对象four，将修改后的team结构
    和four结构再相加，最后把结果再赋给team结构，最后外部函数返回修改了两次的
    team结构*/
    display(team);//显示修改两次的team结构

    dup = accumulate(team, five);
    cout << "Displaying team:\n";
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);//本行代码的执行结果和47行代码的执行结果相同
    set_pc(four);//将结构对象four中的percent成员变量算出来并初始化

    accumulate(dup, five) = four;/*左值返回的是修改后的结构对象dup（是可以被赋值的）右值是结构对象four，
    执行结果是将four的数据复制粘贴到结构对象dup中*/
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}
void display(const free_throws& ft)//显示数组中存放的内容
{

    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}
void set_pc(free_throws& ft)//得到made占attempts的百分比
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws& accumulate(free_throws& target, const free_throws& source)
{
    /*分别对传入该函数的两个结构中的数据made和attempts进行加和操作，并将得到的结果赋给传进来的第一个结构*/
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);//得到加和结构中made占attempts的百分比，并将得到的结果赋给加和结构中的成员变量percent
    return target;//返回的是引用，意味着返回的是最初传递给accumulate()的team对象
}

/*检测结构中的成员变量percent是否发生改变，从而检测利用结构引用能否改变结构中的值的实验程序：
#include <iostream>
using namespace std;
double refcube(const double &ra);
struct test
{
    int first;
    int second;
    float percent;
};
void set_percent(test &ft);
void display(const test &ft);
int main()
{
    test test1 = {2, 3};
    set_percent(test1);
    cout << "调用set_percent()函数之后的结构，检测结构中的成员变量percent是否发生改变，从而检测利用结构引用能否改变结构中的值：" << endl;
    display(test1);
    cout << endl;
    cout << "事实证明，传递引用结构可以修改实际结构的值" << endl;

    return 0;
}
void set_percent(test &ft)
{
    if (ft.second != 0)
        ft.percent = 100.0f * float(ft.first) / float(ft.second);
    else
        ft.percent = 0;
}
void display(const test &ft)
{
    cout << "first: " << ft.first <<endl;
    cout << " second: " << ft.second <<endl;
    cout << "percent" << ft.percent << endl;
}
按引用传递参数直接修改原数据
*/

/*为什么函数要返回引用，函数返回引用的意义是什么：
传统返回机制和按值传递函数参数类似，计算关键字return后面的表达式，并将结果返回给调用函数
从概念上说，这个值被复制到一个临时位置，而调用程序将使用这个值
double m=sqrt(16.0);
cout<<sqrt(25.0);
第一条语句中，值4.0被复制到一个临时位置，然后被复制到m。第二条语句中，值5.0被复制到一个临时
位置，然后被传递给cout。

dup=accumulate(team,five);
如果accumulate返回一个结构，而不是指向结构的引用，将把整个结构复制到一个临时位置，
再将这个拷贝复制给dup，但在返回值为引用时，将直接把team复制到dup，效率更高

返回引用的函数实际上是被引用的变量的别名*/

/*返回引用时需要注意的问题
最重要的一点是应避免返回函数终止时不再存在的内存单元引用
下面的代码应避免编写
const free_throws & clone2(free_throws & ft)
{
    free_throws newguy;//在函数内部声明了一个结构对象，注意这个结构对象的作用域被限制在了本函数之内，也就是说本函数结束后，该结构对象将不存在
    newguy = ft;//将指向某结构的引用ft中的数据复制到newguy中
    return newguy;//返回一个指向临时变量的引用，但是函数运行完毕后，临时变量将不复存在，所以是错误的
}
解决方案一：为避免返回函数终止时不再存在的内存单元，应采用返回一个作为参数传递给函数的引用
作为参数的引用将指向调用函数使用的数据，因此返回的引用也将指向这些数据，比如上面的
accmulate函数
解决方案二：用new来分配新的存储空间
const free_throws & clone(free_throws & ft)
{
    free_throws *pt;//声明一个指向free_throws型结构的指针
    *pt=ft;//对指针解引用就是结构本身，然后将引用ft所指向的结构中的数据复制到新结构中
    return *pt;//返回结构的引用
}
对于上述函数定义，可以这样使用这个clone()函数
free_throws & jolly=clone(three);//函数既然返回的是引用，也应该用另一个类型相同的引用接受函数的返回值
此时，jolly成为新结构的引用，在不需要new分配的内存时，应使用delete来释放内存，调用clone()隐藏了
对new的调用，使得容易忘记使用delete来释放内存*/

/*为何将const用于引用返回类型
accmulate(dup,five)=four;
    首先将five的数据添加到dup中，再使用four的内容覆盖dup的内容。为什么左值可以被修改，
是因为函数返回的是指向dup的引用，它标识了一个内存块。常规函数的返回类型是右值（无法通过地址访问的值）
其他右值包括字面值（如10.0）和表达式（x+y）。
    为什么常规函数的返回值是右值，因为这种返回值位于临时内存单元中，return的原理就是先计算后面表达式的值
然后将值放在临时内存单元中，然后将临时内存单元中的数据作为右值赋给左值，一旦运行到下一条语句时，临时内存
单元将不存在。
    如果要使用引用的返回值，但不允许执行给函数返回值再赋值的操作（accumulate(dup,five) = four;），
可以给函数的返回值加const修饰：const free_throws & accumulate(free_throws & target, const free_throws & source);
这样做之后，给函数返回值赋值的语句就是非法的。但是函数的返回值仍然可以作为参数传递给其他函数
当display的形参也是const free_throws &型时，display(accumulate(team, two)这条语句就是合法的
下面这条语句accumulate(accumulate(team, three), four);第一个参数返回的是const free_throws &型的引用，但是外层函数
accumulate的第一个形参不是const而是free_throws&型的引用，参数类型不匹配是不合法的，这条语句的目的是把team,three,four三个
结构中的数据全部相加然后一起再赋给team结构，得到一个新的team结构，正确的做法是：
accumulate(team,three);
accumulate(team,four);//此时第一个参数team已经是经过和three进行加和操作之后的新结构了，这个新结构再和four结构相加再实现对team结构的更新，实现了三个结构相加并将结果赋给第一个结构的目的
*/