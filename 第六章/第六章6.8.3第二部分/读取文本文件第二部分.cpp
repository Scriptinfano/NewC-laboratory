#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
const int SIZE = 60;
int main()
{
	/*ofstream outfile;
	ifstream infile;/*����ifstream�����infile*/
	
	/*outfile.open("D:/testfiles/test.txt", ios::out);
	infile.open("D:/testfiles/test.txt", ios::in);
	if (!infile.is_open()) {
		cout << "�޷�����Ϊtest���ļ�" << endl;
		cout << "������ֹ";
		exit(EXIT_FAILURE);
	}

	outfile << "15.8 59.6 15.6\n14.5 56.3 25.3";

	double value[3];
	double value1, value2, value3;
	double sum = 0.0;
	int count = 0;

	//infile >> value1;
	//cin.get();
	//infile >> value2;
	//cin.get();
	//infile >> value3;

	for (int i = 0; infile.good() && i <= 2; i++)������������ִ�и�ѭ�� {
		++count;
		infile >> value[i];
		infile.get();
		sum += value[i];
	}
	infile.close();
	cout << "ƽ��ֵ��" << sum / 3;*/

    char filename[SIZE];
    ifstream inFile;        // object for handling file input
    cout << "�����ļ�����: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        cout << "�޷����ļ�" << filename << endl;
        cout << "������ֹ\n";
        exit(EXIT_FAILURE);/*������ֹ����exit()��������ͷ�ļ�cstdlib*/
    }
    double value;
    double sum = 0.0;
    int count = 0;          //���ֵĶ�ȡ������ÿ�ɹ���ȡһ�����֣���count+1


    inFile >> value;        //��ȡ�ļ��е�һ������
    while (inFile.good())   //����������ʱ��goodbit�����ã�good()�������ط���ֵ��ִ��ѭ��
    {
        ++count;            //����ȡ�����ּ���
        sum += value;       //�����ж�ȡ�����ּӺ�
        inFile >> value;    //�൱��ѭ���ĸ��²��֣���Ϊ���ѭ�����ж������������Ƿ�����
    }

    if (inFile.eof())
        cout << "�����ļ�β��������ֹ��ȡ\n";
    else if (inFile.fail())/*fail()������ֹ�ܼ���Ƿ�����Ϊ�������Ͳ�ƥ�����������Ҳ���Լ���Ƿ�����
                           �ļ�β����*/
        cout << "�������Ͳ�ƥ�䣬��������������\n";
    else
        cout << "��δ֪ԭ����ֹ��ȡ\n";
    if (count == 0)/*����Ϊ������ζ��û�ж�ȡ*/
        cout << "δ��ȡ�κ�����\n";
    else
    {
        cout << "�ܹ���ȡ��" << count <<"�����ݡ�" << endl;
        cout << "�ܺͣ�" << sum << endl;
        cout << "ƽ��ֵ��" << sum / count << endl;
    }
    inFile.close();         // finished with the file
	return 0;
};