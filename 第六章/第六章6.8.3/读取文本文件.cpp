#include<iostream>
#include<fstream>
#include<cstdlib>/*��ͷ�ļ�������Ա����exit()��ԭ��*/
using namespace std;
/*
��Ա����open()�еĵڶ��������ļ���ģʽ��ǲ�����ȫ
ios::in 					���ļ����ڶ�ȡ���ݣ����ļ������ڣ���򿪳���
ios::out 					���ļ�����д�����ݣ����ļ������ڣ����½����ļ�������ļ�ԭ�����ڣ�����������ԭ����
ios::app 					���ļ���������ĩβ������ݣ�����ļ������ڣ����½��ļ�
ios::trunc 					���ļ�ʱ������ڲ��������ݣ�����ʹ��ʱ�����ú�ios::out��ͬ
ios::binary 				�Զ����Ʒ�ʽ���ļ�������ָ����ģʽ�������ı�ģʽ����
ios::in|ios::out			���Ѵ��ڵ��ļ����ɶ�ȡ���ݣ�Ҳ����������д���ݣ��ļ���ʱ��ԭ�����ݱ��ֲ��䣬����ļ������ڣ���򿪳���
ios::out|ios::app			���ļ�ĩβ׷��д������
ios::in|ios::out|ios::trunc	���ļ����ɶ�ȡ��д�룬���ļ������ڣ���ʱ���ԭ�����ݣ����ļ������ڣ����½��ļ�
*/
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
	
	fin.open("D:/testfiles/test.txt", ios::in);//ֻ������
	fout.open("D:/testfiles/test.txt", ios::out|ios::app); //д�����ݣ�����׷�ӷ�ʽд������
	if (!fin.is_open()) /*�ļ��򿪳ɹ�ʱ��is_open()����true������ȡ���õ�false,��ִ��if�����еĴ���*/
	{
		exit(EXIT_FAILURE);/*EXIT_FAILURE��һ�������ϵͳͨ�ŵĲ���ֵ���ò���ֵҲ����ͷ�ļ�cstdlib�ж����
						   ִ�����д��뽫��ֹ����*/
	}
	cout << "������Ҫ���ļ�����ʾ����Ϣ��";
	char testforfout[100];
	cin >> testforfout;
	fout <<"�ڳ�����������������£�" << "\n" << testforfout;

	char testforfin[100];
	fin >> testforfin;
	cout << "���ļ��ж�ȡ���������£�\n";
	for (int i = 0; testforfin[i] != '\0';i++)
		cout << testforfin;
	return 0;
}