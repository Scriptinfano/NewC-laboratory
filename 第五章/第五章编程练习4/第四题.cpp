
/*#include <iostream>
using namespace std;
int main()
{
	Daphne投入100美元，每年均获得10美元，利率是0.1
	Cleo投了100美元，利息是当前存款的5%

        int daphnebenjin = 100;
        double cleobenjin = 100;
        int answer;
        int year = 0;
        while (cleobenjin <= daphnebenjin) {
            daphnebenjin = daphnebenjin + 10;
            cleobenjin = cleobenjin + cleobenjin * 0.05;
            year++;
        }
        cout << year << "年后，cleo的投资价值超过了daphne的投资价值" << endl;
        
	return 0;
};*/
/*标准答案：*/
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
            cout << "\t在第" << year << "年，daphne的本金加利息为" << daphne_deposit;
            cout<< "\t在第" << year << "年，cleo的本金加利息为" << cleo_deposit;
            year++;
    }
    cout << "在第" << year << "年" << "cleo的资产超过了daphne的资产" << endl;
    return 0;

}