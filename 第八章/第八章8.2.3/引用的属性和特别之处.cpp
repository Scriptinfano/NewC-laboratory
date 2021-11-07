#include <iostream>
double cube(double a);//��ֵ����
double refcube(double& ra);//�����ô���
double refcube2(const double& ra);
using namespace std;
int main()
{
    double x = 3.0;

    cout << "ʹ�ð�ֵ���ݵĽ����";
    cout << cube(x) << " = cube of " << x << endl;
    cout << "ʹ�ð����ô��ݵĽ����";
    cout << refcube(x) << " = cube of " << x << endl;
    cout << "ʹ��const�����İ����ô��ݵĽ����";
    cout << refcube2(x) << " = cube of " << x << endl;

    double side = 3.0;
    double* pd = &side;
    double& rd = side;
    long edge = 5L;
    double lens[4] = { 2.0, 5.0, 10.0, 12.0 };
    double c1 = refcube(side);        // ra is side
    double c2 = refcube(lens[2]);     // ra is lens[2]
    double c3 = refcube(rd);          // ra is rd is side
    //double c4 = refcube(*pd);         // ra is *pd is side
    //double c5 = refcube(edge);        // edge�Ĳ������Ͳ���ȷ
    //double c6 = refcube(7.0);         // 7.0������ȷ������û�����ƣ���������������ʱ����
    //double c7 = refcube(side + 10.0); // side + 7.0������ȷ������û�����ƣ���������������ʱ���������еı������ᱨ��
    //�ں����е���ʱ����ֻ�ں��������ڼ����

    /*ע�⣺����������õĲ���������ֵ������Ӧ��const���ò��������Ͳ�ƥ�䣬�������������������ȷ������������
    ���������õĲ�����ֵ���ݸ����������������ò��������øı���*/

    /*������ʹ��const��ԭ��
    1��ʹ��const�����������޸����ݵı�̴���
    2��ʹ�����ܴ���const�ͷ�constʵ�η���ֻ�ܽ��ܷ�const����
    3��ʹ�����ܹ���ȷ���ɲ�ʹ����ʱ����*/
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double& ra)
{
    ra *= ra * ra;
    return ra;
}

double refcube2(const double& ra)
{
    return ra * ra * ra;
}

/*�����Բ��������޸ģ�ͬʱ��Ҫʹ�����ã���Ӧʹ�ó������ã�����������У�Ӧ�ں���ԭ�ͺͺ���ͷ������const��
double refcube(const double &ra);
�����������ִ����޸���ra��ֵʱ�ᱨ�������ݱȽϴ󣬿���ʹ�����ò�����
��ֵ���ݵĺ���������ʹ�ö������͵�ʵ�Σ����磺
double z = cube(x + 2.0);  // evaluate x + 2.0, pass value
z = cube(8.0);             // pass the value 8.0
int k = 10;
z = cube(k);               // convert value of k to double, pass value
double yo[3] = { 2.2, 3.3, 4.4};
z = cube (yo[2]);          // pass the value 4.4
���������ò����ĺ����У��������ò��������Ƹ��ϸ񣬲��������Ǳ����������Ǳ��ʽ�����磺
double z = refcube(x + 3.0); // should not compile
���ȣ�x+3.0����double�͵ı��������򽫴���һ����ʱ�������������������ʼ��Ϊ���ʽx+3.0��ֵ��Ȼ��ra��Ϊ����ʱ������
����
*/

/*��ʱ���������ò�����const*/
/*���ʵ�κ����ò�����ƥ�䣬C++��������ʱ���������ҽ�������Ϊconst����ʱ��C++��������������
�����ò�����const������£����������������������������ʱ����
1��ʵ�ε�������ȷ����������ֵ
2��ʵ�ε����Ͳ���ȷ��������ת��Ϊ��ȷ������*/

/*ʲô����ֵ��
��ֵ�������ɱ����õ����ݶ������磺����������Ԫ�ء��ṹ��Ա�����á�������õ�ָ��
����ֵ���������泣��������������������ַ�����������������ַ��������ɵ�ַ��ʾ�������������
���ʽ��Ŀǰ�����������const������������ֵ��ֻ������������ǿ����޸ĵ���ֵ����const����
�ǲ����޸ĵ���ֵ*/

