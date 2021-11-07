#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
const int SIZE = 60;
int main()
{
	/*
    ofstream outfile;
	ifstream infile;\\声明ifstream类对象infile
	
	outfile.open("D:/testfiles/test.txt", ios::out);
	infile.open("D:/testfiles/test.txt", ios::in);
	if (!infile.is_open()) //成员函数is_open()在检测到打开流错误时返回false，取反得true，执行条件语句
    {
		cout << "无法打开名为test的文件" << endl;
		cout << "程序终止";
		exit(EXIT_FAILURE);
	}

	outfile << "15.8 59.6 15.6\n14.5 56.3 25.3";

	double value[3];
	double value1, value2, value3;
	double sum = 0.0;
	int count = 0;

	//infile >> value1;
	//cin.get();
	//infile >> value2;
	//cin.get();
	//infile >> value3;

	for (int i = 0; infile.good() && i <= 2; i++)若输入正常则执行该循环 {
		++count;
		infile >> value[i];
		infile.get();
		sum += value[i];
	}
	infile.close();
	cout << "平均值是" << sum / 3;*/

    char filename[SIZE];
    ifstream inFile;        // object for handling file input
    cout << "键入文件名字: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        cout << "无法打开文件" << filename << endl;
        cout << "程序终止\n";
        exit(EXIT_FAILURE);/*程序终止函数exit()，定义于头文件cstdlib*/
    }
    double value;
    double sum = 0.0;
    int count = 0;          //数字的读取个数，每成功读取一个数字，给count+1


    inFile >> value;        //读取文件中第一个数字
    while (inFile.good())   //当输入正常时，goodbit被设置，good()函数返回非零值，执行循环
    {
        ++count;            //给读取的数字计数
        sum += value;       //将所有读取的数字加和
        inFile >> value;    //相当于循环的更新部分，因为这个循环的判断条件是输入是否正常
    }

    if (inFile.eof())
        cout << "遇到文件尾条件，终止读取\n";
    else if (inFile.fail())/*fail()函数不止能检测是否是因为输入类型不匹配而发生错误，也可以检测是否遇到文件尾条件*/
        cout << "读入类型不匹配，发生非致命错误\n";
    else
        cout << "因未知原因终止读取\n";
        
    if (count == 0)/*计数为零则意味着没有读取*/
        cout << "未读取任何数据\n";
    else
    {
        cout << "总共读取了" << count <<"个数据。" << endl;
        cout << "总和：" << sum << endl;
        cout << "平均值：" << sum / count << endl;
    }
    inFile.close();         // finished with the file
	return 0;
};