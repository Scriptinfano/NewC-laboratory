#include<iostream>
#include<string>
using namespace std;
const int SEASONS = 4;
const char* seasons[SEASONS] = { "春季","夏季","秋季","冬季" };
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
        cout << "请输入" << seasons[i] << "的营业额：";
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
    cout << "四季的营业额如下：" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << arr->spends[i]<< endl;
    }
}