/*�ڲ�ʹ��array���������ɳ����嵥7.15�����Ĺ�������д�����汾
1��ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��double����洢��֧
2��ʹ��const char*����洢��ʾ�������Ƶ��ַ�����ʹ��һ���ṹ���ýṹֻ��һ����Ա--һ�����ڴ洢��֧��double����
�����������ʹ��array��Ļ����������*/
//�汾һ��
#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "����","�ļ�","�＾","����" };/*�����д洢����ָ��char�ַ����ĳ���ָ�룬����ָ��
��ָ����Ը��ĵ���ָ��ָ���ֵ�����޸�*/
const double* fill(double array[],int size);//����һ���ɸ���ָ�򣬵��������޸�ֵ��ָ��
void show(const double p_show[]);
int main()
{
    double spend[4] = { 0 };
    const double* p_show = fill(spend, SEASONS);/*p1��һ���ɸ���ָ�򣬲����޸�ָ���ֵ��ָ��*/
    show(p_show);

    system("pause");
    return 0;
}
const double* fill(double array[], int size)
{
    double temp = 0.0;
    for (int i = 0; i < size; i++)
    {
        cout << "������" << seasons[i] << "��Ӫҵ�";
    begin:cin >> temp;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            goto begin;
        }
        array[i] = temp;
    }
    const double* p_show = array;
    return p_show;
}
void show(const double p_show[])
{
    cout << "�ļ���Ӫҵ�����£�" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << p_show[i] << endl;
    }
}
