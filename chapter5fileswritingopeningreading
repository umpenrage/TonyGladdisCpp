#include <iostream>
#include <fstream>
#include <string>

/*
    This program is testing to learn reading, writing, opening, etc. of a txt file.
*/

using namespace std;

int main()
{
    //ofstream is used to create and output file
    //ifstream is used to open an existing file and read data from it
    //fstream itself is the library that can read, write, open and close files.
    double price = 23.35;
    ofstream output;
    output.open("C:\\Users\\Java-programming\\Desktop\\test.doc");

    for(int i = 0 ; i < 20; i++){
        output << "Price: " << price<< endl;
    }
   output.close();
    /*  we can use a loop to read an entire file and look for the EOF code in each document.
        using the new variable input we use the argument input >> variable.
        THE >> LETS THE COMPILER KNOW IF DATA WAS SUCCESSFULLY READ
        this argument is boolean, meaning true or false, if there is an entry within the document, the file will be read until
        it comes across a newline command leading to a true statement. When it reaches the end of the file it
        will generate a false statement due to reading the EOF code, which indicates no further data.
     */

    ifstream input;
    input.open("C:\\Users\\Java-programming\\Desktop\\test.doc");
    string sales;
    while(input >> sales){
        getline(input, sales);
        cout << sales<< endl;
    }
    input.close();
    /*
        Opening a file can generate an error message for ifstream due to the prereq
        of a file needing to have already exist. the .open command generates a return value of true/false
        We can use the while loop and if statement combination to do exception handling.

    */
    input.open("C:\\Users\\Java-programming\\Desktop\\test.doc");
    if(input){
        while(input >> sales){
            getline(input, sales);
            cout << sales << endl;
        }
    }
    else{
        cout << "Error opening file.";
    }
    return 0;
}
