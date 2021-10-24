#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "春季","夏季","秋季","冬季" };
void fill(double arr[],int size);
void show(const double arr[],int size);
int main()
{
    double spend[4] = { 0 };
    fill(spend,SEASONS);
    show(spend, SEASONS);

    system("pause");
    return 0;
}
void fill(double arr[],int size)
{
    double temp;
    for (int i = 0; i < SEASONS; i++)
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
        arr[i] = temp;
    }
    
}
void show(const double arr[],int size)
{
    double total = 0.0;
    cout << "四季的营业额如下：" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << arr[i] << endl;
    }
}