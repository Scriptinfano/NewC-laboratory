#include<iostream>
using namespace std;
long long factorial(int);
int main()
{
    int n;
    cout << "����Ҫ����׳˵����֣�";
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
        cout << "���������밴y���˳������밴n";
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
        cout << "����������";
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