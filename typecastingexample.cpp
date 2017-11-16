#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int books;
    int months;
    double perMonth;

    cout << "how many books do you plan to read? ";
    cin >> books;
    cout << "How many months do you give yourself to read these books? ";
    cin >> months;

    perMonth= static_cast<double>(books)/months;

    cout << "That is " << setw(5) << setprecision(3)<< perMonth << " books per month.\n";


    return 0;
}
