#include<iostream>
#include<cstring>/*���ַ���������ز����ĺ�����ͷ�ļ�*/
#include<string>/*������string��ģ�������*/
using namespace std;
struct car_info {
	string manufacturer;
	int date;
};/*�����ṹ��car_info*/

int main()
{
	int car_number;
	cout << "�ж���������";
	cin >> car_number;
	car_info* pcar = new car_info[car_number];;/*����ָ���ɽṹcar_info��ɵ������ָ�����pcar*/
	/*��new���������ṹ��Ķ�̬������﷨������ָ�룩���ṹ��* ָ����=new �ṹ��[����Ԫ��];*/




	for (int i = 0; i < car_number; i++) {
		cout << i + 1 << "�ų�" << endl;/*��Ҫ��ʱ���һ��ֵ�������ı����ֵʱ�Ϳ���ֱ�ӽ�������ʽ����
												��������*/
		cout << "������������:";
		cin.get();/*��ȡ����һ��cin�����������Ļ��з�����Ϊ�����ڶ�ȡ���ݵ��������ʱֻ�ڻ�����Ϊ��ʱ�ȴ��û�����*/
		/*���뺯����ϰ:
		1��getline(cin,�ַ�����)��������ͷ�ļ�string�У������Ƕ�ȡ���̻������е��ַ������������з���ʹ��һ����������ʹ��cin.get()
								  �Ϳ������¶�ȡ����
		2��cin.getline(��������Ҫ��ȡ���ַ���)��getline()��Ϊcin�ĳ�Ա������������iostreamͷ�ļ��У��ú���������
												�������ڶ�������Ҫ�ѿ��ַ�����*/
		getline(cin, pcar[i].manufacturer);
		cout << "�������������:";
		cin >> pcar[i].date;
		cin.get();

	}
	cout << "here is your collection:" << endl;
	for (int i = 0; i < car_number; i++)
	{
		cout << pcar[i].date << " " << pcar[i].manufacturer;
	}
	return 0;
}