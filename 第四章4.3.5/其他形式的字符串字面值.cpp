#include<iostream>;
#include<cstring>;
#include<string>;
using namespace std;
int main()
{
	/*��char���͵��ַ���֮�⣬����һЩ�����õ�����,��wchar_t��C++11������char16_t��
	char32_t���ͣ�ͬ���ɴ�����Щ���͵�������ַ�������ֵ��C++�ֱ�ʹ��ǰ׺L,u,U����ʾ
	����Щǰ׺�����ַ���ǰ�棬��������֮��*/
	wchar_t title[] = L"chief astrogator";
	char16_t name[] = u"florida";
	char32_t state[] = U"california";
	//����ԭʼ�ַ����﷨�����"(
	cout << R"+*("(fuck you)",i want.)+*" << endl;//R"+*(       "(fuck you)"�ַ���           )+*"
	/*���ܶ�����ż�ǣ�          R��������                                                  ��������*/
	//  "+*(  ��  )+*" ȡ����Ĭ�϶������Ĭ�϶����""�������Ƶģ������ܶ������֮����������������������ţ������ܶ����֮�䣬��дʲôдʲô��û���κ�����

	return 0;
}