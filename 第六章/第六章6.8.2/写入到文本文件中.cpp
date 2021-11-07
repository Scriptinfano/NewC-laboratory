/*在学习文件输出前，回顾一下cout的知识点：
1、必须包含头文件iostream
2、头文件iostream中定义了一个用来处理输出的ostream类
3、头文件iostream声明了一个cout的ostream变量（类中定义的变量一般被称为对象）
4、必须指名名称空间std;在不使用using namespace std;的情况下，要访问cout对象必须写为std::cout
5、可以结合使用cout和运算符<<来显示各种类型的数据*/

/*文件输出与cout类似，其知识点如下：
1、必须包含头文件fstream
2、头文件fstream中定义了一个用来处理输出的ofstream类
3、需要声明一个或多个ofstream变量（对象），并以自己喜欢的方式对其命名，条件是遵守命名规则
4、指明名称空间std
重点：5、需要将ofstream对象与文件关联起来，为此，方法之一是open()
      6、使用完文件后，应使用方法close()将其关闭
      7、结合使用ofstream对象和运算符<<来输出各种类型的数据*/

/*文本I/O的概念：使用cin进行输入时，程序将输入视为一系列的字节，每个字节被解释为字符编码，不管目标数据类型是
什么，输入一开始都是字符数据--文本数据。然后cin对象负责将文本转换为其他类型*/
/*
直接来看在cin输入中最复杂的情况，也就是用两种方法将字符读入字符数组的情况
#include<iostream>
using namespace std;
int main()
{
    char word[50];
    cin >> word;
    在这种情况中，cin不断读取，直到遇到空白字符

    char word2[50];
    cin.getline(word2, 50);
    在这种情况中，cin将不断读取，直到遇到换行符（cin.getline()对一行读入的字符数在第二个参数中做了限制），在
    将所有字符连同空字符读入字符数组后，将换行符丢弃

    并非所有文件都是文本文件,文件类型分两种：
    1、一种是以文本的ASC码形式存储在计算机中
    2、以二进制形式存储在计算机中

    操作文件分为三类
    1、ofstream:写操作，o是output的缩写
    2、ifstream:读操作
    3、fstream：读写操作

    写文本文件有以下步骤：
    1、包含头文件fstream
    2、创建流对象：ofstream 对象名
    3、打开文件：对象名.open("文件路径",打开方式);
    4、写数据：对象名<<"写入的数据";
    5、关闭文件：对象名.close()
    return 0;
};*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream outFile; 声明ofstream对象outFile
    ofstream fout;

    如何将声明的对象与特定的文件关联起来
    outFile.open("fish.txt");将字面字符串作为参数传递给方法open()
    char filename[50];
    cin >> filename;
    fout.open(filename);
    方法open()接受一个C风格字符串作为参数

    如何使用对象
    double wt = 125.8;
    outFile << wt;
    char line[81] = "objects are closser than they appear.";
    fout << line << endl;*/
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outfile;
    outfile.open("D:/testfiles/test.txt",ios::out);
    outfile << "test for input";
    outfile.close();/*方法close不需要使用文件地址作为参数，outfile已经和该文件关联了起来，因此close的作用对象也一定是该文件*/

/*
成员函数open()中的第二个参数文件打开模式标记参数大全
ios::in 					打开文件用于读取数据，若文件不存在，则打开出错
ios::out 					打开文件用于写入数据，若文件不存在，则新建该文件；如果文件原本存在，则代开后清除原内容
ios::app 					打开文件，用于在末尾添加数据，如果文件不存在，则新建文件
ios::trunc 					打开文件时会清空内部所有数据，单独使用时的作用和ios::out相同
ios::binary 				以二进制方式打开文件，若不指定此模式，则以文本模式代开
ios::in|ios::out			打开已存在的文件，可读取内容，也可以向其中写数据，文件打开时，原有内容保持不变，如果文件不存在，则打开出错
ios::out|ios::app			在文件末尾追加写入数据
ios::in|ios::out|ios::trunc	打开文件，可读取可写入，若文件本存在，打开时清除原有内容；若文件不存在，则新建文件

文件的打开方式还可以配合使用，如:
1、ios::binary|ios::out     以二进制方式写入文件
2、ios::out|ios::app        以追加方式写入文件
*/
    cout << "enter the make and model of automobile:";
    cin.getline(automobile, 50);
    cout << "enter the model year";
    cin >> year;
    cout << "enter the original asking price:";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed; /*用一般的方式输出浮点数，不使用科学记数法*/
    cout.precision(2);
    return 0;
};