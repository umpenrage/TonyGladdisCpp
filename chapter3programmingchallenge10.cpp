#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double suggestedInsurance;
    double houseValue;
    const double MINIMUM_PERCENTAGE = .8;
    cout << "Please input the house value: ";
    cin >> houseValue;
    suggestedInsurance = houseValue * MINIMUM_PERCENTAGE;

    cout << "The minimum amount of insurance you should buy is " << fixed << showpoint
    << setprecision(2)<<suggestedInsurance << endl;
    return 0;
}
