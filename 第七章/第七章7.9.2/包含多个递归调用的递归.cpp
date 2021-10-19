#include<iostream>
using namespace std;
const int len = 66;
const int divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
    //����Ҫ��һ������Ϸ�Ϊ�����С�ġ����ƵĹ���ʱ���ݹ�ǳ�����
    /*���ӣ����Ʊ�ߣ�������ˣ��ҵ��е㲢��������Ȼ��ͬ���Ĳ������ڱ�ߵ���벿�ֺ��Ұ벿�֡���һ��ϸ��ʱ�ɽ�
    ͬ���Ĳ������ڵ�ǰ��ÿһ���֡�*/
    /*�ݹ鷽����ʱ����Ϊ�ֶ���֮����*/

    /*����ʾ����ʹ��һ���ַ��������ַ���������Ϊ|�ַ����⣬����ȫ��Ϊ�ո�main����ʹ��ѭ������subdivide()����6��
    ÿ�ν��ݹ��ż�1������ӡ�õ����ַ�����ÿ�������ʾһ��ݹ�*/
    char ruler[len];//���ӵ��ܳ���
    for (int i = 1; i < len - 2; i++)
    {
        ruler[i] = ' ';/*����Ϊruler��char����������˵�Ԫ��֮�⣬����ȫ����ֵΪ�ո��ַ�*/
    }
    ruler[len - 1] = '\0';//����Ϊruler��char����������һ��Ԫ����Ϊ��ֵ�ַ���ʹ�����ַ�����ɱ���Ϊ�ַ�������
    int max = len - 2;//max�ǵ����ڶ���Ԫ��
    int min = 0;
    ruler[min] = ruler[max] = '|';/*����Ϊruler��char����������˵�Ԫ����Ϊ�ַ���|��*/
    cout << ruler << endl;
    for (int i = 1; i <= divs; i++)/*6��������64���ַ�*/
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < len - 2; j++)
        {
            ruler[j] = ' ';
        }
    }

    return 0;
}
void subdivide(char ar[], int low, int high, int level)/*����һ�ν������������ã��������õ�����������
                                                       ���ô������ּ��μ��������������������*/
{
    if (level == 0)//������������ʱ����level-1,��levelΪ0ʱ���������ٵ����Լ�
    {
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    /*subdivide���������Լ����Σ�һ�������벿�֣�һ������Ұ벿�֡�*/
    subdivide(ar, low, mid, level - 1);/*mid����Ϊ�Ҷ˵�*/
    subdivide(ar, mid, high, level - 1);/*mid����Ϊ��˵�*/
}