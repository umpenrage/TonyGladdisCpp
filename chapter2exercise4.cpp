#include <iostream>

using namespace std;

int main()
{
    cout << "This program will do a bunch of calculations\n";
    cout << "Please insert a value for variable a\n";
    int a;
    cin >> a;
    cout << "Now the program will add 2 to the variable a and store it in variable b\n";
    double b;
    a+=2;
    b = a;
    cout << a << " " << b << "\nThe program will now multiply b by 3.14\n" ;
    b*=3.14;
    cout << b << "\nThe program will now subtract 8 from b and store those results in a\n"<< b << " " << a << endl;
    b-=8;
    a = b;
    cout << "The program will now overwrite what the variable a is with the number 27\n "<< a<< endl;
    a = 27;
    cout << a << endl;
    char c = 'K';
    cout <<  "the variable c will now store the character K" << "\nC = " << c
         << "\nNow C will be changed to 'B' using the ASCII code 66"<< endl;
    c=66;
    cout << c;

}
