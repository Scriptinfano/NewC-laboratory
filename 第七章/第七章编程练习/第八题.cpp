/*在不使用array的情况下完成程序清单7.15所做的工作，编写两个版本
1、使用const char*数组存储表示季度名称的字符串，并使用double数组存储开支
2、使用const char*数组存储表示季度名称的字符，并使用一个结构，该结构只有一个成员--一个用于存储开支的double数组
，这种设计与使用array类的基本设计类似*/
//版本一：
#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "春季","夏季","秋季","冬季" };/*数组中存储的是指向char字符串的常量指针，常量指针
的指向可以更改但是指针指向的值不能修改*/
const double* fill(double array[],int size);//返回一个可更改指向，但不可以修改值的指针
void show(const double p_show[]);
int main()
{
    double spend[4] = { 0 };
    const double* p_show = fill(spend, SEASONS);/*p1是一个可更改指向，不能修改指向的值的指针*/
    show(p_show);

    system("pause");
    return 0;
}
const double* fill(double array[], int size)
{
    double temp = 0.0;
    for (int i = 0; i < size; i++)
    {
        cout << "请输入" << seasons[i] << "的营业额：";
    begin:cin >> temp;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            goto begin;
        }
        array[i] = temp;
    }
    const double* p_show = array;
    return p_show;
}
void show(const double p_show[])
{
    cout << "四季的营业额如下：" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << p_show[i] << endl;
    }
}
