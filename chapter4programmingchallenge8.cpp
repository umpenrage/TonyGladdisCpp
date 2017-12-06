#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "This program will tell you the result of mixing two primary colors. RED, YELLOW and BLUE are called the Primary Colors"<< endl;

	cout << "Please input the first primary color using caps : ";

	string color1;

	cin >> color1;

	if(!( color1 == "YELLOW" || color1 == "BLUE" || color1 == "RED")){
		cout <<"You either inputted a non-primary color or you did not use all caps.";

	}
	else{

        cout << "\nPlease input the second primary color using all caps : ";

        string color2;

        cin >> color2;
        int colorCombination;//used in switch statement to determine the color combination result
        if(!( color2 == "YELLOW" || color2 == "BLUE" || color2 == "RED")){
            cout <<"You either inputted a non-primary color or you did not use all caps";
        }
        else{
            if(color1 == color2 ){
                cout << "You used the same color for both selections. The resulting color is " << color1;
            }
            else{

                
                if((color1 == "YELLOW" && color2 == "RED") || (color1 == "RED" && color2 == "YELLOW")){
                        colorCombination = 1; //this combination creates orange
                }
                else if((color1 == "YELLOW" && color2 == "BLUE") || (color1 == "BLUE" && color2 == "YELLOW")){
                    colorCombination = 2; //this combination creates green

                }
                else if((color1 == "RED" && color2 == "BLUE") || (color1 == "BLUE" && color2 == "RED")){
                    colorCombination = 3; // this combination create purple
                }

                cout << "You inputted two primary colors that are different and the result is ";
                switch(colorCombination){
                    case 1: cout << "Orange";
                            break;
                    case 2: cout << "Green";
                            break;
                    case 3: cout << "Purple";
                            break;

                } // end of switch statement
            }//end of else statement
        }//end of else statement
	}//end of else statement
 	return 0;
 }// end of program
