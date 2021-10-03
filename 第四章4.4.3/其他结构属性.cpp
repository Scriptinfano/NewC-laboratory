#include <iostream>;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; //使choice结构的成员值与bouquet结构中存储的值相同
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    /*同时完成定义结构和创建结构变量（只给变量起名，不赋值）*/
    struct parks
    {
        char location;
        long long phonenumber;
        double gateprice;
    }boston, number, high;

    /*同时完成定义结构和初始化变量（给变量起名的同时赋值）*/
    struct familys
    {
        int members;
        char membername[100];
        long membeiphonenumber;
    }familiyofhuang = { 7,"shit", 18292866329 };

    /*定义结构时还可以省略结构名称*/
    struct       //结构名称为空
    {
        int x;   //两个成员变量的声明
        int y;
    } position;  //

    return 0;
}