#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("C:\\(your path here)\\amort.doc");
    /*
        this file will display a loan amortization chart and output it to a word doc.
        formula for payment  is [monthlyinterest * loanAmount * (1+interestRate/12)^(term of loan(years)*12)]/[(1+interestRate/12)^(termofloan(years*12))-1
    */
    double loanAmount;
    double interestRate;
    double monthlyRate;
    double balance;
    double monthlyInterestPayment;
    int years;
    double principlePayment;
    int termInMonths=0;

    cout << "How many years is your loan? ";
    cin >> years;

    termInMonths = years*12;

    cout << "What is the loan amount : ";
    cin >> loanAmount;
    balance = loanAmount;
    cout << "Interest rate of loan(i.e. 3.375) : ";

    cin >> interestRate;

    monthlyRate = interestRate/1200;
    double numerator = pow((1+monthlyRate), termInMonths);
    double denominator = numerator-1;
    double payment = (monthlyRate*(loanAmount)*numerator)/(denominator);

    outputFile << "Loan Amount Fixed For " << years << " years : " << loanAmount << endl;
    outputFile << "Monthly Payment: " << fixed << setprecision(2) << payment << endl<<endl;

    outputFile<< left<< setw(10)<< "Month"<< right << setw(20)<< "Principle" << setw(20) << "Interest" << setw(25) << "Remaining Balance" << endl;
    outputFile<< "============================================================================"<< endl;
    for(int i = 0; i < termInMonths ; i++){
       if(i != termInMonths-1){

            monthlyInterestPayment = monthlyRate * balance;
            principlePayment = payment- monthlyInterestPayment;

       }
       else{
            principlePayment=balance;
            monthlyInterestPayment = monthlyRate * balance;

       }

        balance -=principlePayment;
        outputFile << left << setw(10)<< i+1 << right << setw(18) << principlePayment << right << setw(20)<< monthlyInterestPayment << right << setw(20) << balance<< endl;
    }


}
