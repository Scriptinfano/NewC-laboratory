/*��ѧϰ�ļ����ǰ���ع�һ��cout��֪ʶ�㣺
1���������ͷ�ļ�iostream
2��ͷ�ļ�iostream�ж�����һ���������������ostream��
3��ͷ�ļ�iostream������һ��cout��ostream���������ж���ı���һ�㱻��Ϊ����
4������ָ�����ƿռ�std;�ڲ�ʹ��using namespace std;������£�Ҫ����cout�������дΪstd::cout
5�����Խ��ʹ��cout�������<<����ʾ�������͵�����*/

/*�ļ������cout���ƣ���֪ʶ�����£�
1���������ͷ�ļ�fstream
2��ͷ�ļ�fstream�ж�����һ���������������ofstream��
3����Ҫ����һ������ofstream���������󣩣������Լ�ϲ���ķ�ʽ����������������������������
4��ָ�����ƿռ�std
�ص㣺5����Ҫ��ofstream�������ļ�����������Ϊ�ˣ�����֮һ��open()
      6��ʹ�����ļ���Ӧʹ�÷���close()����ر�
      7�����ʹ��ofstream����������<<������������͵�����*/

/*�ı�I/O�ĸ��ʹ��cin��������ʱ������������Ϊһϵ�е��ֽڣ�ÿ���ֽڱ�����Ϊ�ַ����룬����Ŀ������������
ʲô������һ��ʼ�����ַ�����--�ı����ݡ�Ȼ��cin�������ı�ת��Ϊ��������*/
/*
ֱ��������cin��������ӵ������Ҳ���������ַ������ַ������ַ���������
#include<iostream>
using namespace std;
int main()
{
    char word[50];
    cin >> word;
    ����������У�cin���϶�ȡ��ֱ�������հ��ַ�

    char word2[50];
    cin.getline(word2, 50);
    ����������У�cin�����϶�ȡ��ֱ���������з���cin.getline()��һ�ж�����ַ����ڵڶ����������������ƣ�����
    �������ַ���ͬ���ַ������ַ�����󣬽����з�����

    ���������ļ������ı��ļ�,�ļ����ͷ����֣�
    1��һ�������ı���ASC����ʽ�洢�ڼ������
    2���Զ�������ʽ�洢�ڼ������

    �����ļ���Ϊ����
    1��ofstream:д������o��output����д
    2��ifstream:������
    3��fstream����д����

    д�ı��ļ������²��裺
    1������ͷ�ļ�fstream
    2������������ofstream ������
    3�����ļ���������.open("�ļ�·��",�򿪷�ʽ);
    4��д���ݣ�������<<"д�������";
    5���ر��ļ���������.close()
    return 0;
};*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream outFile; ����ofstream����outFile
    ofstream fout;

    ��ν������Ķ������ض����ļ���������
    outFile.open("fish.txt");�������ַ�����Ϊ�������ݸ�����open()
    char filename[50];
    cin >> filename;
    fout.open(filename);
    ����open()����һ��C����ַ�����Ϊ����

    ���ʹ�ö���
    double wt = 125.8;
    outFile << wt;
    char line[81] = "objects are closser than they appear.";
    fout << line << endl;*/
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outfile;
    outfile.open("D:/testfiles/test.txt",ios::out);
    outfile << "test for input";
    outfile.close();/*����close����Ҫʹ���ļ���ַ��Ϊ������outfile�Ѿ��͸��ļ����������������close�����ö���Ҳһ���Ǹ��ļ�*/

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

�ļ��Ĵ򿪷�ʽ���������ʹ�ã���:
1��ios::binary|ios::out     �Զ����Ʒ�ʽд���ļ�
2��ios::out|ios::app        ��׷�ӷ�ʽд���ļ�
*/
    cout << "enter the make and model of automobile:";
    cin.getline(automobile, 50);
    cout << "enter the model year";
    cin >> year;
    cout << "enter the original asking price:";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed; /*��һ��ķ�ʽ�������������ʹ�ÿ�ѧ������*/
    cout.precision(2);
    return 0;
};