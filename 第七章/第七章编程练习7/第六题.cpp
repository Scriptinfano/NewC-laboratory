#include<iostream>
using namespace std;
int fill_array(double arr[], int size);/*��ʾ�û�����doubleֵ��������Щֵ�洢�������С������鱻�������û������
                                       ����ʱ�����뽫ֹͣ�����������˶��ٸ�����*/
void show_array(double arr[], int size);/*size������ĳ���*/
void reverse_array(double arr[], int size);/*size������ĳ���*/
const int SIZE = 20;//�����������󳤶�
int main()
{
    double array[SIZE];

    int size = fill_array(array, SIZE);
    cout << "��һ�������������������Ϊ" << endl;
    show_array(array, size);

    reverse_array(array, size);//ֱ�ӷ�תȫ������
    cout << "�ڶ��������������������Ϊ" << endl;
    show_array(array, size);

    reverse_array(&array[1], size-2);//�ӵڶ���Ԫ�غ͵����ڶ���Ԫ�ؿ�ʼ��ת����
    cout << "�����θı���������������Ϊ" << endl;
    show_array(array, size);

    return 0;
}
int fill_array(double arr[], int size)
{
    int count = 0;
    double temp;
    cout << "���������֣��м��ÿո��������q�˳�����";
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
    cout << "������������£�" << endl;
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