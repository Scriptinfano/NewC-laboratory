#include <iostream>
#include <string> // string class
int main()
{
    using namespace std;
    /*for循环需要三个表达式，后面两个表达式可以为空表达式，只有两个分号是必须的，省略
    for循环中的测试表达式时，测试结果一直为true，循环将一直运行*/
    /*for循环与while的区别：1、在for循环中省略了测试条件时，将认为条件为true
                            2、在for循环中，可初始化语句声明局部变量，但在while中
                            不能这么做，这是因为while要在while循环之前声明局部变量。
                            该局部变量将不仅存在于while循环语句块中
                            3、如果循环包括continue语句，情况将不同*/
    /*使用for循环为循环计数，在无法提前预知循环将被执行的次数时，使用while循环*/
    /*设计循环时，应铭记以下几条指导原则：1、指定循环终止的条件
                                          2、在首次测试之前初始化条件
                                          3、在条件被再次测试之前更新条件*/
    /*i = 0;
while (name[i] != ‘\0’); // problem semicolon
{
      cout << name[i] << endl;
      i++;
}
cout << "Done\n";在i++后加分号是不正确的，该分号将结束while循环*/
    return 0;
};