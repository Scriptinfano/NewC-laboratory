#include <iostream>;
using namespace std;
int main()
{
	/*�ṹ�����������
	�ṹ������һ����Ԫ�д洢�����ͬ���͵�Ԫ��*/
	/*�����ṹ�Ĳ��裺
	1������ṹ����������ܹ��洢�ڽṹ�еĸ����������ͣ�
	2�������������ṹ����*/

	struct inflatable//�ṹ����,�﷨��struct �ṹ���ƣ���C++11�У������ṹ����ʡ��struct
	{
		//�����ǽṹ�洢�����������б�
		//�����������б��У�һ���﷨Ϊ����Ա���ͣ���char,int�ȣ� ��Ա����;
		char name[20];
		float volume;
		double price;
	};//�����ṹ����Ҫ�ڵڶ���������֮��д��;
	//�ṹ����󣬿ɴ����Ѷ������͵ı���
	inflatable hat;
	inflatable woopie_cushion;
	struct inflatable mainframe;//C�����������ṹ��������䣬�������struct
		//�ýṹ���������ʽṹ��Ա�����൱��������һ������
		//�﷨���ṹ������.�ṹ��Ա��
	hat.name;
	hat.price;/*����price��Ա������Ϊdouble����,���hat.price��ʾ����
			  һ��double�͵ı���*/

			  /*�ھ���ĳ�����ʹ�ýṹ*/
	inflatable guest =
	{
		/*�����������ݣ����������ṹ�е����������б��������е���������
		һһ��Ӧ*/
		"glorious gloria",//��Ӧchar name[20];
		1.88,//��Ӧfloat volume;
		29.99//��Ӧdouble price;
	};/*�����ͽ����ֲ�ͬ�������͵����ݴ洢��һ��inflatable�ͽṹ����
	  guest��*/
	inflatable pal =
	{
		"audacious arthur",
		3.12,
		32.99
	};

	cout << "expand your guest list with" << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "you can have both for $" << guest.price + pal.price << "!" << endl;

	return 0;
}