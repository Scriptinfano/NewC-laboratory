/*ԭʼ�ĳ����嵥7.7����
#include <iostream>
using namespace std;
const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "������Ҫ��дΪ��double����: ";
        double factor;

        ����������͵Ĵ���
begin:cin >> factor;
if (cin.fail())
{
    cin.clear();
    cin.sync();
    cin.ignore();
    cout << "�������ʹ����������룺";
    goto begin;
}

revalue(factor, properties, size); �ظ�ֵ��������
show_array(properties, size); ��ʾ��������
    }
    cout << "Done.\n";

    system("pause");
    return 0;
}

int fill_array(double ar[], int limit)
{

    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "�����" << (i + 1) << "��Ԫ�ص�ֵ" << ": ";
        cin >> temp;
        if (cin.fail() || temp < 0) // bad input
        {
            cin.clear();
            cin.sync();
            cin.ignore();
            cout << "�������ʹ�����������";
        }
        ar[i] = temp;
    }
    return i;
}


void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "��" << (i + 1) << "��Ԫ�ص�ֵ" << ": $" << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}*/

/*ʹ��ָ�������޸ĺ�ĳ���*/
#include <iostream>
using namespace std;
const int Max = 5;
double* const fill_array(double* begin, double* end);//�������ص�ָ�벻�ܱ䶯ָ�򣬿����޸�ָ��ָ���ֵ
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);/*r���ظ�ֵ����*/

int main()
{

    double properties[Max];

    double* const size = fill_array(properties, properties + (Max - 1));/*�������ص�ָ��ָ�������������λ��,�������ú������ַ����ָ��size*/
    cout << "��һ���������������������ʾ��" << endl;
    show_array(properties, size);//��һ�������������׵�ַ���ڶ�����������亯��������λ�õĵ�ַ

    cout << "������Ҫ��дΪ��double����: ";
    double factor;
    /*����������͵Ĵ���*/
begin:cin >> factor;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        cin.ignore();
        cout << "�������ʹ����������룺";
        goto begin;
    }
    revalue(factor, properties, size);//�ظ�ֵ��������
    show_array(properties, size);//��ʾ��������

    cout << "���\n";

    system("pause");
    return 0;
}

double* const fill_array(double* begin, double* end)
{
    double temp;
    double* p1 = begin;
    for (int i = 0; p1 != end; p1++, i++)
    {

        cout << "�����" << (i + 1) << "��Ԫ�ص�ֵ" << ": ";
    begin:cin >> temp;
        if (cin.fail() || temp < 0)
        {
            cin.clear();
            cin.sync();
            cin.ignore();
            cout << "�������ʹ�����������";
            goto begin;
        }
        *p1 = temp;
    }

    return p1;
}


void show_array(double* begin, double* end)
{

    for (double* p2 = begin; p2 != end; p2++)
    {
        cout << *p2 << "\t";
    }
}

void revalue(double r, double* begin, double* end)
{
    double* p3 = begin;
    while (p3 != end)
    {
        *p3 = r;
        p3++;
    }
}