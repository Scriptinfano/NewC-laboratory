#include<iostream>
#include<string>
using namespace std;

void display(const string sa[], int n);//第一个参数是指向string数组的常量指针
int main()
{
    const int size = 5;//全局常量
    /*string对象虽然在用途上和C风格字符串相同，但是C风格字符串实际上是数组，string与数组相比来说string对象与结
    构更相似。可以将一个结构赋给另一个结构，而数组不行。需要多个字符串时，最优选择是创建一个string数组而不是创建
    一个二维的char数组。*/
    //程序示例：声明一个string对象数组，并将该数组传递给一个函数以显示内容
    string list[size];
    cout << "输入你最喜欢的" << size << "句话：\n";
    for (int i = 0; i < size; i++)
    {
        cout << "第" << i + 1 << "句话:";
        getline(cin, list[i]);
    }
    cout << "你输入的五句话分别是：\n";
    display(list, size);
    return 0;
}
void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "第" << i + 1 << "句话：" << sa[i];
    }
}
