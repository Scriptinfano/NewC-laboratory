#include<iostream>
using namespace std;
const int Max = 5;
const int Max2 = 5;
int main()
{
	/*如果要编写一个将一系列数字读入到数组中的程序，并允许用户在数组填满之前结束输入，如果使用cin来完成，如下：
	int n;
	cin >> n;
	用户如果输入字母而不是数字，则发生了类型不匹配的情况，有四种情况：
	1、n的值保持不变
	2、不匹配的输入被留在输入队列中
	3、cin对象的一个错误标记被设置（说明必须重置该标记，程序才能继续输入，可以使用clear()方法来重置错误标记）
	   回顾：输入不匹配的类型和EOF都将使cin返回false
	4、对cin方法的调用将返回false（方法返回false说明可以使用非数字来结束读取数字的循环）*/

	/*示例程序（计算每天捕获的鱼的重量，假设每天最多捕获5条鱼，用一个最多是5个元素的数组来存储数据，当非数字
	被输入时将结束循环）*/

	double fish[Max];
	cout << "输入你的鱼的重量：" << endl;
	cout << "你的最大输入量是" << Max << "条鱼\n";
	cout << "fish #1:";
	int i = 0;
	while (i+1<=Max && cin >> fish[i])/*这里将cin>>fish[i]放在逻辑表达式中，是因为当cin不规范输入时会返回false*/ {
		if (i++ < Max)
			cout << "fish #" << i + 1 << ": ";
	}/*用while循环逐个将数据输入到fish数组中*/

	/*计算所有已经输入的鱼的重量的平均值*/
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];/*将fish中的每个每个元素加起来放在total中，因为fish中的元素个数不确定，是由用户定义的，
						 所以不能直接相加，而应该使用for循环，不停的判断元素是否为空，前面的i已经计算好了元素的
						 个数，只需要让初始值在更新的过程中小于i即可*/
	if (i == 0)
		cout << "没有鱼";
	else
		cout << "所有鱼重量的平均值为" << total / i << endl;

	cout << "完成";

	/*示例程序2（计算五次高尔夫得分的平均值）*/
	int golf[Max2];
	cout << "请输入你的高尔夫得分：" << endl;
	cout << "你必须输入最多" << Max2 << "回合的分数";
	int i2;
	int i3;
	for (i2 = 0; i2 < Max2; i2++) {
		cout << "第" << i2 + 1 << "回合：";
		while (!(cin >> golf[i2]))/*当有非法输入时，cin>>golf[i2]将返回零，在while测试条件中，零值将会被
								 自动转换为布尔类型false,此时取反为true，则执行该while循环。输入合法时，将输入
								 放到数组中，不执行循环中的语句*/ {
			cin.clear();/*先用cin.clear()清除failbit*/
				while (cin.get() != '\n')/*将cin.get()放到while循环的测试部分，如果放在循环体中，没有初始值，程序
										 不知道何时停止循环，放在测试部分时，代码执行测试部分时也会执行cin.get()
										 语句，while循环使得cin.get()不断被执行，也就是让cin.get()不断读取缓冲区的
										 输入，从而达到清空缓冲区的目的，当cin.get()读取到换行符时停止读取*/
					continue;/*不执行循环体，直接跳到while循环的更新部分*/
				cout << "请输入数字：";
		}
	}
	double total = 0.0;
	for (i3 = 0; i3 < Max2; i3++)
		total += golf[i3];
	cout << Max2 << "的平均分是" << total / Max2;

	return 0;
};