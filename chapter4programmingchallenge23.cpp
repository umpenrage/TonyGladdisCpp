#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	//this program will calculate the areas of a rectangle, triangle, and circle

	int choice;
	const double PI = 3.14159;
	int length;
	int width;
	int radius;
	double base;
	double height;
	double area;

	cout << "Please select an Option:\n"
		 << "1. Area of Rectangle.\n"
	 	 << "2. Area of a Triangle.\n"
	 	 << "3. Area of a Circle.\n"
	 	 << "4. Quit.\n";
 	cin >> choice;
 	// tests to ensure the choice is within range.
 	if(choice > 4 || choice <1){
 		cout << "Invalid input";
 	}

 	else{

 		switch(choice){
 			case 1: cout << "Insert the length and width: ";
 					cin >> length;
 					cin >> width;
 					if(length <=0 || width  <=0){
                        cout << "Sides cannot be less than or equal to zero";
 					}
 					else{
                        area = length * width;
                        cout << "The area is " << fixed << setprecision(2) << area;
                    }
					break;
			case 2: cout << "Insert the base and height: ";
					cin >> base;
					cin >> height;
                    if(base <=0 || height  <=0){
                        cout << "Sides cannot be less than or equal to zero";
 					}
 					else{
                        area = .5 * base * height;
                        cout << "The area is " << fixed << setprecision(2) << area;
 					}
					break;
			case 3: cout << "Insert the radius: ";
					cin >> radius;
					if(radius <=0){
                        cout << "Radius needs to be greater than 0";
					}
					else{
					area = PI * pow(radius, 2.0);
					cout << "The area is " << fixed << setprecision(2) << area;
					}
					break;
			default: cout << "Program will quit";
					break;

 		}




 	}

 	return 0;



}
