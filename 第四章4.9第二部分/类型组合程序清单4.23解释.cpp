#include<iostream>;
#include<string>;
#include<cstring>;
#pragma warning(disable:4996)

struct antarctica_years_end/*����antarctica_years_end�ͽṹ*/
{
    int year;
};

int main()
{
    /*���ְ취�ֱ�����antarctica_years_end�ͽṹ�ṹs01,s02,s03�еĳ�Աyear��ֵ*/
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;/*ֱ���þ���Ա��������ó�Աyear��ֵ*/
    antarctica_years_end* pa = &s02;
    pa->year = 1999;/*����һ��ָ��antarctica_years_end�ͽṹ�ṹs02��ָ��pa����ͼ��ָ�������ʳ�Ա����ֵ*/
    antarctica_years_end trio[3];
    trio[0].year = 2003;/*����һ��antarctica_years_end�͵����飬�������ʾ�����ʳ�Ա*/
    /*�ڿ�ͷû��ʹ��using namespace std;����ָ�������£�ʹ�ö���coutʱ��Ҫ����cout�������������������
    ���ƿռ�std��*/
    std::cout << trio->year << std::endl;/*��������ָ����������������ϼ�ͷ��Ա�����->�����ʳ�Ա*/
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };/*����ָ��ָ�������ָ��ʱһ��Ҫ����const��˵��
                                                              ��ָ��ָ��������ǳ������ɸ���*/
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end** ppa = arp;/*ָ���ָ��Ĵ���*/
    auto ppb = arp; // C++11 automatic type deduction
// or else use const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
    return 0;
}