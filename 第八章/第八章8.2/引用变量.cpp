#include<iostream>
using namespace std;

int main()
{
    /*���ñ�����һ��C++�����ĸ������͡��������Ѿ�����ı����ı��������������twain��Ϊclement���������ã������
    ����ʹ��twain��clement����ʾ�ñ�����
    ���ֱ��������ã������������βΣ�ͨ�������ñ�������������������ʹ��ԭʼ���ݣ������Ǹ�����
    ��ָ��֮�⣬����ҲΪ����������ͽṹ�ṩ��һ�ַ���;����
    �����������ʱҲ�Ǳز����ٵ�
    */

    //�������ñ���
    /*C++��ȡַ�����&��������ȡַ�������������������ñ�����
    int rats;
    int & rodents=rats; //int &����˼��ָ��int������
    ����������䣬ʵ���˽�rodents��Ϊrats�����ñ���������
    ���ñ����ͱ����ñ���ָ����ͬ��ֵ���ڴ浥Ԫ*/
    int rats = 101;
    int& rodents = rats;
    cout << "rats=" << rats << endl;
    cout << "rodents=" << rodents << endl;

    rodents++;//Ӱ��һ�����������ֵı���
    cout << "rats=" << rats << endl;
    cout << "rodents=" << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << ", rodents address = " << &rodents << endl;

    int* prats = &rats;
    /*����ָ��rats��ָ���rodents��*prats���Ժ�rats������&rodents��prats��&rats���Ի���*/

    /*�������õ�ͬʱ�����ʼ������������ָͨ��һ�������������ٳ�ʼ����ע��constָ������ڴ���ʱ���г�ʼ����
      ��ĳ��������˵�����ñ�����ָ�볣���ǳ����ƣ�int &rodents=rats;�����ϵ�Ч��int *const pr=&rats;
      rodents��Ч��*prָ�볣����ָ�����޸ĵ��ǿ����޸���ָ���ֵ�����ñ���һ����ĳ���������Ͳ����ٺ�����
      ���������ˣ�һ���ع�������Ȼ�﷨�ϲ��ᱨ�����ǻ�ı����ñ��������õı�����ֵ*/
    int bunnies = 50;
    rodents = bunnies;  //��ͼ�ı�rodents������
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;/*rats���ԭ�ȵ�101��Ϊbunnies��ֵ50,�൱��ִ����rats=bunnies*/
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    /*
    int rats = 101;
    int * pt = &rats;
    int & rodents = *pt;
    int bunnies = 50;
    pt = &bunnies;
    ��rodents��ʼ��Ϊ*ptʹ��rodentsָ��rats,�������ı�ָ���ָ�򣬲����ܸı�rodents���õ���rats������*/
    return 0;
}