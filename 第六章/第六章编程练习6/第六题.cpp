#include<iostream>
#include<cstring>/*�����ַ���������*/
#include<string>/*�����ͷ�ļ�����ʹ��string����*/
using namespace std;
struct dounation {
	string name;
	double money;
	
};
int main() {
	cout << "\t\t\t\t\tά���Ϸ�Ȩ�������Ա����¼������ʾ\n";
	int dounators_numbers;
	
	cout << "¼���Ա��Ϣ��ʼ:\n";
	cout << "�������������Ŀ��";
	cin >> dounators_numbers;
	cin.get();/*���������Ļ��з��ﵽ��ջ�������Ŀ��*/
	dounation* ps = new dounation[dounators_numbers];/*��new������̬�ṹ����*/
	for (int i = 0; i < dounators_numbers; i++) {
		cout << "�����" << i + 1 << "λ�û�������\n";
		cout << "������";
		getline(cin,ps[i].name);/*Ҳ����ʹ��getline()���������������ר�ŰѶ�ȡ���ַ����ŵ�string�����еģ����﷨Ϊ��
						getline(��������һ����cin��,string��������,����������ַ���һ�㲻д������������Ĭ���ǻ�
						�з���)*/
		/*getline�����������з��󣬽����з�֮ǰ�����ݶ���Ŀ�����飬Ȼ�󽫻������Ļ��з�����*/
		cout << "�����Ŀ��";
		cin >> ps[i].money;
		cin.get();
		cout << "�������룬���߰�F�˳�����";
		if (cin.get() == 'F') {
			break;
		}
	}
	cout << "\n";
	cout << "¼�����\n";
	cout << "����ľ��������Ҫ����ߣ�����10000�ľ���ߵ�������������Ŀ��\n";
	for (int x = 0; x < dounators_numbers; x++) {
		
		if (ps[x].money >= 1000) {
			cout << "��" << x + 1 << "λ�û���\n";
			cout << "\t" << "������" << ps[x].name << "\n";
			cout << "\t" << "������" << ps[x].money << "\n";
			
		}
		else {
			x++;
		}
	}

	
	
	return 0;
}