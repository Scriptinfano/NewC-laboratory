/*ʹ��ѭ��������ǰ16���׳ˣ���׳�д��0������׳˱�����Ϊ1*/
/*�ó���ʹ��һ��ѭ�����������׳˵�ֵ������ֵ�洢�������У�Ȼ������һ��ѭ������ʾ���*/
#include <iostream>
const int ArSize = 20; /*����һ��constֵ����ʾ�����е�Ԫ�ظ����ĺô��ǵ����뽫����
                       ��չΪ20���׳�ʱֱ�Ӹ���const�����е�ֵ���ɣ������ڳ���������޸�*/
int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;/*1LL˵�����1��long long���͵�1����������ͨ��1*/
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}