#include<iostream>
using namespace std;
int main()
{
	/*�ļ�β���������÷�������������������ctrl+z��������EOF*/
	/*��һ�ַ�������ļ�β������ʹ��char�����ݺ�cin.fail()������*/
	char ch;
	int count = 0;
	int count2 = 0;
	cin.get(ch);
	while (cin.fail() == false) {/*�����ļ�β����EOF��cin.fail()��⵽EOFʱ����ֵtrue��true������false����������Ϊ
								 false�������ѭ��*/
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read" << endl;

	/*�ڶ��ַ�������ļ�β������ʹ��int�����ݺ�EOF�ؼ��֣�*/
	int chu; /// for compatibility with EOF value
	chu = cin.get();
	while (chu != EOF)
	{
		cout.put((char)chu); // cout.put(char(ch)) for some implementations
		++count2;
		chu = cin.get();
	}
	cout << endl << count2 << "characters read" << endl;
	/*ע�⣬ѭ�����������е������Ǳز����ٵģ�����Ҫע��������ŵ����ȼ�������
	while(ch=cin.get()!=EOF);��仰�ǲ���ȷ�ģ����ڱȽ������!=�����ȼ����ڸ�ֵ��������͵���cin.get()�Ⱥ�EOF���бȽϣ��ȽϵĽ����false��true����Щ����ֵ�ᱻת��Ϊintֵ1��0
	������ch*/
	return 0;
};