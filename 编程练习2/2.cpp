#include <iostream>;
#include<string>;
#include<cstring>;
int main()
{
    using namespace std;
    /*string�ܹ��Զ�ά���ַ����ĳ��ȣ���˲���Ҫ���ȳ���*/
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name); /*getline�ӱ�׼�����豸�϶����ַ���Ȼ�󷵻ظ�������cin,name�ǽ��������ַ����� string ����������*/
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
    /*���ַ���������ʱ��ʹ��cin.getline(),��string�ַ�������ʱʹ��getline(����������cin,�������string����)
    cin.getline(char ch[],size)�е�char ch[]������������ַ�����*/
}