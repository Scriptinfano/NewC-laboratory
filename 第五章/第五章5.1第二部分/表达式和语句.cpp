/*for语句的控制部分使用三个表达式，任何值或任何有效的值和运算符的组合都是表达式*/
#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);/*cout.setf(ios_base::boolalpha)函数使得cout在显示
                                   bool值时不再默认的将其转换为1和0而是直接显示true和
                                   false*/
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout.setf(ios_base::internal);
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    /*for结构的控制部分的其他语法：
    for(i=0;i<5;i++)
    for(for-init-statement condition;expression)此处只有一个分号，for-init-statement
    被视为一条语句，而语句有自己的分号，它既可以是表达式语句，也可以是声明，这种句法
    规则用语句替换了后面跟分号的表达式。*/
    /*for (int i = 0; i < 6; i++)
        cout << "C++知道循环";
    cout << i << endl;上述证明了for-init-statement这种变量只存在于for语句中
    也就是说，当程序离开循环后，这种变量将消失*/
    return 0;
}