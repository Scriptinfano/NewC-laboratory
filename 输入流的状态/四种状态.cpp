/*����״̬����ͨ�����ios_base���е�λ���жϡ�
1���������������ļ�βʱ�� eofbitλ�������á�
���Ե��ú��� cin.eof()���ж��Ƿ񵽴��ļ�ĩβ
��cin�������ļ�ĩβʱ����true�����򷵻�false��
2���������з�����ʽ����ʱ��failbitλ�������á�
�������Ҫ���������������������������з��������ַ�����������������ִ���ʱ����Щ�ַ����ᶪʧ��
��Ա����fail������������ʧ���ˣ�ͨ�����ִ����ǿ��Իָ��ġ�
3�����������ݶ�ʧʱ����������badbitλ��
��Ա����bad�������������Ƿ�ʧ���ˡ�һ������£��������صĴ����ǲ����޸��ġ�
4��������е�eofbit��failbit �� badbitλ��û�б����ã���ôgoodbitλ��������
���������eof, fail �� bad������falseֵ�����Ա����good����trueֵ��I / O����ֻ�ڡ��õġ����в��ܽ��С�
5����Ա����rdstate�������еĴ���״̬��
���磬ͨ������cout.rdstate��������״̬��Ȼ��ͨ��switch�����eofbit��badbit��failbit �� goodbit�������Щ״̬��
�����״̬����ѡ������ʹ�ó�Ա����eof�� fail, bad �� good�� ʹ����Щ������Ҫ���˽�����״̬λ��
6��clear��Ա����������״̬����Ϊ���õġ���ʹ�������Լ���ִ��I / O������
clear������Ĭ�ϲ�����goodbit�������
cin.clear()
�����cin�� ����Ϊ��������goodbitλ��
���cin.clear(ios::failbit)��Ϊ������failbitλ��
ע�⣺
���failbitλ �� badbitλ��������һ��������, ��basic_ios�ĳ�Ա����operator!����true��operator void* ����falseֵ(0)
ʾ�����룺*/

#include<iostream>
#include<iomanip>/*I/O���Ŀ���ͷ�ļ�*/

using namespace std;

int main()
{

	int integerValue;
	cout << "Before a bad input operation:"
		<< " cin.rdstate():" << cin.rdstate()/*���Ƕ���Ҫ���뵽�ı���������,���������������Ӣ����ĸ���ߺ���,
											 �Ǿͻᷢ������,cin���и������ܼ���������,����cin.rdstate();
											 1����cin.rdstate()����0(��ios::goodbit)ʱ��ʾ�޴���,���Լ����������
											 ����
											 2������2�������������󣨼�ios::failbit��,���ܼ���������������
											 ��cin.clear()���failbit��cin�ſ��Լ�������
											 3������4�����������󣨼�ios::hardfail��*/
		<< " cin.eof():" << cin.eof()
		<< " cin.fail():" << cin.fail()
		<< " cin.bad():" << cin.bad()
		<< " cin.good():" << cin.good() << endl;
	cout << " Expects an integer, but enter a character:";

	cin >> integerValue;
	cout << endl;

	cout << "After a bad input operation:"
		<< " cin.rdstate():" << cin.rdstate()
		<< " cin.eof():" << cin.eof()
		<< " cin.fail():" << cin.fail()
		<< " cin.bad():" << cin.bad()
		<< " cin.good():" << cin.good() << endl << endl;
	cin.clear();
	cout << "After cin.clear()" << " cin.fail():" << cin.fail()
		<< " cin.good():" << cin.good() << endl;

	return 0;
}