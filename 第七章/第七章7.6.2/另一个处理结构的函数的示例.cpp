#include<iostream>
#include<cmath>
//本程序需要使用数学函数库中的atan2()函数，其可根据x和y的值计算角度
//atan()函数的作用与atan2函数的作用大致相同，但它不能区分180度之内和之外的角度
using namespace std;
struct location//用于存储坐标的结构
{
    double x;
    double y;
};
struct polar//用于存储极坐标的结构
{
    double distance;
    double angle;
};
polar rect_to_polar(location xypos);
void show_polar(polar dapos);
int main()
{
    //定义两个结构，用于表示两种不同的描述位置的方法，然后开发一个函数，将一种格式转换为另一种格式
    //并显示结果

    location rplace;
    polar pplace;

    cout << "输入坐标中x和y的值：";
    while (cin >> rplace.x >> rplace.y)
        /*复习程序如何使用cin来控制while循环：
        cin是istream类的一个对象，抽取运算符>>被设计为使得cin>>rplace.x也是一个istream对象，十一章将介绍
        类运算符是使用函数实现的，使用cin>>rplace.x时，程序将调用一个函数，其返回一个istream值，这个istream
        值将使得while循环的条件为真*/
    {
        pplace = rect_to_polar(rplace);//调用转换函数
        show_polar(pplace);//显示转换后的结构
        cout << "输入下一个坐标的值（或者输入其他字符退出）：";
    }
    cout << "Done";


    return 0;
}
polar rect_to_polar(location xypos)
{
    polar answer;//创建一个与转换结构类型相同的结构变量
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);//atan2函数返回的是弧度制的角度，因此需要乘以转换常数将其转换为角度制

    return answer;
}
void show_polar(polar dapos)
{
    const double red_to_deg = 57.3;
    cout << "距离=" << dapos.distance << endl;
    cout << "角度=" << dapos.angle * red_to_deg << endl;
}