/*������ʹ��const��ԭ��
1��ʹ��const�����������޸����ݵı�̴���
2��ʹ��constʹ�����ܴ���const�ͷ�constʵ�Σ�����ֻ�ܽ��ܷ�const����
3��ʹ��const����ʹ��������ȷ���ɲ�ʹ����ʱ����*/

/*���������A�����У�����ԭ����ʹ����const���ε����ã����ں�����������ʱ
ʹ���˱��ʽ���ݣ�����������ȷ�ģ�����double����
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;
    cout << "ʹ��const�����ı����ô��ݵĽ����\n";
    cout << refcube(x) << "= cube of " << x << endl;//cube����������˼
    double a = 3.0;
    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ\n";
    cout << refcube(x + a) << "= cube of " << x + a << endl;
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

���������B�����к���ԭ����ʹ����const���ε����ã����ں�����������ʱ
ʹ���˱��ʽ���ݣ���������һ�������Ǵ���ģ�����ԭ��Ҫ��double,���ڴ���
����ʱ��������һ����intֵ��
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    int q = 2;
    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ��������һ�����Ͳ���ȷ��\n";
    cout << refcube(q + x) << " =cube of " << x + q<<endl;
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

���������C�����к���ԭ����ʹ����const���ε����ã����ں�����������ʱ
ʹ���˱��ʽ���ݣ������������Ǵ���ģ�����ԭ��Ҫ��double,���ڴ���
����ʱ�����ʽ��������������intֵ��
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ���������Ͷ�����ȷ��\n";
    cout << refcube(q + q) << " =cube of " << q + q << endl;

    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

���������D�����к���ԭ����ʹ����const���ε����ã����ں�����������ʱ
ʹ���˱��ʽ���ݣ�������������ȷ�ģ�������һ��ʹ�������֣������ֺ���ĸ��ɱ��ʽ
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;

    cout << "��ʹ�����õ�����£��ں����д��ݴ����ֵı��ʽ���������Ͷ���ȷ��\n";
    cout << refcube(3.0 + q) << " =cube of " << 3 + q << endl;
\
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}


�����ĸ�С�������һ�����������
#include <iostream>
using namespace std;
double refcube(const double &ra);
int main()
{
    double x = 3.0;
    cout << "ʹ��const�����ı����ô��ݵĽ����\n";
    cout << refcube(x) << "= cube of " << x << endl;//cube����������˼

    double a = 3.0;
    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ(���Ͷ���ȷ)\n";
    cout << refcube(x + a) << "= cube of " << x + a << endl;

    int q = 2;
    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ��������һ�����Ͳ���ȷ��\n";
    cout << refcube(q + x) << " =cube of " << x + q<<endl;


    cout << "��ʹ�����õ�����£��ں����д��ݱ��ʽ���������Ͷ�����ȷ��\n";
    cout << refcube(q + q) << " =cube of " << q + q << endl;

    cout << "��ʹ�����õ�����£��ں����д��ݴ����ֵı��ʽ���������Ͷ���ȷ��\n";
    cout << refcube(3.0 + q) << " =cube of " << 3 + q << endl;
\
    return 0;
}
double refcube(const double &ra)
{
    return ra * ra * ra;
}

���ϳ���˵�����ʽ�����Ĵ���ֻ���ں���ԭ����ʹ����const���õ������ʵ��*/

/*����ԭ����ʹ���������βε�ǰ���£����ʵ�ε����ͺͺ���ԭ�����βε����Ͳ�ƥ��
�������³���
#include<stdio.h>
void swap(int &a,int &b);
int main()
{
    int a=1,b=2;
    swap(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
void swap(int & a, int & b) // use references
{
    int temp;

    temp = a; // use a, b for values of variables
    a = b;
    b = temp;
}
�ó�������int�Ͳ������ݸ���ԭ����ӦΪ����doubleֵ�ĺ�����������������������ʱ����
�������Ƿֱ��ʼ��Ϊ3��5��Ȼ�󽻻���ʱ���������ݣ���a��b���ֲ��䡣������ʱ��������ֹ
��ͼ���޸���Ϊ�������ݱ����Ľ������ò����ĺ���ʵ���书��
*/

/*C11��׼��������һ������--��ֵ���ã��������ÿ�ָ����ֵ����ʹ��&&������*/