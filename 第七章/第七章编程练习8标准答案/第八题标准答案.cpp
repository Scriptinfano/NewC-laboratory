#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "����","�ļ�","�＾","����" };
void fill(double arr[],int size);
void show(const double arr[],int size);
int main()
{
    double spend[4] = { 0 };
    fill(spend,SEASONS);
    show(spend, SEASONS);

    system("pause");
    return 0;
}
void fill(double arr[],int size)
{
    double temp;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "������" << seasons[i] << "��Ӫҵ�";
    begin:cin >> temp;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            cin.ignore(1024, '\0');
            goto begin;
        }
        arr[i] = temp;
    }
    
}
void show(const double arr[],int size)
{
    double total = 0.0;
    cout << "�ļ���Ӫҵ�����£�" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << arr[i] << endl;
    }
}