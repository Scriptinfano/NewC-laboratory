#include<iostream>;
#include<string>;
#include<cstring>;
#include<vector>;/*ʹ��vector����������ͷ�ļ�vector*/
#pragma warning(disable:4996)
using namespace std;
int main()
{
	/*ģ����vector������string�࣬��һ�ֶ�̬���飬����Ҫ�����н׶����û��Զ������鳤��ʱӦ����ѡvector��������Ϊ��������Ʒ����ʹ��new��������̬������ã���Ϊ����Ҫ��ʹ��deleteɾ��
	�ռ�*/
	/*ʹ��vector���������̬�����ͨ������������洢����Ԫ�ظ����ı�������cinΪ��������ֵ������vector�������飬��Ԫ�ظ����趨Ϊǰ��ı���*/
	bool once = false;
	if (once) {
		vector<int> vi;/*����vi��һ��vector<int>���󣬿��Դ�����Ϊһ��int��������vector��buff��Ϊ��vector����*/
		int n;
		cin >> n;
		vector<double>vd(n);/*����һ����Ϊvd��vector���󣬿��Դ洢n������Ϊdouble��Ԫ��*/
		/*vector�����ڲ�������ֵʱ�����Զ��������ȣ���˿��Խ�vi�ĳ�ʼ��������Ϊ0����Ҫ����������Ҫʹ��vector��
		�ĸ��ַ���*/
	}
	cout << "������Ҫ�����Ľṹ����ĳ���";

	cout << "¼���û���Ϣ��ʼ��";
	struct documentrary {
		string name;
		int age;
		string job;
		string sex;
	};
	int n;
	cin >> n;
	vector<documentrary>shuzu(n);
	for (int i = 0; i < n; i++) {
		cout << "�����һλ�û�����Ϣ\n";
		cout << "������";
		cin >> shuzu[i].name;
		cin.get();
		cout << "���䣺";
		cin >> shuzu[i].age;
		cin.get();
		cout << "ְҵ��";
		cin >> shuzu[i].job;
		cin.get();
		cout << "�Ա�";
		cin >> shuzu[i].sex;
		cin.get();
		cout << "�Ƿ����¼���Ա��Ϣ����Y/N����";
		char ch;
		if (cin >> ch) {
			cin.clear();
			cout << "�������Ͳ�ƥ��,����������";

		}

	}



	return 0;
}