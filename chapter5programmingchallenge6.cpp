#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //this program will calculate the distance traveled with a constant speed
   int speed;
   int timeTraveled;
   cout << "Please input the constant speed of your vehicle: ";
   cin >> speed;
   cout << "How many hours has it traveled: ";
   cin >> timeTraveled;
   cout << "Hour \t\t Distance Traveled"<< endl;
   cout << "-----------------------------------\n";
   for(int i =1 ; i <=timeTraveled; i++){
    int distance = i*speed;
    cout <<  i << " \t\t "<< right<< setw(10)<< distance<< endl;
   }
    return 0;
}
