#include<iostream>
#include<array>
#include<string>
using namespace std;
const int seasons = 4;
void show(array<double, seasons>da);//array��������Ͳ���array������array<�������ͣ�intֵ>
void fill(array<double, seasons>* pa, const array<string, seasons>sname);
int main()
{

	/*�������ڽṹ���ṹ��̷������Щ��������Ҳ��������*/
	const array<string, 4>snames = { "����","�ļ�","�＾","����" };/*�������Ҫ�޸Ķ�������Ҫ������ĵ�ַ���ݸ�����
	����һ�»������һ�ַ���--���ã�*/
	//��array�����У����Ҫ�ں����д���array����array�����������array<�������ͣ�intֵ>
	/*ģ��array����ֻ�ܴ洢�����������ͣ������Դ洢�����*/
	array<double, seasons>expenses;//�����洢��֧��array����
	fill(&expenses, snames);//������亯��
	show(expenses);//����չʾ����

	return 0;
}

void fill(array<double, seasons>* pa, const array<string, seasons>sname)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << "����" << sname[i] << "��֧��";
		cin >> (*pa)[i];/*pa��һ��ָ��array<double,4>�����ָ�룬���(*pa)[i]�Ǹö����һ��Ԫ�ء�������������ȼ�
		��Ӱ�죬���űز�����*/
	}
}
void show(array<double, 4>da)
{
	double total = 0.0;
	for (int i = 0; i < 4; i++)
	{
		cout << "�ļ��Ŀ�֧����Ϊ��\n" << da[i] << "$" << endl;
		total += da[i];
	}
	cout << "�ܿ�֧=" << total << "$" << endl;
}