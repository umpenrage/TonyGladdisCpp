#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    // this program will determine the distance from the sound through a specific medium(air, water, steel)
	cout << "Please choose the follow mediums using 1-3\n1. Air\n2. Water\n3. Steel"<<endl;
	int choice;
	cin >> choice;

	if(choice <1 || choice >3){
		cout << "Invalid input";
	}
	else{
		double speed;
		string medium;
		switch(choice){

			case 1: speed = 1100;
					medium = "Air";
					break;
			case 2:	speed = 4900;
					medium = "Water";
					break;
			case 3: speed = 16400;
					medium = "Steel";
					break;
		}

		cout << "What is distance you want the sound to travel in the selected medium?(use feet as the measurement) : ";
		double distance;
		double time;//displayed in seconds
		cin >> distance;
		if(distance <0){
			cout << " You have entered a number less than 0";
		}
		else{
			time = distance / speed;

			cout << "It will take sound " << fixed << setprecision(4)<< showpoint << time << " seconds to travel the distance of "
			<< setprecision(2)<<distance <<" feet through the medium " << medium;

		}

	}

	return 0;
}
