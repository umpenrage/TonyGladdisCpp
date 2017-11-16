#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This will program will calculate annual pay for an individual earning 2200 per pay period.\n";

    const int PAY_PERIOD = 26;
    double payAmount = 2200.0;
    double annualPay = payAmount * PAY_PERIOD;

    cout << "Their total pay per year is : " << setw(8)<< fixed << setprecision(2) <<annualPay;

}
