#include <iostream>

using namespace std;

int main()
{
    double maxAmount ; // maximum amount
    double currentBalance; // current balance

    cout << "What is your maximum amount?\n";
    cin >> maxAmount;
    cout << "\nWhat is your Current Balance ? \n";
    cin >> currentBalance;

    double endingBalance= maxAmount -currentBalance; //difference between max amount and current balance.
    cout <<"\nYour available credit is " << endingBalance;
}
