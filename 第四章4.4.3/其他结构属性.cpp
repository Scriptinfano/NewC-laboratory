#include <iostream>;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; //ʹchoice�ṹ�ĳ�Աֵ��bouquet�ṹ�д洢��ֵ��ͬ
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    /*ͬʱ��ɶ���ṹ�ʹ����ṹ������ֻ����������������ֵ��*/
    struct parks
    {
        char location;
        long long phonenumber;
        double gateprice;
    }boston, number, high;

    /*ͬʱ��ɶ���ṹ�ͳ�ʼ��������������������ͬʱ��ֵ��*/
    struct familys
    {
        int members;
        char membername[100];
        long membeiphonenumber;
    }familiyofhuang = { 7,"shit", 18292866329 };

    /*����ṹʱ������ʡ�Խṹ����*/
    struct       //�ṹ����Ϊ��
    {
        int x;   //������Ա����������
        int y;
    } position;  //

    return 0;
}