#include<iostream>
#include<cmath>
//��������Ҫʹ����ѧ�������е�atan2()��������ɸ���x��y��ֵ����Ƕ�
//atan()������������atan2���������ô�����ͬ��������������180��֮�ں�֮��ĽǶ�
using namespace std;
struct location//���ڴ洢����Ľṹ
{
    double x;
    double y;
};
struct polar//���ڴ洢������Ľṹ
{
    double distance;
    double angle;
};
polar rect_to_polar(location xypos);
void show_polar(polar dapos);
int main()
{
    //���������ṹ�����ڱ�ʾ���ֲ�ͬ������λ�õķ�����Ȼ�󿪷�һ����������һ�ָ�ʽת��Ϊ��һ�ָ�ʽ
    //����ʾ���

    location rplace;
    polar pplace;

    cout << "����������x��y��ֵ��";
    while (cin >> rplace.x >> rplace.y)
        /*��ϰ�������ʹ��cin������whileѭ����
        cin��istream���һ�����󣬳�ȡ�����>>�����Ϊʹ��cin>>rplace.xҲ��һ��istream����ʮһ�½�����
        ���������ʹ�ú���ʵ�ֵģ�ʹ��cin>>rplace.xʱ�����򽫵���һ���������䷵��һ��istreamֵ�����istream
        ֵ��ʹ��whileѭ��������Ϊ��*/
    {
        pplace = rect_to_polar(rplace);//����ת������
        show_polar(pplace);//��ʾת����Ľṹ
        cout << "������һ�������ֵ���������������ַ��˳�����";
    }
    cout << "Done";


    return 0;
}
polar rect_to_polar(location xypos)
{
    polar answer;//����һ����ת���ṹ������ͬ�Ľṹ����
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);//atan2�������ص��ǻ����ƵĽǶȣ������Ҫ����ת����������ת��Ϊ�Ƕ���

    return answer;
}
void show_polar(polar dapos)
{
    const double red_to_deg = 57.3;
    cout << "����=" << dapos.distance << endl;
    cout << "�Ƕ�=" << dapos.angle * red_to_deg << endl;
}