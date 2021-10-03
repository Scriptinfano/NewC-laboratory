#include <iostream>;
#include<string>;
#include<cstring>;
int main()
{
    using namespace std;
    /*string能够自动维护字符串的长度，因此不需要长度常量*/
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name); /*getline从标准输入设备上读入字符，然后返回给输入流cin,name是接收输入字符串的 string 变量的名称*/
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
    /*对字符数组输入时，使用cin.getline(),对string字符串输入时使用getline(输入流对象cin,待输入的string对象)
    cin.getline(char ch[],size)中的char ch[]表明输入的是字符数组*/
}