#include<iostream>
using namespace std;
/**/
const int arsize = 8;/*arsieze为人数*/
int sum_arr(int arr[], int n);/*函数原型，第一个参数是数组,将数组名作为形参传递给函数*/
/*将数组首地址作为参数传递给函数时，函数原型中第一个参数不仅可以是int arr[]，还可以是int * arr,数组arr的
元素是int型，因此要传递数组首地址，其一定可以由int指针来进行传递*/
int sum_arr2(int* arr2, int n);
int main() {
	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, arsize);/*调用一个可以计算数组中所有元素之和的函数*/
	cout << "总共吃了" << sum << "个饼";
	return 0;
}
int sum_arr(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total = total + arr[i];
	}
	return total;
}
int sum_arr2(int* arr2, int n) {
	;
}