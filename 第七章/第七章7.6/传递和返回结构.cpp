#include<iostream>
using namespace std;
struct travel_time
{
	int hours;
	int mins;
};//�ṹ������÷ŵ�main����֮�⣬�ҷŵ�����Ŀ�ͷ���Ա㺯��ԭ������ʱ��ʶ��ṹ������
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
const int mins_per_hr = 60;
int main()
{
	/*�ṹ��������Ϊ���ӽ��ڻ����ĵ�ֵ�������ṹ����������ϳɵ���ʵ������ݶ��󣬸�ʵ�屻��Ϊһ��
	����*/
	/*�������Է��ؽṹ���ṹ��ֻ�ǽṹ�����Ʋ��ǵ�ַ��Ҫ��õ�ַ����ʹ�õ�ַ�����&*/
	/*��ֵ���ݽṹ��ȱ�㣺����ṹ�ǳ������ƽṹ�������ڴ�Ҫ�󣬽���ϵͳ�����ٶȡ����C���Գ���
	Ա�����ʱ����ô��ݽṹ�ĵ�ַ��Ȼ��ʹ��ָ�������ʽṹ�����ݡ�C++���е�����ѡ�񣺰����ô��ݣ��ڰ������ۣ�*/
	/*���½��ܴ��ݺͷ��������ṹ*/

	//��һ�������г�ʱ�䣬��Щ��ͼָ����A��B��Ҫ3Сʱ50���ӣ�����B�ǵ�C����Ҫ1Сʱ25����
	//����ʱ��Ӧ�ýṹ��ʾ��һ����Ա��ʾСʱֵ����һ����Ա��ʾ����ֵ������ʱ�������ʱ������ֵת��
	//ΪСʱֵ.���������������ӳ�Ա��ӣ�Ȼ��ͨ��������������Ϊ60���õ�Сʱֵ��ͨ����ģ�������%��
	//�õ�ʣ��ķ�����
	travel_time day1 = { 5,45 };
	travel_time day2 = { 4,55 };

	travel_time trip = sum(day1, day2);
	cout << "��A���е�C��������Ҫ����ʱ���ǣ�";
	show_time(trip);


	return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;//�ٶ���һ���ṹ�����洢����ֵ�ĺ���Сʱֵ�ĺ�
	total.mins = (t1.mins + t2.mins) % mins_per_hr;//���з���֮����ת��Ϊ����Сʱֵ����ʣ�µķ�����
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / mins_per_hr;//����ʱ��ת��ΪСʱֵ
	return total;
}
void show_time(travel_time t)
{
	cout << t.hours << "Сʱ" << t.mins << "����";
}
//travel_time�����ڱ�׼���������ɱ��������������������ķ������ͺͺ����Ĳ�������