//���������ڽṹ
/*C++�������õ�Ŀ�ľ���Ϊ�˽ṹ���࣬����һ�㲻���ڻ����������͡�
ʹ�ýṹ���ò����ķ�ʽ��ʹ�û�������������ͬ���������ṹ����ʱʹ��&*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};
void set_pc(free_throws& ft);//������ָ��ýṹ��������Ϊ����
void display(const free_throws& ft); //��ϣ�������޸Ĵ���Ľṹʱʹ��const
free_throws& accumulate(free_throws& target, const free_throws& source);//�ú�������һ��ָ��ṹ�����á�����ֻ�޸ĵ�һ�������нṹ��ֵ�����Ե�һ������û�м�const����
int main()
{
    /*��ʼ������ṹ���������ʼ���ĳ�Ա��ָ���ĳ�Ա�����٣����µĳ�Ա������Ϊ0*/
    free_throws one = { "Ifelsa Branch", 13, 14 };
    free_throws two = { "Andor Knott", 10, 16 };
    free_throws three = { "Minnie Max", 7, 9 };
    free_throws four = { "Whily Looper", 5, 9 };
    free_throws five = { "Long Long", 6, 14 };
    free_throws team = { "Throwgoods", 0, 0 };

    free_throws dup;

    set_pc(one);//���ṹ�еĳ�Ա����percent�������Ȼ�󽫽��������Ա����percent
    display(one);//չʾ����percent֮��Ľṹone
    accumulate(team, one);//��temp��one�е������Ա�������мӺͲ��������������temp�ṹ���������½ṹ��percent��Ա
    display(team);//չʾ�仯֮���temp�ṹ

    display(accumulate(team, two));
    /*35�д�����⣺���ṹ����team��Ϊ��һ���������ݸ���accumulate()���ں���accumulate()
    ������targetָ��team������accumulate()�޸�team���ٷ���ָ����������*/
    accumulate(accumulate(team, three), four);
    /*38�д�����⣺��һ��������accumulate()�����ķ���ֵ�����ص����޸ĺ��team�ṹ
    ���Ե�һ������ʵ���ϻ���team���ⲿ�����ĵڶ��������ǽṹ����four�����޸ĺ��team�ṹ
    ��four�ṹ����ӣ����ѽ���ٸ���team�ṹ������ⲿ���������޸������ε�
    team�ṹ*/
    display(team);//��ʾ�޸����ε�team�ṹ

    dup = accumulate(team, five);
    cout << "Displaying team:\n";
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);//���д����ִ�н����47�д����ִ�н����ͬ
    set_pc(four);//���ṹ����four�е�percent��Ա�������������ʼ��

    accumulate(dup, five) = four;/*��ֵ���ص����޸ĺ�Ľṹ����dup���ǿ��Ա���ֵ�ģ���ֵ�ǽṹ����four��
    ִ�н���ǽ�four�����ݸ���ճ�����ṹ����dup��*/
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}
void display(const free_throws& ft)//��ʾ�����д�ŵ�����
{

    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}
void set_pc(free_throws& ft)//�õ�madeռattempts�İٷֱ�
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws& accumulate(free_throws& target, const free_throws& source)
{
    /*�ֱ�Դ���ú����������ṹ�е�����made��attempts���мӺͲ����������õ��Ľ�������������ĵ�һ���ṹ*/
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);//�õ��Ӻͽṹ��madeռattempts�İٷֱȣ������õ��Ľ�������Ӻͽṹ�еĳ�Ա����percent
    return target;//���ص������ã���ζ�ŷ��ص���������ݸ�accumulate()��team����
}

/*���ṹ�еĳ�Ա����percent�Ƿ����ı䣬�Ӷ�������ýṹ�����ܷ�ı�ṹ�е�ֵ��ʵ�����
#include <iostream>
using namespace std;
double refcube(const double &ra);
struct test
{
    int first;
    int second;
    float percent;
};
void set_percent(test &ft);
void display(const test &ft);
int main()
{
    test test1 = {2, 3};
    set_percent(test1);
    cout << "����set_percent()����֮��Ľṹ�����ṹ�еĳ�Ա����percent�Ƿ����ı䣬�Ӷ�������ýṹ�����ܷ�ı�ṹ�е�ֵ��" << endl;
    display(test1);
    cout << endl;
    cout << "��ʵ֤�����������ýṹ�����޸�ʵ�ʽṹ��ֵ" << endl;

    return 0;
}
void set_percent(test &ft)
{
    if (ft.second != 0)
        ft.percent = 100.0f * float(ft.first) / float(ft.second);
    else
        ft.percent = 0;
}
void display(const test &ft)
{
    cout << "first: " << ft.first <<endl;
    cout << " second: " << ft.second <<endl;
    cout << "percent" << ft.percent << endl;
}
�����ô��ݲ���ֱ���޸�ԭ����
*/

