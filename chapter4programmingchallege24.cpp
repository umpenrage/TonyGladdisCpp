#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // this program will calculate the cost of long distance phone calls. Because that is still a thing

    double timeOfCall;
    double lengthOfCall;
    int feeAmount;//choice for the switch statement.
    double totalFee;
    double minute;
    cout << "This program will determine the fee for a long distance call using the 24 hr format.\nApparently long distance is still a thing.\n\n";
    cout << "Please input the start time of the call(Please input in the format HH.MM): ";
    cin >> timeOfCall;

    minute = timeOfCall-static_cast<int>(timeOfCall);//used to obtain the minutes amount that corresponds to our current format of input

    if(minute>59 || minute <0){
        cout << "You have entered an incorrect value for minutes.\n";
    }else if(static_cast<int>(timeOfCall)< 0 || static_cast<int>(timeOfCall)>23){
        cout << "Invalid input. The limits for Hours is 0-23.\n";
    }
    else{

        cout << "Please enter the length of the call: ";
        cin>> lengthOfCall;
        if(lengthOfCall<0){
           cout << "You have entered invalid input. Please input positive numbers only.\n";
        }
        else{

            if(static_cast<int>(timeOfCall) < 7){
                feeAmount=1;
            }
            else if(static_cast<int>(timeOfCall)>=7 && static_cast<int>(timeOfCall)<19){
                feeAmount=2;

            }
            else{
                feeAmount=3;
            }//end of if statement
            switch(feeAmount){
                case 1: totalFee = lengthOfCall * 1.05;
                        break;
                case 2: totalFee = lengthOfCall * 1.45;
                        break;
                default:totalFee = lengthOfCall * 1.20;
            }//end of switch statement

            cout << "The total fee is $" << fixed << setprecision(2)<<totalFee<<". This is based on a fee of " <<(totalFee/lengthOfCall-1)<< " cents per minute."<< endl;
        }//end of if statement

    }//end if statement
   cout << "Program will now close";

}//end of main
