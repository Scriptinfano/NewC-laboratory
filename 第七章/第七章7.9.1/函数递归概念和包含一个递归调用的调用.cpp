#include<iostream>
using namespace std;
void countdown(int n);
int main()
{
    /*�����ݹ�ĸ�������Լ����Ե����Լ�������C���Բ�ͬ���ǣ�main���������Լ������Լ�*/
    /*����ݹ麯�������Լ����򱻵��õĺ���Ҳ�������Լ����⽫����ѭ������˴����б��������ֹ�����������ݣ�ͨ����
    �����ǽ��ݹ麯�����÷���if����У����磬��void���͵ĵݹ麯��recurs()�Ĵ������£�*/
    /*
    void recurs(argumentlist)
    {
       statement1;
       if(test)
       {
          recurs(arguments)
       }
       statements2;
    }
    ��test����Ϊfalseʱ�����������Ͽ���ֻҪif���Ϊtrue��ÿ��recurs()���ö���ִ��һ��statements1��Ȼ���ٵ���
    recurs(),������ִ��statements2����if���Ϊfalseʱ����ǰ���ý�ִ��statements2,���ý����󣬳������Ȩ������
    ��ǰһ���������ĺ������Դ����ơ���ˣ����recurs()��������εݹ飬��statements1���ֽ����������õ�˳��ִ����Σ�Ȼ��
    statements2���ֽ������������෴��˳��ִ�����
    */
    countdown(4);
    return 0;
}
void countdown(int n)
{
    cout << "������" << n << endl;
    cout << "(n��ʮ�����Ƶ�ַ��" << &n << ")" << " " << "(n��ʮ���Ƶ�ַ��" << (int)&n << ")" << endl;
    if (n > 0)
    {
        countdown(n - 1);
        cout << "(n��ʮ�����Ƶ�ַ��" << &n << ")" << " " << "(n��ʮ���Ƶ�ַ��" << (int)&n << ")" << endl;
    }
    cout << n << "kaboom!\n";
}
/*ÿ���ݹ���ö������Լ���һ�ױ�������ˣ�������ﵽ����ε���ʱ������5��������n����������ÿ��ֵ������ͬ*/
/*�ص㣺��ͬ�㼶��nֵ�ĵ�ַ����ͬ��*/