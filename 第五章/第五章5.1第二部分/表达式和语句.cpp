/*for���Ŀ��Ʋ���ʹ���������ʽ���κ�ֵ���κ���Ч��ֵ�����������϶��Ǳ��ʽ*/
#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);/*cout.setf(ios_base::boolalpha)����ʹ��cout����ʾ
                                   boolֵʱ����Ĭ�ϵĽ���ת��Ϊ1��0����ֱ����ʾtrue��
                                   false*/
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout.setf(ios_base::internal);
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    /*for�ṹ�Ŀ��Ʋ��ֵ������﷨��
    for(i=0;i<5;i++)
    for(for-init-statement condition;expression)�˴�ֻ��һ���ֺţ�for-init-statement
    ����Ϊһ����䣬��������Լ��ķֺţ����ȿ����Ǳ��ʽ��䣬Ҳ���������������־䷨
    ����������滻�˺�����ֺŵı��ʽ��*/
    /*for (int i = 0; i < 6; i++)
        cout << "C++֪��ѭ��";
    cout << i << endl;����֤����for-init-statement���ֱ���ֻ������for�����
    Ҳ����˵���������뿪ѭ�������ֱ�������ʧ*/
    return 0;
}