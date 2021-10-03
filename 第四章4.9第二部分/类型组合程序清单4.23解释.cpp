#include<iostream>;
#include<string>;
#include<cstring>;
#pragma warning(disable:4996)

struct antarctica_years_end/*声明antarctica_years_end型结构*/
{
    int year;
};

int main()
{
    /*三种办法分别设置antarctica_years_end型结构结构s01,s02,s03中的成员year的值*/
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;/*直接用句点成员运算符设置成员year的值*/
    antarctica_years_end* pa = &s02;
    pa->year = 1999;/*创建一个指向antarctica_years_end型结构结构s02的指针pa，试图用指针来访问成员并赋值*/
    antarctica_years_end trio[3];
    trio[0].year = 2003;/*创建一个antarctica_years_end型的数组，用数组表示法访问成员*/
    /*在开头没有使用using namespace std;编译指令的情况下，使用对象cout时就要加上cout对象的来历，其来自于
    名称空间std中*/
    std::cout << trio->year << std::endl;/*都可以在指针名和数组名后加上箭头成员运算符->来访问成员*/
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };/*创建指向指针数组的指针时一定要加上const来说明
                                                              该指针指向的内容是常量不可更改*/
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end** ppa = arp;/*指针的指针的创建*/
    auto ppb = arp; // C++11 automatic type deduction
// or else use const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
    return 0;
}