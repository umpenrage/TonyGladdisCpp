#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int sum=0;
  int userInput;
  cout << "The program will sum the numbers from 1 to the user inputted number"<<endl;
  cout << "Please input a positive number: ";
  cin >> userInput;
  if(userInput <1){
    bool invalidInput = true;
    while(invalidInput){
        cout << "Please input a number greater than 1: ";
        cin >> userInput;
        if(userInput>=1){
            invalidInput = false;

        }
    }
  }
  while(userInput>1){

    for(int i = 1 ; i <=userInput; i++){
        sum +=i;


    }
    cout << "The sum is " << sum<<"." << endl;
    userInput = 0;
  }
  return 0;
}
