#include<iostream>;
#include<string>;
#include<cstring>;
#include<vector>;/*使用vector对象必须包含头文件vector*/
#include<array>;/*使用array对象也必须包含头文件array*/
#pragma warning(disable:4996)
using namespace std;
int main()
{
	/*虽然vector的功能比数组强大，但付出的代价是效率稍低，如果需要长度固定的数组则使用array类数组是最佳选择，代价
	是不方便和不安全，array类弥补了这一缺点*/
	/*array对象的长度是固定的，也是用栈（静态内存分配），效率与数组相同，更方便，更安全*/
	array<int, 5> ai;/*array的第二个参数限定了array类的长度，声明语法与vector类似，但多了第二个参数以确保
					 array类的长度是固定的*/
	array<double, 4> ad = { 2.3,12.2,25.2,23.3 };
	//array<typeName, n_elem> arr;中n_elem不能是变量，必须是一个数字

	return 0;
}