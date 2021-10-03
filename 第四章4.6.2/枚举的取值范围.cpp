#include <iostream>;
using namespace std;
int main()
{
	/*枚举在最初的定义中，只有声明中指出的值是有效的，但在C++有了强制类型转换后，增加了可以赋给枚举变量的合法值
	枚举有了一定的取值范围，注意枚举值一定是整数，因此在范围之内不包括小数*/
	enum bits { one = 1, teo = 2, four = 4, eight = 8 };
	bits myflag;
	myflag = bits(6);/*合法，即使6不是枚举值，但是已经通过强制类型转换将6转换为枚举值了，且6在枚举的取值范围之内*/
	/*取值范围并不是系统定义的，而是根据你在枚举定义中按照一定计算方法算出来的
	定义如下：枚举量的上限=比枚举量的最大值（在枚举定义中找）大的2的幂的最小值减1
	举例：在定义bits时，其定义中的最大枚举量为8，在2的幂中，比8大的值的最小值就是16，16是2的幂且比8大，则取值范围的上限
	就是16-1，即15
			  枚举量的下限：需要知道枚举量的最小值，如果该最小值不小于0，则取值范围的下限为0；否则采用与寻找上限方式相同
			  的方式寻找下限
	举例：如果定义的枚举量的最小值为-6，而比它小的最大的2的幂是-8（加上负号），因此下限为-7*/
	/*C++11新增了作用域内枚举，将在以后讨论*/


	return 0;
}