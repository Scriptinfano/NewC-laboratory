/*用函数填充数组
int fill_array(double ar[], int limit)//第一个参数是数组名，第二个参数是函数返回的实际读取的元素数
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();//清除系统在输入类型不匹配时设置的错误位
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) //输入负数时结束输入
            break;
        ar[i] = temp;
    }
    return i;
}*/


/*2、显示数组和用const保护数组
创建显示数组内容的函数：将数组名和填充的元素数目传递给函数，然后该函数使用循环来显示每个元素
要注意的问题：确保显示函数不修改原始数组的内容
为防止函数无意间修改数组的内容，应使用Const保护数组：
在声明形参时：void show_array(const double arr[],int n); 该声明说明指针arr指向的是常量数据，无法使用arr
修改数据，这不以为着show_array中的数据是常量，只是不能通过指针修改数组中的值。
下面是完整的使用函数来显示数组内容的代码（使用了const保护数组）：
void show_array(const double arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<"property #"<<(i+1)<<":$";
        cout<<arr[i]<<endl;
    }
}

3、修改数组
void revalue(double r, double ar[], int n)
{
     for (int i = 0; i < n; i++){
           ar[i] *= r;
}
}*/

/*完整的代码：*/
#include <iostream>
using namespace std;

const int Max = 5;/*数组的最大元素数，将其指定为const常量，防止函数调用时修改数组的值*/

int fill_array(double ar[], int limit);/*填充数组函数*/
void show_array(const double ar[], int n); /*显示数组函数，const double ar[]说明不能修改数组中的值*/
void revalue(double r, double ar[], int n);/*修改数组函数，参数r是修改后的值和原值的比值，n是数组元素个数*/

int main()
{
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "输入重赋值因子（原值乘以重赋值因子等于修改后的值）: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal to terminate
            break;/*不再执行之后的代码，跳到循环之外，不进行将负数赋给数组元素的操作*/
        ar[i] = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}