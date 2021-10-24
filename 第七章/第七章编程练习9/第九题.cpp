#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
bool out_of_type(void);

int getinfo(student pa[], int n);/*��һ��������ָ�����student�ṹ������ĵ�һ��Ԫ�ص�ָ�룬�ڶ��������������Ԫ��
                                 �������������������ռ����洢ѧ������Ϣ���Լ�ѧ���ĸ����������ķ���ֵ��ʵ��¼���
                                 ѧ������*/

void display1(student st);/*��ֵ���������ṹ*/
/*display1�Խṹ�������Ϊ������������������Ϣ*/

void display2(const student* ps);/*����student�ͽṹ��ָ�룬�Ҹ�ָ���ǳ���ָ�룬���Ըı�ָ�򣬲����޸�ָ��ָ���ֵ*/
/*display2��ָ�������Ϊ������������������Ϣ*/

void display3(const student pa[], int n);/*��һ��������ָ��洢student�ͽṹ������ĵ�һ��Ԫ�ص�ָ�룬�ڶ�������
                                         �������еĽṹ��������*/
/*display3��������Ϊ������������������Ϣ*/

int main()
{
    cout << "����༶������";
    int class_size;
    begin:cin >> class_size;
    bool set=out_of_type();
    if (set) {
        goto begin;
    }

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout <<"���";
    return 0;
}
int getinfo(student pa[], int n)
{
    cout << ">>��ʼ����ѧ��������" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "����ѧ����ȫ����";
        begin1: cin >> pa[i].fullname;
        bool set1 = out_of_type();
        if (set1) {
            goto begin1;
        }
        cout << "����ѧ���İ��ã�";
        begin2:cin >> pa[i].hobby;
        bool set2 = out_of_type();
        if (set2) {
            goto begin2;
        }
        cout << "����ѧ���ļ���";
        begin3:cin >> pa[i].ooplevel;
        bool set3 = out_of_type();
        if (set3) {
            goto begin3;
        }
    }
    cout<<""
}
void display1(student st) 
{
    cout << "ѧ��������" << st.fullname << endl;
    cout << "ѧ�����ã�" << st.hobby << endl;
    cout << "ѧ���ȼ���" << st.ooplevel << endl;
}
void display2(const student* ps)
{
    cout << "ѧ��������" << ps->fullname << endl;
    cout << "ѧ�����ã�" << ps->hobby << endl;
    cout << "ѧ���ȼ���" << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "ѧ��������" << pa[i].fullname << endl;
        cout << "ѧ�����ã�" << pa[i].hobby << endl;
        cout << "ѧ���ȼ���" << pa[i].ooplevel << endl;
    }
    
}
bool out_of_type(void)
{
    bool set;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        cin.ignore(1024, '\n');
        cout << "�������Ͳ�ƥ�䣬�������룺";
        set = true;
        return set;
    }
    else {
        set = false;
        return set;
    }
}