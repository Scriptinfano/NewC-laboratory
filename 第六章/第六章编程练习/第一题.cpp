/*C++��C�����м̳���һ�����ַ���صĺ�����������ɼ�����ȷ���ַ��Ƿ��Ǵ�д�����֡������ŵȹ���������ԭ��
������ͷ�ļ�cctype*/
/*cctype�еĳ���������ע�⣺��Щ�����ķ���ֵ��Ϊint�͵�ֵ����
��*��Ϊ�ص����
1��  isalpha(ch):��chΪ��ĸ���������ط��㣬���򷵻���
2��  ispunct(ch):��chΪ�����ţ��������ط���,���򷵻���
3��  isdigits(ch):��chΪ���֣��������ط��㣬���򷵻���
4��  isspace(ch):��chΪ�հף��հװ������з����Ʊ�����ո񣩣��������ط��㣬���򷵻���
5��  isalnum(ch):��chΪ��ĸ�����֣��������ط��㣬���򷵻���
6��  iscntrl(ch):��chΪ�����ַ����������ط��㣬���򷵻���
7��  isdigit(ch):��chΪ0~9�����֣��������ط��㣬���򷵻���
8��  *isgraph(ch):��chΪ���ո�����Ĵ�ӡ�ַ����������ط��㣬���򷵻���
9��  *islower(ch):��chΪСд��ĸ���������ط��㣬���򷵻���
10�� isprint(ch):��chΪ��ӡ�ַ����������ط��㣬���򷵻���
11�� *isupper(ch):��chΪ��д��ĸ���������ط��㣬���򷵻���
12�� *isxdigit(ch):��chΪʮ���������֣��������ط��㣬���򷵻���
13�� *tolower(ch):��chΪ��д�ַ�����������Сд�ĸ��ַ������򷵻ظò�����to lower����˼���ǵ�Сд��
14�� *toupper(ch):��chΪСд�ַ����������ش�д�ĸ��ַ������򷵻ظò�����to upper����˼���ǵ���д��
*/
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cin.get(ch);
	while (ch != '@') {
		if (isdigit(ch)) {
			cin.get(ch);
			continue;
		}
		else if(islower(ch)){
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}
		cout << ch;
		cin.get(ch);
	}
	return 0;
};