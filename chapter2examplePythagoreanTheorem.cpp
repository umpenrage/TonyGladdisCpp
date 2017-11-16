#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
     double a;
     double b;
     double c;
     cout << setprecision(4); //sets precision to four digits.
     cout << "What is the length of side a: ";
     cin >> a; // sets side a's length
     cout << "What is the length of side b: ";
     cin >> b; // sets side b's length
     c = sqrt(pow(a, 2.0)+pow(b,2.0)); // calculates side c with sqrt(A^2 + b^2)=c
     cout << "The length of Hypotenuse is  ";
     cout << setw(5) << c<< endl; //sets width to 5 place holders.
     return 0;


}
