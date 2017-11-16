#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string month1;
    string month2;
    string month3;
    double rainMonth1;
    double rainMonth2;
    double rainMonth3;

    cout << "Name the first month, second, and third months: ";
    cin >> month1 >> month2 >> month3;
    cout << "Please type in the rainfall for " << month1 <<", " << month2 <<" & " << month3 << ": ";
    cin >> rainMonth1 >> rainMonth2 >> rainMonth3;
    double rainFallAverage = (rainMonth1 + rainMonth2 + rainMonth3)/3.0;

    cout << "The average rainfall for the three months " << month1 << ", "<< month2 << " & " << month3 << " is " <<setprecision(2) << fixed << showpoint << rainFallAverage  << " inches";
}
