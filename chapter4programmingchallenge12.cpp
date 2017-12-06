#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	const int PRICE_PER_PACKAGE = 99;
	const double TEN_TO_NINETEEN = .80;
	const double TWENTY_TO_FOURTYNINE = .70;
	const double FIFTY_TO_NINENINE = .60;
	const double GREATER_THAN_HUNDRED = .50;

	cout << "How many software packages do you want to buy: ";
	int buyPackageAmount;
	cin >> buyPackageAmount;
	if(buyPackageAmount <=0){
		cout << "You have entered and invalid amount.";
	}
	else{

		int discountCriteria;
		if(buyPackageAmount >=10 && buyPackageAmount <= 19){
			discountCriteria = 1;
		}
		else if(buyPackageAmount >=20 && buyPackageAmount <=49){
			discountCriteria = 2;
		}
		else if(buyPackageAmount >=50 && buyPackageAmount <=99){
			discountCriteria = 3;
		}
		else if(buyPackageAmount >=100){
			discountCriteria = 4;
		}
		else{
			discountCriteria = 5;
		}

		switch(discountCriteria){
			case 5: {
                        double noDiscount= buyPackageAmount * PRICE_PER_PACKAGE;
                        cout << "The Total amount is" << fixed << setprecision(2) << showpoint << noDiscount;
                        break;
                    }

			case 4: {
                        double discount100More = buyPackageAmount * PRICE_PER_PACKAGE * GREATER_THAN_HUNDRED;
                        cout << "The total amount is " << fixed << setprecision(2) << showpoint << discount100More;
                        break;
                    }

			case 3: {
                        double discount5099 = buyPackageAmount * PRICE_PER_PACKAGE * FIFTY_TO_NINENINE;
                        cout << "The total amount is " << fixed << setprecision(2) << showpoint << discount5099;
                        break;
                    }

			case 2: {
                        double discount2049 = buyPackageAmount * PRICE_PER_PACKAGE * TWENTY_TO_FOURTYNINE;
                        cout << "The total amount is " << fixed << setprecision(2) << showpoint << discount2049;
                        break;
                    }
			case 1: {
                        double discount1019 = buyPackageAmount * PRICE_PER_PACKAGE * TEN_TO_NINETEEN;
                        cout << "The total amount is " << fixed << setprecision(2) << showpoint << discount1019;
                    }
		}
	}

	return 0;
}
