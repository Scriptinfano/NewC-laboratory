#include<iostream>
using namespace std;
enum{red,orange,yellow,green,blue,violet,indigo};/*ö�ٶ���һ�����main����֮ǰ*/
int main()
{
	/*��Ŀ�������expression1?espression2:expression3����������ȡ��if else���
	��expression1Ϊtrue�����������ʽ��ֵΪexpression2��ֵ���������expression3��ֵ*/
	/*cin�޷�ʶ��ö�����ͣ��������Ҫ���û�ѡ��ѡ��ʱ����һ����������switch��佫intֵ��ö������ǩ���бȽ�ʱ
	��ö��������Ϊint��*/
	/*whileѭ�����������У�Ҳ�ὲö��������Ϊint��*/
	cout << "������ɫ�Ĵ��루0��6,��ɫ�������£�";
	cout << "red(0),orange(1),yellow(2),green(3),blue(4),violet(5),indigo(6)";
	int code;
	cin >> code;
	while (code>=red&&code<=indigo)/*�޶��û������뷶Χ*/ {
		switch (code) {
		case red:cout << "�����촽�Ǻ�ɫ�ġ�";
		case orange:cout << "����ͷ������ɫ�ġ�";
		case yellow:cout << "����Ь�ǻ�ɫ�ġ�";
		case green:cout << "����ָ��(nail)����ɫ�ġ�";
		case blue:cout << "�����˶�������ɫ�ġ�";
		case violet:cout << "�����۾�����������violet��ɫ�ġ�";
		case indigo:cout << "���������ǵ���ģ�indigo���Ա�ʾ����ɫҲ���Ա�ʾ������䣩";
		}
	}
	return 0;
}