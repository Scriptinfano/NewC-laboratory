#include<iostream>
#include<fstream>
#include<cstdlib>/*��ͷ�ļ�������Ա����exit()��ԭ��*/
using namespace std;

int main()
{
	/*���ļ���������ݣ�������Ҫ�е�������
	1������ͷ�ļ�fstream
	2��ͷ�ļ�fstream�ж�����һ���������������ifstream��
	3������һ���������ڴ��������ifstream����
	4��ָ�����ƿռ�std
	5����ifstream������ļ�����������ͬ������open()
	6����close()�ر��ļ�*/

	/*����һ�������ڵ��ļ���������ʱ�����ִ��󽫵��º���ʹ��ifstream�����������ʱʧ�ܡ�
	����ļ��Ƿ񱻳ɹ��򿪵���Ҫ������is_open(),������ʹ�÷���*/
	ifstream fin;
	ofstream fout;
	fin.open("D:/testfiles/test.txt", ios::in);
	fout.open("D:/testfiles/test.txt", ios::out|ios::app);
	if (!fin.is_open())/*�ļ��򿪳ɹ�ʱ��is_open()����true������ȡ���õ�false,��ִ��if�����еĴ���*/ {
		exit(EXIT_FAILURE);/*EXIT_FAILURE��һ�������ϵͳͨ�ŵĲ���ֵ���ò���ֵҲ����ͷ�ļ�cstdlib�ж����
						   ִ�����д��뽫��ֹ����*/
	}
	cout << "������Ҫ���ļ�����ʾ����Ϣ��";
	char testforfin[100];
	cin >> testforfin;
	fout <<"�ڳ�����������������£�" << "\n" << testforfin;
	return 0;
};