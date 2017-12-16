#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	// this program will let a user choose a plan
	// the next part of this program calculates the total bill amount per month
	const int PLANA_MINUTES = 450;
	const double PLANA_FEE = .45;
	const int PLANB_MINUTES = 900;
	const double PLANB_FEE = .40;

	cout << "Please choose the following plans: (use \"a\", \"b\", or \"c\" for your selection)\n"
		 << "A. 39.99 a month; 450 minutes; .45 per minute after allotment.\n"
		 << "B. 59.99 per month; 900 minutes; .40 per minute after allotment.\n"
		 << "C. 69.99 per month; unlimited minutes.\n";
	char planSelection;
	cin >> planSelection;

	if(static_cast<int>(planSelection)<97 || static_cast<int>(planSelection)>99){
		cout << "You have selected an incorrect input. ";

	}
	else{
		int minutesUsed;
		int minutesRemaining;
		double totalBill;
		cout << "Minutes use this month: ";
		cin >> minutesUsed;

		switch(static_cast<int>(planSelection)){
			case 97:minutesRemaining = minutesUsed - PLANA_MINUTES;
					if(minutesRemaining >0){
					 	totalBill = 39.99 + minutesRemaining*PLANA_FEE;
				 		cout << "Your final bill is $" << fixed << setprecision(2) << totalBill <<".";
				 		if(minutesUsed > 450 && minutesUsed <900){
                            if(totalBill - 59.99 <0){
                                cout << "Even though you went over your minutes, you have saved $" << fixed << setprecision(2)<< (-1)*(totalBill- 59.99) <<" by using Plan A compared to Plan B.";

                            }
                            else{
                                cout << "You could have saved $" << fixed << setprecision(2)<< (totalBill- 59.99) <<" by using Plan B.";
                            }
				 		}
				 		else if(minutesUsed >=900){
                             cout << "You could have saved $" << fixed << setprecision(2)<< (totalBill- 69.99) <<" by using Plan C.";
                            }


				 		else{
                            //nothing
				 		}
					}
					else{
					 	totalBill = 39.99;
					 	cout << "Your final bill is $" <<  fixed << setprecision(2) <<totalBill <<".";

					}
					break;
			case 98:minutesRemaining = minutesUsed - PLANB_MINUTES;
					if(minutesRemaining>0){
						totalBill = 59.99 + minutesRemaining*PLANB_FEE;
						cout << "Your final bill is $" <<  fixed << setprecision(2) <<totalBill <<".";
						if(totalBill - 69.99 <0){

                            cout << "Even though you went over your minutes, you saved $" << fixed << setprecision(2) <<69.99-totalBill  << " compared to buying Plan C";
						}
						else{
                           cout << "You could have saved $" << fixed << setprecision(2) <<totalBill-69.99  << " if you bought Plan C";

						}
					}
					else{
						totalBill = 59.99;
						cout << "Your final bill is $" <<  fixed << setprecision(2) <<totalBill <<".";

					}
					break;
			case 99:totalBill = 69.99;
					cout << "You have unlimited minutes.\nYour final bill is $" <<  fixed << setprecision(2) <<totalBill <<".";
					break;

			}// end switch statement

		}//end of if statement
		return 0;

	}// end of main
