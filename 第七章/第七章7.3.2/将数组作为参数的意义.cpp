/*�ú����������
int fill_array(double ar[], int limit)//��һ�����������������ڶ��������Ǻ������ص�ʵ�ʶ�ȡ��Ԫ����
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
            cin.clear();//���ϵͳ���������Ͳ�ƥ��ʱ���õĴ���λ
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) //���븺��ʱ��������
            break;
        ar[i] = temp;
    }
    return i;
}*/


/*2����ʾ�������const��������
������ʾ�������ݵĺ�������������������Ԫ����Ŀ���ݸ�������Ȼ��ú���ʹ��ѭ������ʾÿ��Ԫ��
Ҫע������⣺ȷ����ʾ�������޸�ԭʼ���������
Ϊ��ֹ����������޸���������ݣ�Ӧʹ��Const�������飺
�������β�ʱ��void show_array(const double arr[],int n); ������˵��ָ��arrָ����ǳ������ݣ��޷�ʹ��arr
�޸����ݣ��ⲻ��Ϊ��show_array�е������ǳ�����ֻ�ǲ���ͨ��ָ���޸������е�ֵ��
������������ʹ�ú�������ʾ�������ݵĴ��루ʹ����const�������飩��
void show_array(const double arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<"property #"<<(i+1)<<":$";
        cout<<arr[i]<<endl;
    }
}

3���޸�����
void revalue(double r, double ar[], int n)
{
     for (int i = 0; i < n; i++){
           ar[i] *= r;
}
}*/

/*�����Ĵ��룺*/
#include <iostream>
using namespace std;

const int Max = 5;/*��������Ԫ����������ָ��Ϊconst��������ֹ��������ʱ�޸������ֵ*/

int fill_array(double ar[], int limit);/*������麯��*/
void show_array(const double ar[], int n); /*��ʾ���麯����const double ar[]˵�������޸������е�ֵ*/
void revalue(double r, double ar[], int n);/*�޸����麯��������r���޸ĺ��ֵ��ԭֵ�ı�ֵ��n������Ԫ�ظ���*/

int main()
{
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "�����ظ�ֵ���ӣ�ԭֵ�����ظ�ֵ���ӵ����޸ĺ��ֵ��: ";
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
            break;/*����ִ��֮��Ĵ��룬����ѭ��֮�⣬�����н�������������Ԫ�صĲ���*/
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