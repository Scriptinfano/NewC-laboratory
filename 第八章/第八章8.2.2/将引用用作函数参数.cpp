#include<iostream>
using namespace std;
void swapr(int& a, int& b); //��������Ϊ���������ĺ���ԭ��
void swapp(int* p, int* q); //��ָ����Ϊ���������ĺ���ԭ��
void swapv(int a, int b); //��ֵ���ݵĺ���ԭ��
int main()
{
    /*���ñ�������������ʱ��ʹ�ú����еı�������Ϊ���ó����еı����ı��������ִ��ݲ����ķ�������Ϊ�����ô���*/
    /*�����ô����������ú����ܹ�ֱ�ӷ��ʵ��ú����еı����������ǰ�ֵ����ʱ�´�����������ı��βε���������
    �ı�ʵ�ε�ֵ����C��������Ҫ�ı�ʵ�ε�ֵʱ��ֻ�ܴ���ָ��*/

    //����ʾ������������������ֵ ��ʹ�����ú�ʹ��ָ����бȽϣ��������������޸ĵ��ó����еı�����ֵ�����԰�ֵ���ݲ�������
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "ʹ�ò���Ϊ���ñ����ĺ�����������:\n";
    swapr(wallet1, wallet2);/*���������ò�������ʼ��Ϊ�������ô��ݵ�ʵ�Σ��˴��Ѿ����βηֱ��ʼ��wallet1��wallet2��*/
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "ʹ�ò���Ϊָ��ĺ�����������:\n";
    swapp(&wallet1, &wallet2);// pass addresses of variables
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "ʹ�ð�ֵ���ݵĺ�����������:\n";
    swapv(wallet1, wallet2);  // pass values of variables
    cout << "wallet1 = $" << wallet1 << "  ";
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int& a, int& b)  // use references
{
    int temp;

    temp = a;                 // use a, b for values of variables
    a = b;
    b = temp;
}
void swapp(int* p, int* q) // use pointers
{
    int temp;

    temp = *p;               // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)     // try using values
{
    int temp;

    temp = a;                // use a, b for values of variables
    a = b;
    b = temp;
}
/*��˵�������ú�ָ�붼�����޸�ԭʼ���ݣ�����ֵ���ݲ�����*/
