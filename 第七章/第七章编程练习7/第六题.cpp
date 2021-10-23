#include<iostream>
using namespace std;
int fill_array(double arr[], int size);/*提示用户输入double值，并将这些值存储到数组中。当数组被填满或用户输入非
                                       数字时，输入将停止，并返回输了多少个数字*/
void show_array(double arr[], int size);/*size是数组的长度*/
void reverse_array(double arr[], int size);/*size是数组的长度*/
const int SIZE = 20;//定义数组的最大长度
int main()
{
    double array[SIZE];

    int size = fill_array(array, SIZE);
    cout << "第一次填充数组后，数组的内容为" << endl;
    show_array(array, size);

    reverse_array(array, size);//直接反转全部数组
    cout << "第二次填充数组后，数组的内容为" << endl;
    show_array(array, size);

    reverse_array(&array[1], size-2);//从第二个元素和倒数第二个元素开始反转数组
    cout << "第三次改变数组后，数组的内容为" << endl;
    show_array(array, size);

    return 0;
}
int fill_array(double arr[], int size)
{
    int count = 0;
    double temp;
    cout << "输入多个数字，中间用空格隔开，按q退出输入";
    begin:cin >> temp;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        cin.ignore(1024, '\0');
        goto begin;
    }
    
    while (count < size)
    {
        if (cin.get() == 'q')
        {
            return count;
        }
        else if(typeid(temp)==typeid(double)) 
        {
            arr[count++] = temp;
            cin >> temp;
        }
        else if (typeid(temp) != typeid(double))
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            goto begin;
        }
    }
    return count;
}
void show_array(double arr[], int size)
{
    cout << "数组的数据如下：" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void reverse_array(double arr[], int size)
{
    double temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}