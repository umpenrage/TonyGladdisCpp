#include <iostream>
#include <cmath>
using namespace std;

int main(){

	cout << "Each year the ocean is currently rising 1.5 millimeters per year\n"
		 << "The below numbers yield an approximate estimate of how much the ocean will rise\n"
		 << "in 5, 7 & 10 years";

		 const double RATE_OF_OCEAN_RISING = 1.5;
		 double year5 = RATE_OF_OCEAN_RISING * 5;
		 double year7 = RATE_OF_OCEAN_RISING * 7;
		 double year10 = RATE_OF_OCEAN_RISING *10;

	cout << "5 years from now : " << year5 << "\n7 years from now : " << year7
		 << "10 years from now : " << year10;

 	cout << "\nThe compounding effect would be much more different, and would be much more accurate";
 		year5 = pow(RATE_OF_OCEAN_RISING,5.0);
 		year7 = pow(RATE_OF_OCEAN_RISING, 7.0);
 		year10 = pow(RATE_OF_OCEAN_RISING, 10.0);
	cout << "\nYear 5 with compounding is : " << year5<<"\nYear 7 with compounding is : " << year7
		 << "\nYear 10 with compounding is : " << year10;

 	return 0;
}
