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
13�� *tolower(ch):��chΪ��д�ַ�����������Сд�ĸ��ַ������򷵻ظò���
14�� *toupper(ch):��chΪСд�ַ����������ش�д�ĸ��ַ������򷵻ظò���*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char asd;
	cout << "����һ���ַ������������������ĸ���Ǳ����ţ�";
    cin.get(asd);
	if (isalpha(asd))/*�������cctype�ж���ļ���Ƿ�Ϊ��ĸ�ĺ�������Ӧʹ���߼����ʽ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))*/ {
		cout << "����������ĸ" << endl;
	}
	else {
		cout << "�������˱�����";
	}

    cout << endl << endl;
    cout << "Enter text for analysis, and type @"
        " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);              // get first character
    while (ch != '@')         // test for sentinel
    {
        if (isalpha(ch))       // is it an alphabetic character?
            chars++;
        else if (isspace(ch))  // is it a whitespace character?
            whitespace++;
        else if (isdigit(ch))  // is it a digit?
            digits++;
        else if (ispunct(ch))  // is it punctuation?
            punct++;
        else
            others++;
        cin.get(ch);          // get next character
    }
    cout << chars << " letters, "
        << whitespace << " whitespace, "
        << digits << " digits, "
        << punct << " punctuations, "
        << others << " others.\n";

	return 0;
}