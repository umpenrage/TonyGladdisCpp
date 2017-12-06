#include <iostream>
using namespace std;
int main(){

	cout << "Please input a month(1-12) : ";
	int month;

	cin >> month;
    if(month <1 || month >12){
        cout << "Month must be 1-12";
	}
	else{
        cout << "Please enter a year: ";
        int year;
        cin >> year;
        bool isLeapYear = false;
        if((year % 100 == 0 && year % 400 == 0) || (year %4 ==0)){
            isLeapYear = true;
        }
        switch(month){
            case 1: cout << "January has 31 days";
                    break;
            case 2: if(isLeapYear == true){
                        cout << "February has 29 days";
                    }
                    else{
                        cout << "February has 28 days";
                    }
                    break;
            case 3: cout << "March has 31 days";
                    break;
            case 4: cout << "April has 30 days";
                    break;
            case 5: cout << "May has 31 days";
                    break;
            case 6: cout << "June has 30 days";
                    break;
            case 7: cout << "July has 31 days";
                    break;
            case 8: cout << "August has 31 days";
                    break;
            case 9: cout << "September has 30 days";
                    break;
            case 10:cout << "October has 31 days";
                    break;
            case 11:cout << "November has 30 days";
                    break;
            case 12:cout << "December has 31 days";
                    break;


        }
	}
}
