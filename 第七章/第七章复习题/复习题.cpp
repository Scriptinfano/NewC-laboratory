/*
1��ʹ�ú�������������
��д����ԭ�ͣ����������ӿڣ����ú��������ݺ������������庯��

2���봴�������������ƥ��ĺ���ԭ��
a��igor()û�в�����û�з���ֵ
   void igor();
b��tofu()����һ��int����������float
   float tofu(int);
c��mpg��������double������������һ��float
   double mpg(double,double);
d��summation()��long�����������鳤����Ϊ������������һ��longֵ
   long summation(long sa[],int);
e��doctor����һ���ַ��������������޸ĸ��ַ�����������doubleֵ
   double doctor(const char*str);
f��ofcourse()��boss�ṹ��Ϊ������������ֵ
   void plot(boss);
g��plot()��map�ṹ��ָ����Ϊ����������һ���ַ���
   char*plot(map*p1); ע�⺯�����ܷ����ַ�����ֻ�ܷ����ַ���ָ��

3����д�������������ĺ�����int�����������鳤�Ⱥ�һ��intֵ���������������Ԫ�ض�����Ϊ��intֵ
#include<iostream>
using namespace std;
void hanshu(int name,int size,int n);
int main()
{
    int 1[3]={2,3,4};
    hanshu(1,3,4);
    return 0;
}
void hanshu(int name*,int size,int n)
{
    for(int i=0;i<size;i++)
    {
        name[i]=n;
    }
}

4����дһ������3�������ĺ�����ָ�����������е�һ��Ԫ�ص�ָ�롢ָ�������������һ��Ԫ�غ����ָ���Լ�һ��intֵ
�����������е�ÿ��Ԫ�ض�����Ϊ��intֵ��
#include<iostream>
using namespace std;
void function(int* begin, int* end, int n);
int main()
{
    int array[3] = { 2,3,4 };
    int size = sizeof(array) / sizeof(array[0]);
    int* begin = &array[0];
    int* end = &array[size - 1];
    int n = 4;
    function(begin, end, n);
    cout << "�޸ĺ�������ǣ�" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
void function(int* begin, int* end, int n)
{
    int* pointer;
    for (pointer = begin; pointer != end; pointer++)
    {
        *pointer = n;
    }
}

5����д��double�����������鳤����Ϊ�����������ظ����������ֵ�ĺ������ú�����Ӧ�޸����������
#include<iostream>
using namespace std;
double fun(const double *pointer, int n);
int main()
{
    double array[3] = { 15.4,4.7,56.2 };
    int n = sizeof(array) / sizeof(array[0]);
    double result = fun(&array[0], n);
    cout << "ԭʼ����Ϊ��" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
        if (i == n - 1)
        {
            cout << endl;
        }
    }
    cout << "������������Ϊ" << result;
    return 0;
}

double fun(const double *pointer,int n)
{
    int max_value = pointer[0];
    for (int i = 0; i < n; i++)
    {
        if (max_value < pointer[i])
        {
            max_value = pointer[i];
        }
    }
    return max_value;
}

6��Ϊʲô��������Ϊ�������͵ĺ�������ʹ��const�޶���
C++�����еĲ�����������ֵ���ݵ���ʽʵ�ֵģ���������ʵ�α�ʾ��ֵ�ĸ�������ʽ���ݸ��������βΣ���ˣ���ʵ�εĴ���
����������������ʵ�β����ᱻ�޸ġ�������ָ����ʽ���ݻ������������������ͣ������ͨ����ַ��ָ���ӷ��ʺʹ�ȡ��
�������е����ݣ������Ҫʹ��const�ؼ��ֶ����ݽ��б�������

7��C++����ʹ�������ַ����ַ�����
�ַ��������ʽ����˫���ű�ʶ���ַ���������ʽ��ָ���ַ������ַ���ָ�����ʽ��

8����дһ��������ԭ��Ϊint rplace(char*str,char c1,char c2); �ú������ַ��������е�c1���滻Ϊc2��������
�滻����
#include<iostream>
using namespace std;
int replace(char* str, char c1, char c2);
int main()
{
    char str1[] = { 'a','b','c','c','o','c','e','\0' };
    char* str = &str1[0];
    char c1 = 'c';
    char c2 = 'i';
    int number = replace(str, c1,c2);
    cout << "�滻֮�����ַ���Ϊ:" << str1 << endl;

    return 0;
}
int replace(char* str, char c1, char c2)
{
    int counter = 0;
    for (; *str != '\0'; str++)
    {
        if (*str == c1)
        {
            *str = c2;
            counter++;
        }
    }
    return counter;
}

9�����ʽ*"pizza"�ĺ�����ʲô��"taco"[2]�أ�
˫���ű�ʶ�����ַ����������ַ�������ʹ�õ�һ��Ԫ�صĵ�ַ���б�ʾ��C++��ͨ�������Ԫ�صĵ�ַʵ�����ַ��������Ĵ�
��λ�õĲ�ѯ�����ͨ��*�������*"pizza"�ܹ�ֱ���ҵ��ַ�'p'��ͬ��"taco"[2]��ʾͨ���ַ��������ַ��ĵ�ַ���ҵ�
���ַ��ĵ�����Ԫ��'c'��

10��C++����ֵ���ݽṹ��Ҳ�����ݽṹ�ĵ�ַ�����glitz��һ���ṹ��������ΰ�ֵ���ݣ���δ������ĵ�ַ��������
������������ʲô
��ֵ���ݵ����ӣ�
#include<iostream>
using namespace std;
struct glitz
{
    int n;
    double x;
};
struct result
{
    int al;
};
result function(glitz);
int main()
{
    glitz apple = { 12,53.2 };
    function(apple);
    return 0;
}
result function(glitz apple)
{
    double al = apple.n + apple.x;
    result banana;
    banana.al = al;
    return banana;
}

��ָ�봫�ݽṹ�ĵ�ַ
#include<iostream>
using namespace std;
struct glitz
{
    int n;
    double x;
};
struct result
{
    int al;
};
result function(const glitz*p);
int main()
{
    glitz apple = { 12,53.2 };
    function(&apple);
    return 0;
}
result function(const glitz *p)
{
    double al = p->n + p->x;
    result banana;
    banana.al = al;
    return banana;
}
��ֵ����Ч�ʵ��£�����ַ���ݿɽ�ʡʱ����ڴ棬�����ܱ���ԭʼ���ݣ���Ҫʹ��const

11������judge()�ķ�������Ϊint,��������һ�������ĵ�ַ��Ϊ��������const charָ����Ϊ������������һ��intֵ����
��д������ԭ��
int judge(const char*);

12�����������½ṹ������
struct applicant {
    char name[30];
    int credit_ratings[3];
};
a����дһ������������application�ṹ��Ϊ����������ʾ�ò���ָ��Ľṹ�����ݡ�
����ԭ�ͣ�void fun1(application);
�������ã�application stru1={{'a','b','c'},{12,15,345}};
         fun1(stru1);
�������壺
b����дһ������������application�ṹ�ĵ�ַ��Ϊ����������ʾ�ò���ָ��Ľṹ������













































































































































































































































*/