/*第二题
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
将ch+1换为ch++会有什么效果：++运算符表示变量的递增，++操作符相对于ch+1的区别在于，ch+1中的加法运算符会在
左右两侧数据参与运算时进行数据类型的转换，ch为字符型常量，1为int型变量，运算结果会转换为int型，所以会输
出ASC字符的十进制整型数据，++运算符不会发生类型转换的情况，仅保证了原变量的递增*/


/*第一题
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
版本二相对于版本一的优点：版本一使用了两次If语句，针对所有输入的字符变量ch都要进行两次判断，分别判断
是否为空格符和是否是换行符，版本二的效率相对较高*/


/*第三题
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
空格符和换行符在键入ch后也会被重新赋值*/

/*第四题
a、weight>=115&&weight<125
b、ch=='q'||ch=='Q'
c、x%2==0&&x!=26
d、x%2==0&&x%26!=0
e、(donation>=1000&&donation<=2000)||guest==1
f、65到90 97到122
   (ch>=65&&ch<=90)||(ch>=72&&ch<=122)或者(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')*/


/*第五题*/
/*#include<iostream>
using namespace std;
int main()
{
    bool xx = 1;
    cout << !!xx;
    return 0;
};
!!x和x相同是在x是一个布尔值的条件下成立的，当x是其他类型时，两者在类型上并不相同，运算符会将x转换为合适
的布尔类型的值之后，再进行逻辑运算*/

/*第六题
x=(x>=0)?x:(-1*x)*/

/*第七题*/
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

/*第八题
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
与使用数字相比，使用字符表示菜单选项和case标签有何优点
使用数字作为标签，当用户输入字母时，发生类型不匹配的错误，导致无法再继续输入,而使用char型变量时，char型
变量不仅可以输入字符还可以存储一个字节的数字（只能输入个位数字）*/

/*第九题
改写下面的代码片段，不使用break和continue语句
int line = 0;
char ch;
while (cin.get(ch))
{
    if (ch == 'Q')
           break;  //输入数据是'Q'时，利用break语句打破循环，退出循环
    if (ch != '\n')
           continue;  //如果输入换行符，则暂停循环不执行line+1，重新进入下一次循环
    line++;
} 利用逻辑表达式改写代码：
int line = 0;
char ch;
while(cin.get(ch)&&ch!='Q')
{
  if(ch=='\n')
     line++; 
}*/
