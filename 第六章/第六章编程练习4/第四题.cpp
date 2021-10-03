#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
const unsigned int strsize = 50;/*字符串长度*/
const unsigned int usersize = 50;/*用户的数量*/

void showmenu();
void display_by_name();
void display_by_title();
void display_by_bopname();
void create_info();/*自定义创建数组信息*/

struct bop
{
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
};
bop bop_user[usersize] = {
    {"王维","心理委员","小枫"},
    {"薛晨曦","群众","残骸i"},
    {"黄铭翔","团支书","Scriptinfano"},
    {"孔德言","导员助理","海晨风"},
    {"杜特样","牛马班长","班上最\"靓\"的仔"}
};
int main()
{
    char choice;
begin:std::cout << "输入想要查看213宿舍住户的哪些信息\n";
    std::cout << "A)展示住户全名\t\t\tB)展示住户职称\nC)展示住户qq昵称\t\tD)输入新的住户信息\nQ)退出选择\n";
    std::cout << "输入选项：";
    while (std::cin.get(choice))
    {
        
        if (choice == 'Q')
        {
            break;
        }
        else if(choice=='A'|| choice == 'B' || choice == 'C' || choice == 'D') {
            switch (choice)
            {
            case 'A':
                display_by_name();
                break;/*跳跃到57行*/
            case 'B':
                display_by_title();
                break;
            case 'C':
                display_by_bopname();
                break;
            case 'D':create_info();
                break;
            }
        }
        else {
            std::cout << "重新输入（A,B,C,D,Q其中之一）：";
            std::cin.ignore();/*cin的成员函数ignore()可以直接清空缓冲区中的所有数据*/
            goto begin;
        }   
        std::cin.ignore(1024, '\n');
        break;
    }

    std::cout << "想要继续查看用户的信息，或者退出？";
    std::cout << "继续查看信息请按Y，退出请按N：";
    
    char ch3;
    begin4:std::cin.get(ch3);/*输入的数据无法传入ch3变量*/
    if (ch3 == 'Y') {
        std::cin.ignore(1024, '\n');
        goto begin;
    }
    else if (ch3 == 'N') {
        std::cout << "程序退出";
        exit(EXIT_FAILURE);
    }
    else {
        std::cout << "不按要求输入，请重新输入:";
        std::cin.ignore(1024, '\n');
        goto begin4;
    }
    std::cout << "程序结束" << endl;
    return 0;
}

void showmenu() {
    std::cout << "A)显示名字\t\tB)显示头衔\nC)显示qq昵称\t\tD)创建新的用户信息\nQ）退出）";
}
void display_by_name()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].fullname) == 0)
            break;/*usersize数组并没有被填满*/
        std::cout << bop_user[i].fullname << endl;
    }
}
void display_by_title()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].title) == 0)
            break;/*usersize数组并没有被填满*/
        std::cout << bop_user[i].title<< endl;
    }
}
void display_by_bopname()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].bopname) == 0)
            break;/*usersize数组并没有被填满*/
        std::cout << bop_user[i].bopname << endl;
    }
}
void create_info() {
    int i = 0;
    for (int i = 0; i < usersize;i++) {

        if (strlen(bop_user[i].fullname)==0) {
            std::cin.get();
            std::cout << "输入该用户的真实姓名：";
            std::cin.getline(bop_user[i].fullname,strsize);/*在挨个检测数组元素是否录入用户信息的过程中发现某个元素没有录入用户信息则执行for
                     循环中的内容，否则跳到i++，继续检测下一个元素是否录入*/

            std::cout << "输入该用户的职称：";
            std::cin.getline(bop_user[i].title, strsize);

            std::cout << "输入该用户的qq昵称：";
            std::cin.getline(bop_user[i].bopname, strsize);

            std::cout << "录入成功";
            char ch2;
            std::cout << "是否继续下一名用户信息的录入？输入（Y/N）来确定选择：";
            begin2:ch2 = std::cin.get();
            if (ch2 == 'Y') {
                continue;
            }
            else if(ch2=='N') {
                break;
            }
            else {
                std::cout << "不按要求输入，重新输入Y或N:";
                goto begin2;
            }
        }
        else {
            continue;
        }
        
    }

}