#include<iostream>
using namespace std;
const int cities = 5;/*cities�ǳ�������*/
const int years = 4;/*years���������*/
int main()
{
	const char* pcities[cities] = {/*pcities��ָ�����������*/
		"new york city",
		"los angeles",
		"san fransisko",
		"boston",
		"washinton DC"
	};/*����ָ�����飬����Щָ��ָ���ֵ���ɸı�*/
	int maxtemps[years][cities] = {/*maxtemps�Ƕ�ά���������*/
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	cout << "��2008��2011��֮��������е��¶����£�\n\n";
	for (int city = 0; city <cities; ++city) {/*city��forѭ���еĳ�ʼֵ��Ҳ������ֵ*/
		cout << pcities[city] << ":\t";
		for (int year = 0; year <years; ++year) {/*year��Ϊ����ֵ��С���������*/
			cout << maxtemps[year][city] << "\t";
		};
			
		cout << endl;
	}
	
	char cities2[5][25] =  /*����һ��char��������飬��5���ַ�����
						   ��󳤶�����Ϊ24���ַ���ָ������洢��
						   ��5���ַ����ĵ�ַ����ʹ��char���������
						   ʱ����5���ַ����ֱ��Ƶ�����25��Ԫ�ص�
						   char�����У���25��Ԫ���ǿ��ַ�*/
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	return 0;
}