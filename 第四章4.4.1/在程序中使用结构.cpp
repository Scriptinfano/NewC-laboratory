#include <iostream>;
struct inflatable//�����ṹʱ����Ҫʹ�÷ֺţ��������ṹ����Ҫʹ�÷ֺ�
	/*inflatable�ǽṹ�����֣��൱��һ�ֽṹ��ʽ����ͬ�Ľṹ�൱�ڲ�ͬ
	���̵꣬��char,float�����������൱���̵��е�ˮ����͸ɹ��࣬������
	�����൱�ھ����ˮ�����ֻ�ɹ�����*/
	/*�ṹ������λ�ã��ȿ�����main����֮ǰ��Ҳ������main�����Ŀ�ͷ����*/
{
	char name[20];
	float volume;
	double price;

};

int main()
{
	using namespace std;
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
/*ע�⣬��C++11�Ľṹ��ʼ���У������������δ�����κζ������������Ա��������Ϊ��
*/