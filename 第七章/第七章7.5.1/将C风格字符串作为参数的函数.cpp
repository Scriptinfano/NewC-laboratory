#include<iostream>
#include<string>
#include<cstring>
using namespace std;
unsigned int counter(const char* str, char ch);/*��һ��������ָ��char�ĳ���ָ�룬�ڶ���������
												Ҫ������ض��ַ�*/
int main()
{
	/*�ع˱�ʾ�ַ��������ַ�ʽ��
	1����ʼ��һ��char����
	2��������������ַ�������
	3��������Ϊ�ַ�����ַ��char��ָ��*/

	/*�ַ����������Ĳ���һ��Ϊcharָ��*/
	/*char ghost[15] = "galloping";
	char* str = ghost;
	int n1 = strlen(ghost);
	int n2 = strlen(str);*/
	//int n3 = strlen("gamboling");��������������ַ�����Ϊ�������ݸ�����ʱ��ʵ���ϴ��ݵ����ַ���
	//��һ���ַ��ĵ�ַ
	/*cout << "strlen(ghost)�Ľ��Ϊ" << n1 << endl;
	cout << "strlen(str)�Ľ��Ϊ" << n1 << endl;*/
	//cout << "strlen(\"gamboling\")�Ľ��Ϊ" << n1;

	/*�����ַ������Կ��ַ���β��char����ֻ������������ַ��������ܱ������ַ���������ָ��char��
	���ָ����Ϊ�������ݸ�����ʱ����Ҫ����char�����Ԫ�ص���Ŀ����������Ϊ�ڶ����������ݸ�����
	���ַ�����һ�������Դ���ֵ�ַ������㲻�ڲ����д����ַ����ĳ���Ҳ�����ڶ�����ʹ��ѭ�����μ�
	��ÿ���ַ�ֱ���������ַ�Ϊֹ*/

	/*ʾ�������ú����������ض����ַ����ַ����г��ֵĴ�����*/
	char mmm[15] = "minimum";
	char walls[] = { 'u','l','t','i','m','a','t','e','\0' };//������ֵ�ַ����ַ�����ɱ���Ϊ�ַ���
	char* wall = walls;
	char* str1 = mmm;

	unsigned int ms = counter(mmm, 'm');
	unsigned int us = counter(walls, 'u');

	cout << "��minimum�У�m���ֵĴ�����" << ms;
	cout << "��ultimate�У�u���ֵĴ�����" << us;

	return 0;
}
unsigned int counter(const char* pointer, char ch) //��ָ���������Ԫ�أ�����Ԫ�غ��ַ�ch���бȽ�
{
	unsigned int count = 0;
	while (*pointer)/*��ָ��ָ����ַ�ʱֹͣѭ��*/
	{
		if (*pointer == ch) {
			count++;
		}
		else {
			pointer++;/*��ָ������ƶ�*/
		}
		return count;

	}
}