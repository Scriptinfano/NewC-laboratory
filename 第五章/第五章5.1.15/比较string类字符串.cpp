#include <iostream>
#include <string> // string class
int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)/*string类重载运算符！=的方式让我们能够在至少
                                             有一个操作数为string对象，另一个操作数可以是string
                                             对象也可以是C风格字符串*/
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}