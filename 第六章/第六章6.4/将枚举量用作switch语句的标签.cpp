#include<iostream>
using namespace std;
enum{red,orange,yellow,green,blue,violet,indigo};/*枚举定义一般放在main函数之前*/
int main()
{
	/*三目运算符“expression1?espression2:expression3”常备用来取代if else语句
	若expression1为true，则整个表达式的值为expression2的值，否则就是expression3的值*/
	/*cin无法识别枚举类型，程序必须要求用户选择选项时输入一个整数，当switch语句将int值和枚举量标签进行比较时
	将枚举量提升为int。*/
	/*while循环测试条件中，也会讲枚举量提升为int型*/
	cout << "输入颜色的代码（0到6,颜色代码如下）";
	cout << "red(0),orange(1),yellow(2),green(3),blue(4),violet(5),indigo(6)";
	int code;
	cin >> code;
	while (code>=red&&code<=indigo)/*限定用户的输入范围*/ {
		switch (code) {
		case red:cout << "她的嘴唇是红色的。";
		case orange:cout << "她的头发是棕色的。";
		case yellow:cout << "他的鞋是黄色的。";
		case green:cout << "她的指甲(nail)是绿色的。";
		case blue:cout << "他的运动服是蓝色的。";
		case violet:cout << "她的眼睛是紫罗兰（violet）色的。";
		case indigo:cout << "她的心情是低落的（indigo可以表示靛蓝色也可以表示心情低落）";
		}
	}
	return 0;
}