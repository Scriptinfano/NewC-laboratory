#include<iostream>
using namespace std;
int main()
{
	struct candybar
	{
		char pinpai[20];
		double zhongliang;
		unsigned int kaluli;
	};
	candybar* pcandybar = new candybar[3];

	strcpy(pcandybar[0].pinpai, "Mocha Munch");
	pcandybar[0].zhongliang = 2.3;
	pcandybar[0].kaluli = 350;

	/*或者用指针形式表示元素： (pcandybar)->pinpai= "Mocha Munch";
							  （pcandybar+1）->zhongliang = 2.3;
							  （pcandybar+2）->kaluli = 350;*/
	strcpy(pcandybar[1].pinpai, "Hershey bar");
	pcandybar[1].zhongliang = 4.2;
	pcandybar[1].kaluli = 550;

	strcpy(pcandybar[2].pinpai, "Musketbar");
	pcandybar[2].zhongliang = 2.3;
	pcandybar[2].kaluli = 350;
	cout << "我的第一个棒棒糖是" << pcandybar[0].pinpai << ",它的重量是" << pcandybar[0].zhongliang << ",它的卡路里含量是" << pcandybar[0].kaluli << endl;
	cout << "我的第二个棒棒糖是" << pcandybar[1].pinpai << ",它的重量是" << pcandybar[1].zhongliang << ",它的卡路里含量是" << pcandybar[1].kaluli << endl;
	cout << "我的第三个棒棒糖是" << pcandybar[2].pinpai << ",它的重量是" << pcandybar[2].zhongliang << ",它的卡路里含量是" << pcandybar[2].kaluli << endl;
	delete[]pcandybar;/*C++中delete和delete[]的区别如下：
					   在回收用 new 分配的单个对象的内存空间的时候用 delete，回收用 new[] 分配的一组对象的内存空间
					   的时候用 delete[]。*/
	return 0;
}