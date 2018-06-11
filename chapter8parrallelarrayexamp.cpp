 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 8, 2018, 2:45 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    int MAX_SIZE = 5;
    int input = 0;
    int arrayP1[MAX_SIZE];
    int arrayP2[MAX_SIZE];
    for(int i = 0 ; i < MAX_SIZE; i++){
        cout << "Input an integer for the first array : ";
        cin >> input;
        arrayP1[i]=input; 
        cout << "Input an integer for the second array: ";
        cin.ignore();
        cin>>input;
        arrayP2[i] = input;
    }
    for(int i = 0; i <MAX_SIZE; i++){
        int product = arrayP1[i]*arrayP2[i];
        cout << "The product of element " << i << " for array 1 and array 2 is : " << product<< endl;
        
    }
    return 0;
}

