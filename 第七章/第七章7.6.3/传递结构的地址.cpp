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
void  rect_to_polar(const rect* pxy, polar* pda);/*原函数返回整个结构，在本方法中
需要将两个指针传递给函数。第一个指针指向要转换的结构，为防止函数修改指针所指向的
数据，使用const修饰指针，第二个参数是指向存储转换结果的结构的指针，在本方法中，
函数不返回新结构，利用指针修改原结构数据并存储到新结构中*/
void show_polar(const polar* pda);/*显示转换后结果的函数*/

int main()
{
    rect rplace;
    polar pplace;

    cout << "输入x坐标和y坐标：";
    while (cin >> rplace.x >> rplace.y)/*接受正确的数据类型后，while循环才会执行*/
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "输入下一个坐标（输入q退出）：";
    }
    cout << "完成";
    return 0;
}

void show_polar(const polar* pda)
{
    const double red_to_deg = 57.3;

    cout << "距离=" << pda->distance;
    cout << "角度=" << pda->angle << "度";
}
void rect_to_polar(const rect* pxy, polar* pda)
{
    pda->distance = sqrt(pow(pxy->x, 2) + pow(pxy->y, 2));
    pda->angle = atan2(pxy->y, pxy->x);//atan2函数返回以弧度表示的y/x的反正切，范围从-PAI到+PAI
}