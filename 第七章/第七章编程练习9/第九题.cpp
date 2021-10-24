#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
bool out_of_type(void);

int getinfo(student pa[], int n);/*第一个参数是指向包含student结构的数组的第一个元素的指针，第二个参数是数组的元素
                                 个数。函数的作用是收集并存储学生的信息，以及学生的个数。函数的返回值是实际录入的
                                 学生个数*/

void display1(student st);/*按值传递整个结构*/
/*display1以结构体变量作为函数参数，输出相关信息*/

void display2(const student* ps);/*传递student型结构的指针，且该指针是常量指针，可以改变指向，不能修改指针指向的值*/
/*display2以指针变量作为函数参数，输出相关信息*/

void display3(const student pa[], int n);/*第一个参数是指向存储student型结构的数组的第一个元素的指针，第二个参数
                                         是数组中的结构变量个数*/
/*display3以数组作为函数参数，输出相关信息*/

int main()
{
    cout << "输入班级人数：";
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
    cout <<"完成";
    return 0;
}
int getinfo(student pa[], int n)
{
    cout << ">>开始输入学生的数据" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "输入学生的全名：";
        begin1: cin >> pa[i].fullname;
        bool set1 = out_of_type();
        if (set1) {
            goto begin1;
        }
        cout << "输入学生的爱好：";
        begin2:cin >> pa[i].hobby;
        bool set2 = out_of_type();
        if (set2) {
            goto begin2;
        }
        cout << "输入学生的级别";
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
    cout << "学生姓名：" << st.fullname << endl;
    cout << "学生爱好：" << st.hobby << endl;
    cout << "学生等级：" << st.ooplevel << endl;
}
void display2(const student* ps)
{
    cout << "学生姓名：" << ps->fullname << endl;
    cout << "学生爱好：" << ps->hobby << endl;
    cout << "学生等级：" << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "学生姓名：" << pa[i].fullname << endl;
        cout << "学生爱好：" << pa[i].hobby << endl;
        cout << "学生等级：" << pa[i].ooplevel << endl;
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
        cout << "输入类型不匹配，重新输入：";
        set = true;
        return set;
    }
    else {
        set = false;
        return set;
    }
}