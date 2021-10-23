include<iostream>
using namespace std;
int replace(char* str, char c1, char c2);
int main()
{
    char str1 = { 'a','b','c','c','o','c','e','\0' };
    char* str = &str1[0];
    int number = replace(str, 'c', 'i');
    cout << "替换之后，新字符串为:" << str1 << endl;

    return 0;
}
int rplace(char* str, char c1, char c2)
{
    int counter = 0;
    for (; *str != '\0'; str++)
    {
        if (*str == c1)
        {
            *str = c2;
            counter++;
        }
    }
    return counter;
}
