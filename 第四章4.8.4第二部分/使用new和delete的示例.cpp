/*使用new和delete来存储通过键盘输入的字符串*/
#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
char* getname(void);/*函数原型放在main函数之前，该函数返回了一个指向字符串的指针*/
/*如果程序要读取1000个字符串，最大的字符串包含79个字符，其他字符串却短的多，使用char来存储这些字符串，这需要1000
个数组，每个数组的长度为80个字符，共需要80000个数组，造成了内存浪费。
解决方法：创建一个数组，包含1000个指向char的指针，然后使用new根据每个字符串的需要分配相应数量的内存，节省了内存*/
int main()
{
    char* name;/*声明一个指向char的指针name*/

    name = getname();/*调用自定义函数getname()*/
    cout << name << " at " << (int*)name << "\n";/*如果给cout提供指针，则其将打印地址，如果指针的类型是char*，
                                                 则cout将显示指向的字符串，如果要显示字符串的地址，必须将指针
                                                 强制类型转换为int*，所以(int*)name打印的是name的地址 */
    delete[] name;/*在getname()函数中我们创建内存，并在main()函数中再将内存释放出去*/

    name = getname();
    cout << name << " at " << (int*)name << "\n";
    delete[] name;
    return 0;
}

char* getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];/*用new为输入到temp数组中的单词分配新的空间并将该空间的地址返回给char
                                          型指针pn（该空间的大小恰好存储该单词的大小，strlen函数先测量该单词不包含空字符的长度，再通过运算符+包含空字
                                          符，进而得到一个恰好包含该单词大小的空间大小，再将这个大小作为参数传递给
                                          new，让new为其寻找合适的空间，但这个空间还没有存入单词，需要strcpy函数
                                          将字符串复制进去）*/
    strcpy(pn, temp);/*将数组temp中的字符串复制到新的内存块中*/

    return pn;/*函数返回指针pn，这是字符串副本的地址*/
}