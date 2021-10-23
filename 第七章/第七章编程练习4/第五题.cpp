#include<iostream>
using namespace std;
long long factorial(int);
int main()
{
    int n;
    cout << "输入要计算阶乘的数字：";
    char ch;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
        }
        else if (n < 0)
        {
            continue;
        }
        else
        {
            cout << n << "!=" << factorial(n);
        }
        cout << "继续计算请按y，退出计算请按n";
    begin:if (cin.get() == 'y')
    {
        continue;
    }
    else if (cin.get() == 'n')
    {
        break;
    }
    else
    {
        cout << "请重新输入";
        goto begin;
    }


    }


    return 0;
}
long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}