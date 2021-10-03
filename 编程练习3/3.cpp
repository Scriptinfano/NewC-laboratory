#include <iostream>;
#include<string>;
#include<cstring>;
#pragma warning<disable:4996>;
using namespace std;
const int size = 30;
int main()
{
    /*string firstname;
    string lastname;
    cout << "输入名：";
    getline(cin, firstname);
    cout << "输入姓：";
    getline(cin, lastname);
    cout << "这是你的信息：" << firstname << "." << lastname << endl;*/
    /*上面的代码不能和下面的代码同时存在*/

    char firstname2[15], lastname2[15], fullname[30];
    cout << "输入名：";
    cin.getline(firstname2, 14);
    cout << "输入姓：";
    cin.getline(lastname2, 14);

    strcpy(fullname, lastname2);
    strcat(fullname, ",");
    strcat(fullname, firstname2);

    cout << "这是你的第二个信息：" << fullname << endl;
    system("pause");
    return 0;
}