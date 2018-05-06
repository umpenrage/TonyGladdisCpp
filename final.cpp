#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

double returnMonthlyInterest(double);
double returnMonthlyPayment(double, double, int);
void displayAmortizationChart(double chart[][3], int months[], int, int);
void saveChartToFile(double chart[][3], int months[],  int , int, int);
void storeData(double chart[][3], int months[], double loanPayment, double monthlyRate, double loanAmount, int termInMonths, int COLUMNS);

int main()
{
    cout << fixed << setprecision(2)<< endl;
    static int counter = 0;
    double loanAmount=0;
    double interestRate=0;
    double monthlyRate=0;
    double balance=0;
    double monthlyInterestPayment=0;
    double loanPayment=0;
    int termInYears=0;
    int input=0;
    const int COLUMNS =3;
    bool programLoop = true;
    while(programLoop){

            cout << "Please Enter the Loan Amount : ";
            cin >> loanAmount;
            cout << "Please Enter the Loan Term in years (ie. 30, 25 ,...) : ";
            cin >> termInYears;

            int termInMonths= termInYears *12;

            cout << "What is the interest rate on the loan (i.e. 3.35) : ";
            cin >> interestRate;

            //calculates the monthly interest rate and the monthly loan payment
            monthlyRate = returnMonthlyInterest(interestRate);
            loanPayment = returnMonthlyPayment(monthlyRate, loanAmount, termInMonths);
            //creates the arrays for the amortization schedule and the months
            double amortizationSchedule [termInMonths][COLUMNS];
            int months[termInMonths];
            //stores the data
            storeData(amortizationSchedule, months, loanPayment, monthlyRate, loanAmount, termInMonths, COLUMNS);
            bool innerLoop = true;
            while(innerLoop){
                cout << "Please select an option:\n\n1.Display Chart\n2.Save Output\n3. Exit"<< endl;
                cin >> input;
                if(input <1 || input >3){
                    bool loop = true;
                    while(loop){
                        cout << "Invalid input. Please select 1, 2, 3, or 4 : ";
                        cin >> input;
                        if(input >=1 && input <=3){
                            loop = false;
                        }
                    }
                }
                switch(input){

                    case 1: cout << "Monthly Payment : " << loanPayment << endl;
                            displayAmortizationChart(amortizationSchedule, months, termInMonths, COLUMNS);
                            break;
                    case 2: saveChartToFile(amortizationSchedule, months,termInMonths,counter, COLUMNS);
                            break;
                    case 3: innerLoop = false;
                            counter++;
                            break;




                }


        }//end of inner loop
        cout << "Would you like to enter different values and rerun the program(1 for yes or 2 for no): ";
        cin.ignore();
        cin >> input;
        if(input <1 || input >2){
            bool loop = true;
            while(loop){
            cout << "Invalid Input. Please choose 1 for yes and 2 for no :";
            cin.ignore();
            cin >> input;
            if(input >=1 && input <=2){
                loop = false;

            }
            else{
                //loop continues
            }

        }
        }
        // if input is 2 then the program ends.
        if(input == 2){

            programLoop = false;
        }

    }//end of program loop



    //monthlyRate = interestRate/1200;
    //double numerator = pow((1+monthlyRate), termInMonths);
    //double denominator = numerator-1;
    //double payment = (monthlyRate*(loanAmount)*numerator)/(denominator);
    //monthlyInterestPayment = monthlyRate * balance;
    //principlePayment = payment- monthlyInterestPayment;
    //balance -=principlePayment;
    //principlePayment=balance;
    //monthlyInterestPayment = monthlyRate * balance;
    return 0;
}

void displayAmortizationChart(double chart[][3], int months[], int loanTermInMonths, int COLUMNS){

    cout<< left<< setw(10)<< "Month"<< right << setw(20)<< "Principle" << setw(20) << "Interest" << setw(25) << "Remaining Balance" << endl;
    cout<< "============================================================================"<< endl;

    for(int i = 0 ; i < loanTermInMonths; i++){
            cout<<left<< setw(22)<< months[i];
        for(int j = 0; j< COLUMNS; j++){

            cout <<left << setw(22) << chart[i][j]<< right << setw(20);
            if(j==2){
                cout << endl;
            }
        }
    }




}


double returnMonthlyInterest(double interestRate){

    double monthlyRate = (interestRate/1200); //converts the percentage into a decimal number for calculations
    return monthlyRate;


}
double returnMonthlyPayment(double monthlyRate, double loanAmount, int termInMonths){

    double numerator = pow((1+monthlyRate), termInMonths);
    double denominator = numerator-1;
    double payment = (monthlyRate*(loanAmount)*numerator)/(denominator);

    return payment;

}
void storeData(double chart[][3], int months[], double loanPayment, double monthlyRate, double loanAmount, int termInMonths, int COLUMNS){
    double beginningBalance = loanAmount;
    double endingBalance = 0;
    for(int i =0; i < termInMonths; i++){
        months[i] = i+1;
    }
    for(int i =0; i< termInMonths; i++){
        double monthlyInterestPayment = monthlyRate * beginningBalance;
        double principlePayment = loanPayment- monthlyInterestPayment;

        for(int j = 0; j < COLUMNS; j++){

            switch(j){

                case 0: chart[i][j]= principlePayment;
                        break;
                case 1: chart[i][j]= monthlyInterestPayment;
                        break;
                case 2: beginningBalance-=principlePayment;
                        chart[i][j] = beginningBalance;
                        break;

            }







            }

        }
    }

void saveChartToFile(double chart[][3], int months[],  int loanTermInMonths, int counter, int COLUMNS){
    string filename = "chart" + static_cast<char>(counter);
    filename +=".docx";

    ofstream outputFile;
    outputFile.open(filename.c_str());

    outputFile<< left<< setw(10)<< "Month"<< right << setw(20)<< "Principle" << setw(20) << "Interest" << setw(25) << "Remaining Balance" << endl;
    outputFile<< "============================================================================"<< endl;

    for(int i = 0 ; i < loanTermInMonths; i++){
            outputFile<<left<< setw(22)<< months[i];
        for(int j = 0; j< COLUMNS; j++){

            outputFile <<left << setw(22) << chart[i][j]<< right << setw(20);
            if(j==2){
                cout << endl;
            }
        }
    }




}





