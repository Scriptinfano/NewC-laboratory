#include <iostream>
#include <string> // string class
const int Arsize = 20;
int main()
{
    using namespace std;
    /*whileѭ����û�г�ʼ���͸��²��ֵ�forѭ����ֻ�в���������ѭ����
    �����������Ϊtrue��ִ��ѭ���壬���һ��ʼ����������false������򲻻�ִ��ѭ��*/
    char name[Arsize];
    cout << "�������������: ";
    cin >> name;
    cout << "�����������и�����ĸ����Ӧ��ASC��:\n";
    int i = 0;/*whileѭ���ĳ�ʼ��Ҳ����while��֮ǰ*/
    while (name[i] != '\0')      /*��������Ҽ���ַ��Ƿ�Ϊ���ַ����Ҳ��ǿ��ַ��ķ���
        ֵΪtrueʱִ��ѭ����*/
        /*����������дwhile�Ĳ���������while (name[i])������name[i]�ǳ����ַ���ֵΪ���ַ�
        �ı��룬�ñ���һ���Ƿ���ֵ��ת��Ϊ�������ͺ�һ����true����ʹ�ó������ִ��ѭ��
        �壬ֱ���������ַ�����������Ϊfalse����ֹѭ��*/
    {
        cout << name[i] << ": " << int(name[i]) << endl;/*�������е��ַ�ǿ������ת��ΪASC��*/
        i++;/*whileѭ������˵û�и��²��֣�ֻ�ǰѸ��²��ַŵ�ѭ������ִ�а���*/
    }
    return 0;
}