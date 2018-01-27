#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    int computerNumber= rand()%100 +1;
    int counter = 0;
    int userInput=0;
    cout << "Random guessing game, press enter to start";
    cin.get();
    while(userInput !=computerNumber){
        cout << "Guess the number from 1-100, whole numbers only : ";
        cin >> userInput;
        if(abs(computerNumber-userInput)<10 && abs(computerNumber-userInput)!=0){
            cout << "You are very close.\n You are "<< abs(computerNumber-userInput) << " away.\n";
            counter++;
        }
        else if(userInput != computerNumber){
            cout << "Sorry try again "<<endl;
            counter++;
        }
        else{
            cout << "You guess it.\n" << "My number was " << computerNumber <<endl;
        }

    }
    if(counter >1){
        cout << "It took you " << counter << " times to guess my number";
    }
    else{
        cout << "It took you " << counter << " time to guess my number";
    }
}
