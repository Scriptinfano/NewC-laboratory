/*原始的程序清单7.7程序：
#include <iostream>
using namespace std;
const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "输入想要改写为的double数字: ";
        double factor;

        输入错误类型的处理
begin:cin >> factor;
if (cin.fail())
{
    cin.clear();
    cin.sync();
    cin.ignore();
    cout << "输入类型错误，重新输入：";
    goto begin;
}

revalue(factor, properties, size); 重赋值函数调用
show_array(properties, size); 显示函数调用
    }
    cout << "Done.\n";

    system("pause");
    return 0;
}

int fill_array(double ar[], int limit)
{

    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "输入第" << (i + 1) << "个元素的值" << ": ";
        cin >> temp;
        if (cin.fail() || temp < 0) // bad input
        {
            cin.clear();
            cin.sync();
            cin.ignore();
            cout << "输入类型错误，重新输入";
        }
        ar[i] = temp;
    }
    return i;
}


void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "第" << (i + 1) << "个元素的值" << ": $" << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}*/

/*使用指针区间修改后的程序*/
#include <iostream>
using namespace std;
const int Max = 5;
double* const fill_array(double* begin, double* end);//函数返回的指针不能变动指向，可以修改指针指向的值
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);/*r是重赋值因子*/

int main()
{

    double properties[Max];

    double* const size = fill_array(properties, properties + (Max - 1));/*函数返回的指针指向数组最后填充的位置,函数调用后将这个地址赋给指针size*/
    cout << "第一次填充数组后的数组内容显示：" << endl;
    show_array(properties, size);//第一个参数是数组首地址，第二个参数是填充函数最后填充位置的地址

    cout << "输入想要改写为的double数字: ";
    double factor;
    /*输入错误类型的处理*/
begin:cin >> factor;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        cin.ignore();
        cout << "输入类型错误，重新输入：";
        goto begin;
    }
    revalue(factor, properties, size);//重赋值函数调用
    show_array(properties, size);//显示函数调用

    cout << "完成\n";

    system("pause");
    return 0;
}

double* const fill_array(double* begin, double* end)
{
    double temp;
    double* p1 = begin;
    for (int i = 0; p1 != end; p1++, i++)
    {

        cout << "输入第" << (i + 1) << "个元素的值" << ": ";
    begin:cin >> temp;
        if (cin.fail() || temp < 0)
        {
            cin.clear();
            cin.sync();
            cin.ignore();
            cout << "输入类型错误，重新输入";
            goto begin;
        }
        *p1 = temp;
    }

    return p1;
}


void show_array(double* begin, double* end)
{

    for (double* p2 = begin; p2 != end; p2++)
    {
        cout << *p2 << "\t";
    }
}

void revalue(double r, double* begin, double* end)
{
    double* p3 = begin;
    while (p3 != end)
    {
        *p3 = r;
        p3++;
    }
}