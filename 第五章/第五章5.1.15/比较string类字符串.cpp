#include <iostream>
#include <string> // string class
int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)/*string�������������=�ķ�ʽ�������ܹ�������
                                             ��һ��������Ϊstring������һ��������������string
                                             ����Ҳ������C����ַ���*/
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}