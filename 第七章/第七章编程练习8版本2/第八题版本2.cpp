#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "����","�ļ�","�＾","����" };
struct spend
{
    double spends[SEASONS];
 
};
void fill(spend arr[]);
void show(spend arr[]);
int main()
{
    spend pay =
    {
        {0}
    };
    fill(&pay);
    show(&pay);

    system("pause");
    return 0;
}
void fill(spend arr[])
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
        arr->spends[i] = temp;
    }

}
void show(spend arr[])
{
    double total = 0.0;
    cout << "�ļ���Ӫҵ�����£�" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << arr->spends[i]<< endl;
    }
}