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
    cout << "��������";
    getline(cin, firstname);
    cout << "�����գ�";
    getline(cin, lastname);
    cout << "���������Ϣ��" << firstname << "." << lastname << endl;*/
    /*����Ĵ��벻�ܺ�����Ĵ���ͬʱ����*/

    char firstname2[15], lastname2[15], fullname[30];
    cout << "��������";
    cin.getline(firstname2, 14);
    cout << "�����գ�";
    cin.getline(lastname2, 14);

    strcpy(fullname, lastname2);
    strcat(fullname, ",");
    strcat(fullname, firstname2);

    cout << "������ĵڶ�����Ϣ��" << fullname << endl;
    system("pause");
    return 0;
}