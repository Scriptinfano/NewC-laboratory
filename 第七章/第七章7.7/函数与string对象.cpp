#include<iostream>
#include<string>
using namespace std;

void display(const string sa[], int n);//��һ��������ָ��string����ĳ���ָ��
int main()
{
    const int size = 5;//ȫ�ֳ���
    /*string������Ȼ����;�Ϻ�C����ַ�����ͬ������C����ַ���ʵ���������飬string�����������˵string�������
    �������ơ����Խ�һ���ṹ������һ���ṹ�������鲻�С���Ҫ����ַ���ʱ������ѡ���Ǵ���һ��string��������Ǵ���
    һ����ά��char���顣*/
    //����ʾ��������һ��string�������飬���������鴫�ݸ�һ����������ʾ����
    string list[size];
    cout << "��������ϲ����" << size << "�仰��\n";
    for (int i = 0; i < size; i++)
    {
        cout << "��" << i + 1 << "�仰:";
        getline(cin, list[i]);
    }
    cout << "���������仰�ֱ��ǣ�\n";
    display(list, size);
    return 0;
}
void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "��" << i + 1 << "�仰��" << sa[i];
    }
}
