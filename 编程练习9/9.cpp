#include<iostream>
using namespace std;
int main()
{
	struct candybar
	{
		char pinpai[20];
		double zhongliang;
		unsigned int kaluli;
	};
	candybar* pcandybar = new candybar[3];

	strcpy(pcandybar[0].pinpai, "Mocha Munch");
	pcandybar[0].zhongliang = 2.3;
	pcandybar[0].kaluli = 350;

	/*������ָ����ʽ��ʾԪ�أ� (pcandybar)->pinpai= "Mocha Munch";
							  ��pcandybar+1��->zhongliang = 2.3;
							  ��pcandybar+2��->kaluli = 350;*/
	strcpy(pcandybar[1].pinpai, "Hershey bar");
	pcandybar[1].zhongliang = 4.2;
	pcandybar[1].kaluli = 550;

	strcpy(pcandybar[2].pinpai, "Musketbar");
	pcandybar[2].zhongliang = 2.3;
	pcandybar[2].kaluli = 350;
	cout << "�ҵĵ�һ����������" << pcandybar[0].pinpai << ",����������" << pcandybar[0].zhongliang << ",���Ŀ�·�ﺬ����" << pcandybar[0].kaluli << endl;
	cout << "�ҵĵڶ�����������" << pcandybar[1].pinpai << ",����������" << pcandybar[1].zhongliang << ",���Ŀ�·�ﺬ����" << pcandybar[1].kaluli << endl;
	cout << "�ҵĵ�������������" << pcandybar[2].pinpai << ",����������" << pcandybar[2].zhongliang << ",���Ŀ�·�ﺬ����" << pcandybar[2].kaluli << endl;
	delete[]pcandybar;/*C++��delete��delete[]���������£�
					   �ڻ����� new ����ĵ���������ڴ�ռ��ʱ���� delete�������� new[] �����һ�������ڴ�ռ�
					   ��ʱ���� delete[]��*/
	return 0;
}