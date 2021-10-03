#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*逗号运算符允许将两个表达式放到C++句法中只允许放一个表达式的地方*/
	/*假设有一个循环，每轮都将变量加1，而将另一个变量减1，在for循环的控制部分的更新部分
	完成这两项工作非常方便，但循环句法只允许这里包含一个表达式，可以用逗号运算符将两个
	表达式合并为一个++j, --i*/
	/*逗号也不总是逗号运算符，他可以将变量列表中的名称分隔开来*/
    cout << "输入单词: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                             // start block
        temp = word[i];/*循环体中的三条语句意在将第一个元素和最后一个元素调换，然后将
                       第二个元素和倒数第二个元素调换，以此类推达到将单词倒置的效果*/
        word[i] = word[j];
        word[j] = temp;
        /*在声明变量temp和i、j的位置时，还可以这样声明：int j = 0, i = word.size() - 1;
        这种情况下，逗号只是一个列表分隔符*/
    }                            // end block
    /*所有运算符中，逗号运算符的优先级是最低的，例如：cats=17,240;相当于（cats=17）,240;240并不会起作用
    但括号的优先级最高，下面的表达式将cats设置为240--逗号右侧的表达式值：cats=(17,240)*/
    cout << word << "\nDone\n";
	return 0;
};