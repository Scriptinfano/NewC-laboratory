
/*#include <iostream>
using namespace std;
int main()
{
	DaphneͶ��100��Ԫ��ÿ������10��Ԫ��������0.1
	CleoͶ��100��Ԫ����Ϣ�ǵ�ǰ����5%

        int daphnebenjin = 100;
        double cleobenjin = 100;
        int answer;
        int year = 0;
        while (cleobenjin <= daphnebenjin) {
            daphnebenjin = daphnebenjin + 10;
            cleobenjin = cleobenjin + cleobenjin * 0.05;
            year++;
        }
        cout << year << "���cleo��Ͷ�ʼ�ֵ������daphne��Ͷ�ʼ�ֵ" << endl;
        
	return 0;
};*/
/*��׼�𰸣�*/
#include <iostream>
using namespace std;
const int deposit_base = 100;
int main()
{
    float daphne_deposit = deposit_base;
    float cleo_deposit = deposit_base;
    int year = 1;
    while (daphne_deposit >= cleo_deposit) {
        daphne_deposit = daphne_deposit + 10;
        cleo_deposit = cleo_deposit + cleo_deposit * 0.05;
            cout << "\t�ڵ�" << year << "�꣬daphne�ı������ϢΪ" << daphne_deposit;
            cout<< "\t�ڵ�" << year << "�꣬cleo�ı������ϢΪ" << cleo_deposit;
            year++;
    }
    cout << "�ڵ�" << year << "��" << "cleo���ʲ�������daphne���ʲ�" << endl;
    return 0;

}