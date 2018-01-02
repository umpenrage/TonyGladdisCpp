#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   //This program assumes the person gets paid in pennies and the amount paid doubles each day. The user will input the amount of days they worked
   //The program will then display the amount in USD.
   double amountOfPennies=1;
   cout<< "This program assumes you make 1 penny a day and each day the amount you are paid is doubled.\n\n";
   cout << "Please input the number of days you worked: ";
   long daysOfWork;
   cin>> daysOfWork;

   if(daysOfWork <1){
    bool invalidDays = true;

        while(invalidDays){
            cout << "Please input work days greater than or equal to 1:\n";
            cin >> daysOfWork;
            if(daysOfWork >=1){
                invalidDays = false;
            }
        }
   }

   for(int i = 0 ; i <daysOfWork; i++){
    if(i == 0){
        //cout<< amountOfPennies<< " "; <-- this was used for testing to ensure the correct calculations.
      }
    else{
            amountOfPennies *= 2;
            //cout << amountOfPennies <<" ";

        }
   }// end of for loop
    double penniesInDollars = amountOfPennies/100;
    cout << "You have made $" <<fixed <<setprecision(2)<< penniesInDollars<< " in " << daysOfWork << " days of work.";
}
