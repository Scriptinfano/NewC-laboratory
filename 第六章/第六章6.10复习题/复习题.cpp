/*�ڶ���
#include <iostream>
using namespace std;
int main()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch << endl; // done if newline
        else
            cout << ch+1 << endl; // done otherwise
        cin.get(ch);
    }
    // try ch + 1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
    // std::cin.get();
    // std::cin.get();
    return 0;
}
��ch+1��Ϊch++����ʲôЧ����++�������ʾ�����ĵ�����++�����������ch+1���������ڣ�ch+1�еļӷ����������
�����������ݲ�������ʱ�����������͵�ת����chΪ�ַ��ͳ�����1Ϊint�ͱ�������������ת��Ϊint�ͣ����Ի���
��ASC�ַ���ʮ�����������ݣ�++��������ᷢ������ת�������������֤��ԭ�����ĵ���*/


/*��һ��
while (cin.get(ch)) // quit on eof
{
      if (ch == ' ')
             spaces++;
      if (ch == '\n')
             newlines++;
}

// Version 2
while (cin.get(ch)) // quit on eof
{
      if (ch == ' ')
             spaces++;
      else if (ch == '\n')
             newlines++;
}
�汾������ڰ汾һ���ŵ㣺�汾һʹ��������If��䣬�������������ַ�����ch��Ҫ���������жϣ��ֱ��ж�
�Ƿ�Ϊ�ո�����Ƿ��ǻ��з����汾����Ч����Խϸ�*/


/*������
#include <iostream>
using namespace std;
int main()
{
    char ch;
    int ct1, ct2;

    ct1 = ct2 = 0;
    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
            ct2++;
        cout << ch;
    }
    cout <<"ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
    return 0;
}
�ո���ͻ��з��ڼ���ch��Ҳ�ᱻ���¸�ֵ*/

/*������
a��weight>=115&&weight<125
b��ch=='q'||ch=='Q'
c��x%2==0&&x!=26
d��x%2==0&&x%26!=0
e��(donation>=1000&&donation<=2000)||guest==1
f��65��90 97��122
   (ch>=65&&ch<=90)||(ch>=72&&ch<=122)����(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')*/


/*������*/
/*#include<iostream>
using namespace std;
int main()
{
    bool xx = 1;
    cout << !!xx;
    return 0;
};
!!x��x��ͬ����x��һ������ֵ�������³����ģ���x����������ʱ�������������ϲ�����ͬ��������Ὣxת��Ϊ����
�Ĳ������͵�ֵ֮���ٽ����߼�����*/

/*������
x=(x>=0)?x:(-1*x)*/

/*������*/
/*#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a_grade = 1;
    int b_grade = 1;
    int c_grade = 1;
    int d_grade = 1;
    int f_grade = 1;
    
    ch = cin.get();
    switch (ch) {
    case 'A':a_grade++;
        break;
    case 'B':b_grade++;
        break;
    case 'C':c_grade++;
        break;
    case 'D':d_grade++;
        break;
    default:f_grade++;
        break;
    }
    cout << a_grade<<" "<<b_grade<<" "<<c_grade<<" "<<d_grade<<" "<<f_grade;


    return 0;
};*/

/*�ڰ���
#include <iostream>
using namespace std;
void showmenu(); // function prototypes
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:  cout << "\a\n";
            break;
        case 2:  report();
            break;
        case 3:  cout << "The boss was in all day.\n";
            break;
        case 4:  comfort();
            break;
        default: cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
        "1) alarm           2) report\n"
        "3) alibi           4) comfort\n"
        "5) quit\n";
}
void report()
{
    cout << "It's been an excellent week for business.\n"
        "Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
        "in the industry. The board of directors think\n"
        "you are the finest CEO in the industry.\n";
}
��ʹ��������ȣ�ʹ���ַ���ʾ�˵�ѡ���case��ǩ�к��ŵ�
ʹ��������Ϊ��ǩ�����û�������ĸʱ���������Ͳ�ƥ��Ĵ��󣬵����޷��ټ�������,��ʹ��char�ͱ���ʱ��char��
�����������������ַ������Դ洢һ���ֽڵ����֣�ֻ�������λ���֣�*/

/*�ھ���
��д����Ĵ���Ƭ�Σ���ʹ��break��continue���
int line = 0;
char ch;
while (cin.get(ch))
{
    if (ch == 'Q')
           break;  //����������'Q'ʱ������break������ѭ�����˳�ѭ��
    if (ch != '\n')
           continue;  //������뻻�з�������ͣѭ����ִ��line+1�����½�����һ��ѭ��
    line++;
} �����߼����ʽ��д���룺
int line = 0;
char ch;
while(cin.get(ch)&&ch!='Q')
{
  if(ch=='\n')
     line++; 
}*/
