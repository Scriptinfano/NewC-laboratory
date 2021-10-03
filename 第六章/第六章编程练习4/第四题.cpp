#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
const unsigned int strsize = 50;/*�ַ�������*/
const unsigned int usersize = 50;/*�û�������*/

void showmenu();
void display_by_name();
void display_by_title();
void display_by_bopname();
void create_info();/*�Զ��崴��������Ϣ*/

struct bop
{
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
};
bop bop_user[usersize] = {
    {"��ά","����ίԱ","С��"},
    {"Ѧ����","Ⱥ��","�к�i"},
    {"������","��֧��","Scriptinfano"},
    {"�׵���","��Ա����","������"},
    {"������","ţ��೤","������\"��\"����"}
};
int main()
{
    char choice;
begin:std::cout << "������Ҫ�鿴213����ס������Щ��Ϣ\n";
    std::cout << "A)չʾס��ȫ��\t\t\tB)չʾס��ְ��\nC)չʾס��qq�ǳ�\t\tD)�����µ�ס����Ϣ\nQ)�˳�ѡ��\n";
    std::cout << "����ѡ�";
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
                break;/*��Ծ��57��*/
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
            std::cout << "�������루A,B,C,D,Q����֮һ����";
            std::cin.ignore();/*cin�ĳ�Ա����ignore()����ֱ����ջ������е���������*/
            goto begin;
        }   
        std::cin.ignore(1024, '\n');
        break;
    }

    std::cout << "��Ҫ�����鿴�û�����Ϣ�������˳���";
    std::cout << "�����鿴��Ϣ�밴Y���˳��밴N��";
    
    char ch3;
    begin4:std::cin.get(ch3);/*����������޷�����ch3����*/
    if (ch3 == 'Y') {
        std::cin.ignore(1024, '\n');
        goto begin;
    }
    else if (ch3 == 'N') {
        std::cout << "�����˳�";
        exit(EXIT_FAILURE);
    }
    else {
        std::cout << "����Ҫ�����룬����������:";
        std::cin.ignore(1024, '\n');
        goto begin4;
    }
    std::cout << "�������" << endl;
    return 0;
}

void showmenu() {
    std::cout << "A)��ʾ����\t\tB)��ʾͷ��\nC)��ʾqq�ǳ�\t\tD)�����µ��û���Ϣ\nQ���˳���";
}
void display_by_name()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].fullname) == 0)
            break;/*usersize���鲢û�б�����*/
        std::cout << bop_user[i].fullname << endl;
    }
}
void display_by_title()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].title) == 0)
            break;/*usersize���鲢û�б�����*/
        std::cout << bop_user[i].title<< endl;
    }
}
void display_by_bopname()
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(bop_user[i].bopname) == 0)
            break;/*usersize���鲢û�б�����*/
        std::cout << bop_user[i].bopname << endl;
    }
}
void create_info() {
    int i = 0;
    for (int i = 0; i < usersize;i++) {

        if (strlen(bop_user[i].fullname)==0) {
            std::cin.get();
            std::cout << "������û�����ʵ������";
            std::cin.getline(bop_user[i].fullname,strsize);/*�ڰ����������Ԫ���Ƿ�¼���û���Ϣ�Ĺ����з���ĳ��Ԫ��û��¼���û���Ϣ��ִ��for
                     ѭ���е����ݣ���������i++�����������һ��Ԫ���Ƿ�¼��*/

            std::cout << "������û���ְ�ƣ�";
            std::cin.getline(bop_user[i].title, strsize);

            std::cout << "������û���qq�ǳƣ�";
            std::cin.getline(bop_user[i].bopname, strsize);

            std::cout << "¼��ɹ�";
            char ch2;
            std::cout << "�Ƿ������һ���û���Ϣ��¼�룿���루Y/N����ȷ��ѡ��";
            begin2:ch2 = std::cin.get();
            if (ch2 == 'Y') {
                continue;
            }
            else if(ch2=='N') {
                break;
            }
            else {
                std::cout << "����Ҫ�����룬��������Y��N:";
                goto begin2;
            }
        }
        else {
            continue;
        }
        
    }

}