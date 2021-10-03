#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	/*long wait = 0;
while (wait < 10000)
    wait++;这种方法的问题是当计算机处理器的速度发生变化时，必须修改计数限制*/
	/*clock()函数可以返回程序开始执行后所用的系统时间，此处引发两个问题：1、clock()函
	数返回的时间单位不一定是秒 2、该函数的返回类型在某些系统上的类型与其他系统返回的
	类型不同*/
	/*头文件ctime提供了解决方案，其定义了一个符号常量CLOCKS_PER_SEC，该常量等于每秒
	包含的系统时间数，将系统时间除以这个值，就得到了秒数；或将秒数乘以该值就得到了系
	统时间.ctime将clock_t作为clock()返回类型的别名同时也是存储时间单位的数据类型这意
	味着可以声明clock_t类型，编译器将把它转化为其他类型*/
	cout << "以秒为单位输入延迟时间: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;/*deley在此时被转换成了系统时间单位*/
	cout << "starting\a\n";
	clock_t start = clock();/*clock()返回的是从程序开始运行到这一行执行所花的系统时间，
							并将该时间数据存储在clock_t类型的变量start中，clock_t是专门
							存储系统时间的数据类型*/
	while (clock() - start < delay)/*clock()函数调用一次就返回一次从程序开始执行到该次
								   调用的时间*/
		; /*将分号放在循环体部分，说明while循环在执行循环体时什么都不做，相当于暂停程序，暂停的时间就是delay*/
	cout << "done \a\n";
	float secs2 = clock() / CLOCKS_PER_SEC;
	cout << "程序共运行时间：" << secs2 <<"秒" << endl;
	return 0;
};