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
      /*ֱ��������cin��������ӵ������Ҳ���������ַ������ַ������ַ���������*/
/*#include<iostream>
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
    outfile.close();/*����close����Ҫʹ���ļ���ַ��Ϊ������outfile�Ѿ��͸��ļ����������������close��
                    ���ö���Ҳһ���Ǹ��ļ�*/
    /*open()������������������һ���������ļ���·�����ڶ����������ļ��Ĵ򿪷�ʽ
    �ļ��Ĵ򿪷�ʽ�����¼��֣�
    ios::in   Ϊ���ļ������ļ�
    ios::out   Ϊд�ļ������ļ�
    ios::ate   ��ʼλ�ã��ļ�β
    ios::app   ׷�ӷ�ʽд�ļ���׷�ӷ�ʽ����˼��������ļ����Ѿ��������ˣ������ƶ����ļ���������д��
    ios::trunc   ����ļ�������ɾ�����ٴ���
    ios::binary   �Զ����Ƶ���ʽ���ļ�*/
    /*�ļ��Ĵ򿪷�ʽ���������ʹ�ã���
    1���ö����Ʒ�ʽд�ļ�  ios::binary|ios::out*/
    cout << "enter the make and model of automobile:";
    cin.getline(automobile, 50);
    cout << "enter the model year";
    cin >> year;
    cout << "enter the original asking price:";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    return 0;
};