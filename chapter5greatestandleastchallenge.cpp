#include <iostream>

using namespace std;

int main()
{
    int max=0;
    int min=0;
    int temp;
    int input;



    cout << "This program will present the max and minimum number through your input.\nUse whole numbers. Input -99 to cancel"<< endl;
    while(input !=-99){
        cout << "Please input a number: ";
        cin >> input;
        if(input > max){
            max = input;
        }
        else if((input < max)&& (temp > input)&& input !=-99){
            min = input;
            temp = min;
        }

    }
    cout <<"\n" << max << "\n" << min << endl;
}
