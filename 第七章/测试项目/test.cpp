#include<iostream>
using namespace std;
char* buildstr(char ch, int times);
int main()
{
    //函数无法返回字符串，但可以返回字符串的地址，下面的程序定义了一个叫buildstr的函数，该函数返回一个指针，该函
    //数接受两个参数：一个字符和一个数字。函数返回一个指针。
    int times; char ch;
    cout << "输入一个整数:";
    cin >> times;
    cout << "输入一个字符：";
    cin >> ch;
    char* ps = buildstr(ch, times);
    cout << "分配的内存地址是" << ps << endl;/*输出地址*/
    delete[]ps;//在函数定义中，new申请内存时使用了new[]，释放内存时对应也要使用delete[]，释放内存内存时不会删除指针
    //小知识：动态申请的内存，分两种情况：1、基本数据类型的分配 2、自定义数据类型的分配
    /*1、基本数据类型
    例子：int *a=new int[10];
          delete a;//方式一
          delete[]a;//方式二
          方式一和方式二均不会造成内存泄露，针对简单的基本数据类型，方式一和方式二均可正常工作，因为基本数据类型
          没有析构函数，且new在分配内存时会记录分配的空间大小，则delete能正确释放内存，无需调用析构函数释放其余指
          针
       2、自定义数据类型
       这里一般指类，假设通过new申请了一个对象数组，注意是对象数组，返回一个指针，对于此对象数组的内存释放，需要做
       两件事情：一是释放最初申请的那部分空间，二是调用析构函数完成清理工作。对于内存空间的清理，由于申请时记录了
       其大小，因此无论使用delete还是delete[ ]都能将这片空间完整释放，而问题就出在析构函数的调用上，当使用delete
       时，仅仅调用了对象数组中第一个对象的析构函数，而使用delete [ ]的话，将会逐个调用析构函数。*/
       //建议：每次使用delete时均带上[]，也就是使用delete[]确保不出问题
    ps = buildstr('+', 20);/*前面虽然删除了指针所申请的空间，但是不会删除指针本身*/
    cout << ps << "-done-" << ps << endl;
    delete[]ps;
    return 0;
}
char* buildstr(char ch, int times) {
    char* pstr = new char[times + 1];//new char[times+1]的意思是用new运算符在内存池中找到一块适合存储长度为times的char数组的
 //内存，并将该内存的地址返回，并将地址赋给指针buildstr，要创建能包含times个字符的字符串，需要能够
 //times+1个字符的空间，以便能够存储空值字符
    pstr[times - 1] = '\0';//将new来的数组的最后一个元素设为空值字符，使其成为字符串
    int xiabiao = times - 1;
    while (xiabiao >= 0) {
        pstr[xiabiao] = ch;//把传入函数的字符不断写入字符串
        xiabiao--;
    }
    return pstr;//pstr相当于地址
}
