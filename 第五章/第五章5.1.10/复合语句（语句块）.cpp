#include <iostream>
/*forѭ���У�ѭ����ֻ��һ����䣬���Ҫ��ѭ�����а���������䣬�䷽������*/
int main()
{
    using namespace std;
    cout << "�������������������������ֵĺ���ƽ��ֵ" << endl;
    cout << "�������������\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)/*�û�����������һ��������������ѭ����*/
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }/*ѭ���彫����Ϊһ����䣬��˲����ڻ����ź�ӷֺ�*/
    cout << "����������ֵĺ�Ϊ��" << sum << endl;
    cout << "���ǵ�ƽ��ֵ��" << sum / 5 << ".\n";

    /*����������ж�����һ���µı��������������ִ�и�����������ʱ���ñ����Ŵ���
    ִ���������󣬱��������ͷ�*/
    int x = 20;
    {                       // block starts
        int y = 100;
        cout << x << endl;  // ok
        cout << y << endl;  // ok
    }                       // block ends
    cout << x << endl;      // ok
    //cout << y << endl;      // invalid, won��t compile
    /*ע�⣺�������ⲿ����ı����������ڲ�����Ч�ģ������������ڲ�����ı�����
    �����ⲿ��Ч*/

    /*�����������ͬʱ������һ��������ͬ�ı�����������λ�õ��ڲ���������ķ�Χ֮�ڣ�
    �±��������ؾɱ�����Ȼ��ɱ����ٴοɼ�*/
    int ww = 20;              // original x
    {                        // block starts
        cout << ww << endl;   // use original x
        int ww = 100;         // new x
        cout << ww << endl;   // use new x
    }                        // block ends
    cout << ww << endl;       // use original x
    return 0;
}