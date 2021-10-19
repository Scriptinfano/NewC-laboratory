#include<iostream>
#include<cmath>
using namespace std;
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
void  rect_to_polar(const rect* pxy, polar* pda);/*ԭ�������������ṹ���ڱ�������
��Ҫ������ָ�봫�ݸ���������һ��ָ��ָ��Ҫת���Ľṹ��Ϊ��ֹ�����޸�ָ����ָ���
���ݣ�ʹ��const����ָ�룬�ڶ���������ָ��洢ת������Ľṹ��ָ�룬�ڱ������У�
�����������½ṹ������ָ���޸�ԭ�ṹ���ݲ��洢���½ṹ��*/
void show_polar(const polar* pda);/*��ʾת�������ĺ���*/

int main()
{
    rect rplace;
    polar pplace;

    cout << "����x�����y���꣺";
    while (cin >> rplace.x >> rplace.y)/*������ȷ���������ͺ�whileѭ���Ż�ִ��*/
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "������һ�����꣨����q�˳�����";
    }
    cout << "���";
    return 0;
}

void show_polar(const polar* pda)
{
    const double red_to_deg = 57.3;

    cout << "����=" << pda->distance;
    cout << "�Ƕ�=" << pda->angle << "��";
}
void rect_to_polar(const rect* pxy, polar* pda)
{
    pda->distance = sqrt(pow(pxy->x, 2) + pow(pxy->y, 2));
    pda->angle = atan2(pxy->y, pxy->x);//atan2���������Ի��ȱ�ʾ��y/x�ķ����У���Χ��-PAI��+PAI
}