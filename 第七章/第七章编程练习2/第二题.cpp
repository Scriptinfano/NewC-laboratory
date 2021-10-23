#include<iostream>
using namespace std;

const int SIZE = 10;

int set_mark(int[], int);//填充函数原型
void display_mark(int[], int);//显示函数原型
double average_mark(int[], int);//计算平均值函数原型

int main()
{
    int size, golf_mark[SIZE];
    size = set_mark(golf_mark, SIZE);/*填充函数返回有效的已经填写的成绩数并赋给size*/
    display_mark(golf_mark, size);/*显示函数只显示数组中有效的数据，所以要传递有效成绩数size，而不是数组的大小*/
    cout << "所有成绩的平均值=" << average_mark(golf_mark, size);
    
    return 0;
}

int set_mark(int arr[], int size)
{
    int i = 0;
    do
    {
        cout << "输入第" << i + 1 << "个高尔夫成绩：";
        cin >> arr[i++];/*相当于先执行cin>>arr[i]后执行i++*/
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
        }
        cout << "按enter键继续，按q退出输入:";
        if (cin.get() == 'q')
        {
            for (; i < size; i++)
            {
                arr[i] = 0;//停止输入后，将剩下的数组中的元素全部设置为0
                break;
            }
        }
    } while (i < size);
}
void display_mark(int arr[], int size)
{
    cout << "所有分数如下：" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
double average_mark(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return 1.0 * sum / size;
}