#include<iostream>
using namespace std;
double calculate(double x, double y, double (*p)(double, double));
double subtract(double x, double y);
double add(double a, double b);

int main()
{
    cout << "��Ҫ���뼸������:";
    int couple;
begin:cin >> couple;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        cin.ignore(1024, '\0');
        cout << "�������Ͳ�ƥ�䣬��������";
        goto begin;
    }
    double a = 0; double b = 0; double temp = 0;
    for (int i = 0; i < couple; i++)
    {
    begin2:cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            cout << "�������Ͳ�ƥ�䣬��������";
            goto begin2;
        }
    begin3:cin >> b;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            cout << "�������Ͳ�ƥ�䣬��������";
            goto begin3;
        }
        temp = calculate(a, b, add);
        cout << temp;
    }

    return 0;
}
double calculate(double x, double y, double (*p)(double, double))
{
    double temp = (*p)(x, y);
    return temp;
}
double add(double a, double b)
{
    return a + b;
}
double subtract(double x, double y)
{
    return x - y;
}