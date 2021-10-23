#include<iostream>
using namespace std;

const int SIZE = 10;

int set_mark(int[], int);//��亯��ԭ��
void display_mark(int[], int);//��ʾ����ԭ��
double average_mark(int[], int);//����ƽ��ֵ����ԭ��

int main()
{
    int size, golf_mark[SIZE];
    size = set_mark(golf_mark, SIZE);/*��亯��������Ч���Ѿ���д�ĳɼ���������size*/
    display_mark(golf_mark, size);/*��ʾ����ֻ��ʾ��������Ч�����ݣ�����Ҫ������Ч�ɼ���size������������Ĵ�С*/
    cout << "���гɼ���ƽ��ֵ=" << average_mark(golf_mark, size);
    
    return 0;
}

int set_mark(int arr[], int size)
{
    int i = 0;
    do
    {
        cout << "�����" << i + 1 << "���߶���ɼ���";
        cin >> arr[i++];/*�൱����ִ��cin>>arr[i]��ִ��i++*/
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
        }
        cout << "��enter����������q�˳�����:";
        if (cin.get() == 'q')
        {
            for (; i < size; i++)
            {
                arr[i] = 0;//ֹͣ����󣬽�ʣ�µ������е�Ԫ��ȫ������Ϊ0
                break;
            }
        }
    } while (i < size);
}
void display_mark(int arr[], int size)
{
    cout << "���з������£�" << endl;
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