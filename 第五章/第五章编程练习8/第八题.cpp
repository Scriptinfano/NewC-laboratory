#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "����һ������(����done����)��" << endl;
	int count = 0;
	char words[20];
	cin >> words;
	cin.get();/*ʹ��cin�ĳ�Ա����get()�����򵥵���ͣ��Ļֱ�����»س����Ҳ���Ҫ�洢�κ�
			  �ַ�*/
	while (strcmp(words,"done")) /*strcmp(str1,str2)�������������ַ����ıȽϣ����ݱȽϽ������һ��int���͵�ֵ
								 �����ؽ����ֵС�� 0�����ʾ��ASCII���ϣ� str1�ַ���С��str2�ַ���;
								 �����ؽ������ֵ����0�������str2�ַ���С��str1�ַ���
								 ֻ�е�����ֵΪ0ʱ�������ַ���������ͬ��*/ {
		cin >> words;/*�൱����д�ַ�����������ݣ�ԭ�ȵ����ݻᱻ��д������ݸ��ǣ������Ҫ��words֮��
					 ����µ�����Ӧ��ʹ��strcat()������strcat(str1,str2)��str2������׷�ӵ�str1������֮��*/
		count++;
	}
	cout << "һ��������" << count << "������";

	return 0;
}