#include <iostream>
/*for循环中，循环体只有一条语句，如果要在循环体中包含多条语句，其方法如下*/
int main()
{
    using namespace std;
    cout << "这个程序可以算你输入的五个数字的和与平均值" << endl;
    cout << "请输入五个数字\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)/*用花括号来构造一条复合语句来组成循环体*/
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }/*循环体将被视为一条语句，因此不用在花括号后加分号*/
    cout << "你输入的数字的合为：" << sum << endl;
    cout << "他们的平均值是" << sum / 5 << ".\n";

    /*如果在语句块中定义了一个新的变量，则仅当程序执行该语句块的语句中时，该变量才存在
    执行完该语句块后，变量将被释放*/
    int x = 20;
    {                       // block starts
        int y = 100;
        cout << x << endl;  // ok
        cout << y << endl;  // ok
    }                       // block ends
    cout << x << endl;      // ok
    //cout << y << endl;      // invalid, won’t compile
    /*注意：在语句块外部定义的变量在语句块内部是有效的，但是在语句块内部定义的变量在
    语句块外部无效*/

    /*如果语句块内外同时声明了一个名字相同的变量：在声明位置到内部语句块结束的范围之内，
    新变量将隐藏旧变量，然后旧变量再次可见*/
    int ww = 20;              // original x
    {                        // block starts
        cout << ww << endl;   // use original x
        int ww = 100;         // new x
        cout << ww << endl;   // use new x
    }                        // block ends
    cout << ww << endl;       // use original x
    return 0;
}