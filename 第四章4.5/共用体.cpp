#include <iostream>;
using namespace std;
int main()
{
	/*��������һ�����ݸ�ʽ���ܴ洢��ͬ���������ͣ���ֻ��ͬʱ�洢���е�һ������*/
	/*������ͽṹ�����𣺽ṹ����ͬʱ�洢int,long,char�ȣ���������ֻ�ܴ洢int, long��double��������*/
	union one4all
	{
		int int_val;
		long long_val;
		double double_val;
	};/*ʹ��one4all�������洢int\long\double���������ڲ�ͬʱ�����*/

	one4all pail;
	pail.int_val = 15;
	cout << pail.int_val;
	pail.double_val = 1.38;
	cout << pail.double_val;
	/*��Ϊpail��ʱ��int��������ʱ��long������������ĳ�Ա���Ʊ�ʶ�˱������ݻ���������ÿ��
	ֻ�ܴ洢һ��ֵ�����Թ�����ĳ���Ϊ������Ա�ĳ���*/
	/*����ڹ���С��ƷĿ¼ʱ����Щ��Ʒ��IDΪ�������е�IDΪ�ַ�������ʱ��Ҫ�ù���������ʾÿ����Ʒ��ID�����ÿ����Ʒ��
	ID����һ���������ͣ���������������ýṹ������*/
	struct widget
	{
		char brand[20];//С��Ʒ������
		int type;//С��Ʒ������
		union id/*��ͬ��ʵ����ֻ�洢һ����ѡ�еĳ�Ա������������ĳ��ȵ�����ĳ�Ա�ĳ���*/
		{
			long id_num;        // type 1 widgets
			char id_char[20];   // other widgets
		} id_val;/*��������������������ǹ�����id��id�ǹ��������͵����֣����ܽ���Ա�������������������Ա�����ֻ�����ڱ�������*/
	};

	widget prize;

	if (prize.type == 1)             // if-else statement (Chapter 6)
		cin >> prize.id_val.id_num;  // use member name to indicate mode
	else
		cin >> prize.id_val.id_char;

	return 0;
}