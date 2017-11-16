#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double cupsOfSugar = 1.5/48;
	double cupsOfButter = 1.0/48;
	double cupsOfFlour = 2.75/48;

	int amountOfCookies;

	cout << "How many cookies would you like made? " ;
	cin >> amountOfCookies;

	double amountOfSugar = amountOfCookies * cupsOfSugar;
	double amountOfButter = amountOfCookies * cupsOfButter;
	double amountOfFlour = amountOfCookies * cupsOfFlour;

	cout << "It will require the following to make  "<< amountOfCookies << " cookies : \n";
	cout << setw(4)<< setprecision(2)<< fixed << amountOfSugar << " cups of sugar\n"
		 << setw(4)<< fixed<< amountOfButter << " cups of butter\n"
 		 << setw(4)<< fixed<< amountOfFlour <<" cups of flour";
}