/*Ϊʲô����Ҫ�������ã������������õ�������ʲô��
��ͳ���ػ��ƺͰ�ֵ���ݺ����������ƣ�����ؼ���return����ı��ʽ������������ظ����ú���
�Ӹ�����˵�����ֵ�����Ƶ�һ����ʱλ�ã������ó���ʹ�����ֵ
double m=sqrt(16.0);
cout<<sqrt(25.0);
��һ������У�ֵ4.0�����Ƶ�һ����ʱλ�ã�Ȼ�󱻸��Ƶ�m���ڶ�������У�ֵ5.0�����Ƶ�һ����ʱ
λ�ã�Ȼ�󱻴��ݸ�cout��

dup=accumulate(team,five);
���accumulate����һ���ṹ��������ָ��ṹ�����ã����������ṹ���Ƶ�һ����ʱλ�ã�
�ٽ�����������Ƹ�dup�����ڷ���ֵΪ����ʱ����ֱ�Ӱ�team���Ƶ�dup��Ч�ʸ���

�������õĺ���ʵ�����Ǳ����õı����ı���*/

/*��������ʱ��Ҫע�������
����Ҫ��һ����Ӧ���ⷵ�غ�����ֹʱ���ٴ��ڵ��ڴ浥Ԫ����
����Ĵ���Ӧ�����д
const free_throws & clone2(free_throws & ft)
{
    free_throws newguy;//�ں����ڲ�������һ���ṹ����ע������ṹ������������������˱�����֮�ڣ�Ҳ����˵�����������󣬸ýṹ���󽫲�����
    newguy = ft;//��ָ��ĳ�ṹ������ft�е����ݸ��Ƶ�newguy��
    return newguy;//����һ��ָ����ʱ���������ã����Ǻ���������Ϻ���ʱ�������������ڣ������Ǵ����
}
�������һ��Ϊ���ⷵ�غ�����ֹʱ���ٴ��ڵ��ڴ浥Ԫ��Ӧ���÷���һ����Ϊ�������ݸ�����������
��Ϊ���������ý�ָ����ú���ʹ�õ����ݣ���˷��ص�����Ҳ��ָ����Щ���ݣ����������
accmulate����
�������������new�������µĴ洢�ռ�
const free_throws & clone(free_throws & ft)
{
    free_throws *pt;//����һ��ָ��free_throws�ͽṹ��ָ��
    *pt=ft;//��ָ������þ��ǽṹ����Ȼ������ft��ָ��Ľṹ�е����ݸ��Ƶ��½ṹ��
    return *pt;//���ؽṹ������
}
���������������壬��������ʹ�����clone()����
free_throws & jolly=clone(three);//������Ȼ���ص������ã�ҲӦ������һ��������ͬ�����ý��ܺ����ķ���ֵ
��ʱ��jolly��Ϊ�½ṹ�����ã��ڲ���Ҫnew������ڴ�ʱ��Ӧʹ��delete���ͷ��ڴ棬����clone()������
��new�ĵ��ã�ʹ����������ʹ��delete���ͷ��ڴ�*/

/*Ϊ�ν�const�������÷�������
accmulate(dup,five)=four;
    ���Ƚ�five��������ӵ�dup�У���ʹ��four�����ݸ���dup�����ݡ�Ϊʲô��ֵ���Ա��޸ģ�
����Ϊ�������ص���ָ��dup�����ã�����ʶ��һ���ڴ�顣���溯���ķ�����������ֵ���޷�ͨ����ַ���ʵ�ֵ��
������ֵ��������ֵ����10.0���ͱ��ʽ��x+y����
    Ϊʲô���溯���ķ���ֵ����ֵ����Ϊ���ַ���ֵλ����ʱ�ڴ浥Ԫ�У�return��ԭ������ȼ��������ʽ��ֵ
Ȼ��ֵ������ʱ�ڴ浥Ԫ�У�Ȼ����ʱ�ڴ浥Ԫ�е�������Ϊ��ֵ������ֵ��һ�����е���һ�����ʱ����ʱ�ڴ�
��Ԫ�������ڡ�
    ���Ҫʹ�����õķ���ֵ����������ִ�и���������ֵ�ٸ�ֵ�Ĳ�����accumulate(dup,five) = four;����
���Ը������ķ���ֵ��const���Σ�const free_throws & accumulate(free_throws & target, const free_throws & source);
������֮�󣬸���������ֵ��ֵ�������ǷǷ��ġ����Ǻ����ķ���ֵ��Ȼ������Ϊ�������ݸ���������
��display���β�Ҳ��const free_throws &��ʱ��display(accumulate(team, two)���������ǺϷ���
�����������accumulate(accumulate(team, three), four);��һ���������ص���const free_throws &�͵����ã�������㺯��
accumulate�ĵ�һ���ββ���const����free_throws&�͵����ã��������Ͳ�ƥ���ǲ��Ϸ��ģ���������Ŀ���ǰ�team,three,four����
�ṹ�е�����ȫ�����Ȼ��һ���ٸ���team�ṹ���õ�һ���µ�team�ṹ����ȷ�������ǣ�
accumulate(team,three);
accumulate(team,four);//��ʱ��һ������team�Ѿ��Ǿ�����three���мӺͲ���֮����½ṹ�ˣ�����½ṹ�ٺ�four�ṹ�����ʵ�ֶ�team�ṹ�ĸ��£�ʵ���������ṹ��Ӳ������������һ���ṹ��Ŀ��
*/