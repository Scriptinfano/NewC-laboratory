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
        cout << "输入两个数（当其中一个为0时终止程序）:";
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
    cout << "所有存储的调和平均数为：" << endl;
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

/*标准答案：
#include<iostream>
using namespace std;
double harmonic(double,double);
int main()
{
 double input1,input2;
 cout << "输入两个数（当其中一个为0时终止程序）:";
 cin>>input1>>input2;
 while(input1!=0||input2!=0)
 {
 cout<<"两个数分别为"<<input1<<"和"<<input2;
 cout<<"调和平均数="<<harmonic(input1,input2)<<endl;
 cout<<"再次输入两个数";
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