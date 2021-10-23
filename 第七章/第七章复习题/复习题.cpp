/*
1、使用函数的三个步骤
编写函数原型，描述函数接口；调用函数，传递函数参数；定义函数

2、请创建与下面的描述匹配的函数原型
a、igor()没有参数，没有返回值
   void igor();
b、tofu()接受一个int参数，返回float
   float tofu(int);
c、mpg接受两个double参数，并返回一个float
   double mpg(double,double);
d、summation()将long数组名和数组长度作为参数，并返回一个long值
   long summation(long sa[],int);
e、doctor接受一个字符串参数（不能修改该字符串），返回double值
   double doctor(const char*str);
f、ofcourse()将boss结构作为参数，不返回值
   void plot(boss);
g、plot()将map结构的指针作为参数，返回一个字符串
   char*plot(map*p1); 注意函数不能返回字符串，只能返回字符串指针

3、编写接受三个参数的函数：int数组名，数组长度和一个int值，并将数组的所有元素都设置为该int值
#include<iostream>
using namespace std;
void hanshu(int name,int size,int n);
int main()
{
    int 1[3]={2,3,4};
    hanshu(1,3,4);
    return 0;
}
void hanshu(int name*,int size,int n)
{
    for(int i=0;i<size;i++)
    {
        name[i]=n;
    }
}

4、编写一个接受3个参数的函数，指向数组区间中第一个元素的指针、指向数组区间最后一个元素后面的指针以及一个int值
，并将数组中的每个元素都设置为该int值。
#include<iostream>
using namespace std;
void function(int* begin, int* end, int n);
int main()
{
    int array[3] = { 2,3,4 };
    int size = sizeof(array) / sizeof(array[0]);
    int* begin = &array[0];
    int* end = &array[size - 1];
    int n = 4;
    function(begin, end, n);
    cout << "修改后的数组是：" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
void function(int* begin, int* end, int n)
{
    int* pointer;
    for (pointer = begin; pointer != end; pointer++)
    {
        *pointer = n;
    }
}

5、编写将double数组名和数组长度作为参数，并返回该数组中最大值的函数。该函数不应修改数组的内容
#include<iostream>
using namespace std;
double fun(const double *pointer, int n);
int main()
{
    double array[3] = { 15.4,4.7,56.2 };
    int n = sizeof(array) / sizeof(array[0]);
    double result = fun(&array[0], n);
    cout << "原始数组为：" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
        if (i == n - 1)
        {
            cout << endl;
        }
    }
    cout << "数组中最大的数为" << result;
    return 0;
}

double fun(const double *pointer,int n)
{
    int max_value = pointer[0];
    for (int i = 0; i < n; i++)
    {
        if (max_value < pointer[i])
        {
            max_value = pointer[i];
        }
    }
    return max_value;
}

6、为什么不对类型为基本类型的函数参数使用const限定符
C++语言中的参数传递是以值传递的形式实现的，即函数的实参表示以值的副本的形式传递给函数的形参，因此，在实参的传递
过程中主调函数的实参并不会被修改。但是以指针形式传递或者其他复合数据类型，这可以通过地址的指向间接访问和存取主
调函数中的数据，因此需要使用const关键字对数据进行保护操作

7、C++程序使用哪三种风格的字符串？
字符数组的形式、以双引号标识的字符串常量形式、指向字符串首字符的指针的形式。

8、编写一个函数，原型为int rplace(char*str,char c1,char c2); 该函数将字符串中所有的c1都替换为c2，并返回
替换次数
#include<iostream>
using namespace std;
int replace(char* str, char c1, char c2);
int main()
{
    char str1[] = { 'a','b','c','c','o','c','e','\0' };
    char* str = &str1[0];
    char c1 = 'c';
    char c2 = 'i';
    int number = replace(str, c1,c2);
    cout << "替换之后，新字符串为:" << str1 << endl;

    return 0;
}
int replace(char* str, char c1, char c2)
{
    int counter = 0;
    for (; *str != '\0'; str++)
    {
        if (*str == c1)
        {
            *str = c2;
            counter++;
        }
    }
    return counter;
}

9、表达式*"pizza"的含义是什么？"taco"[2]呢？
双引号标识的是字符串常量，字符串常量使用第一个元素的地址进行表示，C++中通过这个首元素的地址实现了字符串常量的存
储位置的查询，因此通过*运算符，*"pizza"能够直接找到字符'p'。同理，"taco"[2]表示通过字符串中首字符的地址查找到
该字符的第三个元素'c'。

10、C++允许按值传递结构，也允许传递结构的地址。如果glitz是一个结构变量，如何按值传递，如何传递它的地址，这两种
方法的利弊是什么
按值传递的例子：
#include<iostream>
using namespace std;
struct glitz
{
    int n;
    double x;
};
struct result
{
    int al;
};
result function(glitz);
int main()
{
    glitz apple = { 12,53.2 };
    function(apple);
    return 0;
}
result function(glitz apple)
{
    double al = apple.n + apple.x;
    result banana;
    banana.al = al;
    return banana;
}

用指针传递结构的地址
#include<iostream>
using namespace std;
struct glitz
{
    int n;
    double x;
};
struct result
{
    int al;
};
result function(const glitz*p);
int main()
{
    glitz apple = { 12,53.2 };
    function(&apple);
    return 0;
}
result function(const glitz *p)
{
    double al = p->n + p->x;
    result banana;
    banana.al = al;
    return banana;
}
按值传递效率低下，按地址传递可节省时间和内存，但不能保护原始数据，需要使用const

11、函数judge()的返回类型为int,它将这样一个函数的地址作为参数：将const char指针作为参数，并返回一个int值，请
编写函数的原型
int judge(const char*);

12、假设有如下结构声明：
struct applicant {
    char name[30];
    int credit_ratings[3];
};
a、编写一个函数，它将application结构作为参数，并显示该参数指向的结构的内容。
函数原型：void fun1(application);
函数调用：application stru1={{'a','b','c'},{12,15,345}};
         fun1(stru1);
函数定义：
b、编写一个函数，它将application结构的地址作为参数，并显示该参数指向的结构的内容













































































































































































































































*/