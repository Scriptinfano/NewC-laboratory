#include<iostream>
using namespace std;
double fun1(double a, double b);
int main()
{
    double a = 0.0;
    double b = 0.0;
    double array[200] = {0.0};
    int i = 0;
    do
    {
        cout << "������������������һ��Ϊ0ʱ��ֹ����:";
        cin >> a >> b;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\n');
            continue;
        }
        array[i] = fun1(a, b);
        i++;
    } while (a != 0 && b != 0);
    int size = sizeof(array) / sizeof(array[0]);
    cout << "���д洢�ĵ���ƽ����Ϊ��" << endl;
    for (int j = 0; j < size; j++)
    {
        if (array[j] == 0)
            break;
        cout << array[j] << endl;
    }

    return 0;
}
double fun1(double a, double b)
{
    double average = (2.0 * a * b) / (a + b);
    return average;
}

/*��׼�𰸣�
#include<iostream>
using namespace std;
double harmonic(double,double);
int main()
{
 double input1,input2;
 cout << "������������������һ��Ϊ0ʱ��ֹ����:";
 cin>>input1>>input2;
 while(input1!=0||input2!=0)
 {
 cout<<"�������ֱ�Ϊ"<<input1<<"��"<<input2;
 cout<<"����ƽ����="<<harmonic(input1,input2)<<endl;
 cout<<"�ٴ�����������";
 cin>>input1>>input2;
 }
 return 0;
}
double harmonic(double input1, double input2)
{
    double average = (2.0 * input1 * input2) / (input1 + input2);
    return average;
}
*/