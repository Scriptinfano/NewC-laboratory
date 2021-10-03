#include <iostream>
#include <string> // string class
const int Arsize = 20;
int main()
{
    using namespace std;
    /*while循环是没有初始化和更新部分的for循环，只有测试条件和循环体
    如果测试条件为true则执行循环体，如果一开始测试条件是false，则程序不会执行循环*/
    char name[Arsize];
    cout << "请输入你的名字: ";
    cin >> name;
    cout << "这是你名字中各个字母所对应的ASC码:\n";
    int i = 0;/*while循环的初始化也放在while行之前*/
    while (name[i] != '\0')      /*逐个从左到右检查字符是否为空字符，且不是空字符的返回
        值为true时执行循环体*/
        /*还可以这样写while的测试条件：while (name[i])，由于name[i]是常规字符，值为该字符
        的编码，该编码一定是非零值，转化为布尔类型后一定是true进而使得程序继续执行循环
        体，直至遇到空字符，布尔类型为false才终止循环*/
    {
        cout << name[i] << ": " << int(name[i]) << endl;/*将数组中的字符强制类型转换为ASC码*/
        i++;/*while循环不能说没有更新部分，只是把更新部分放到循环体中执行罢了*/
    }
    return 0;
}