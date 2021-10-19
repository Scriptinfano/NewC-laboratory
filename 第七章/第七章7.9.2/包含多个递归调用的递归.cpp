#include<iostream>
using namespace std;
const int len = 66;
const int divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
    //在需要将一项工作不断分为两项较小的、类似的工作时，递归非常有用
    /*例子：绘制标尺，标出两端，找到中点并将其标出，然后将同样的操作用于标尺的左半部分和右半部分。进一步细分时可将
    同样的操作用于当前的每一部分。*/
    /*递归方法有时被称为分而治之策略*/

    /*程序示例：使用一个字符串，该字符串除两端为|字符以外，其他全部为空格，main函数使用循环调用subdivide()函数6次
    每次将递归编号加1，并打印得到的字符串。每行输出表示一层递归*/
    char ruler[len];//尺子的总长度
    for (int i = 1; i < len - 2; i++)
    {
        ruler[i] = ' ';/*将名为ruler的char型数组除两端的元素之外，其余全部赋值为空格字符*/
    }
    ruler[len - 1] = '\0';//将名为ruler的char型数组的最后一个元素设为空值字符，使整个字符数组可被视为字符串处理
    int max = len - 2;//max是倒数第二个元素
    int min = 0;
    ruler[min] = ruler[max] = '|';/*将名为ruler的char型数组的两端的元素设为字符‘|’*/
    cout << ruler << endl;
    for (int i = 1; i <= divs; i++)/*6层调用填充64个字符*/
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < len - 2; j++)
        {
            ruler[j] = ' ';
        }
    }

    return 0;
}
void subdivide(char ar[], int low, int high, int level)/*调用一次将导致两个调用，两个调用导致六个调用
                                                       调用次数呈现几何级数增长，所以六层调用*/
{
    if (level == 0)//函数调用自身时，将level-1,当level为0时，函数不再调用自己
    {
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    /*subdivide函数调用自己两次，一次针对左半部分，一次针对右半部分。*/
    subdivide(ar, low, mid, level - 1);/*mid被视为右端点*/
    subdivide(ar, mid, high, level - 1);/*mid被视为左端点*/
}