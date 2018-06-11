/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 7, 2018, 6:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include "time.h"
using namespace std;
int MAX_SIZE = 25;
void copyArray(int[], int[], int MAX_SIZE);
void fillArray(int[], int MAX_SIZE);
void displayArray(int [], int [], int MAX_SIZE);
void calcTotal(int [], int MAX_SIZE);
/*
 * 
 */
int main() {
    int baseArray[25];
    fillArray(baseArray, MAX_SIZE);
    int copiedArray[MAX_SIZE];
    copyArray(baseArray,copiedArray, MAX_SIZE);
    displayArray(baseArray, copiedArray, MAX_SIZE);
    calcTotal(baseArray, MAX_SIZE);
    return 0;
}

void fillArray(int fillArray[], int MAX_SIZE){
    srand(time(0));
    
    for(int i = 0; i < MAX_SIZE; i++){
        int number = rand()%25+1;
        fillArray[i]=number;
    }
}//end of fillArray function

void copyArray(int fillArray[], int copyArray[], int MAX_SIZE){
    for(int i = 0; i < MAX_SIZE; i++){
        copyArray[i]=fillArray[i];
    }
}//end of copyArray function

void displayArray(int fillArray[], int copyArray[], int MAX_SIZE){
    cout << "Below is the original Array : "<< endl;
    for(int i =0; i < MAX_SIZE; i++){
        cout << i+1 <<". " << fillArray[i] << endl;
    }
    cout << endl;
    cout << "Below is the copied array : " << endl;
    for(int i = 0; i < MAX_SIZE ; i++){
        cout << i+1 <<". " << copyArray[i] << endl;
    }
}//end of displayArray function

void calcTotal(int array1[], int MAX_SIZE){
    int total = 0;
    for(int count = 0; count <MAX_SIZE; count++){
        total+=array1[count];
        
    }
    cout << "Total is " << total << endl;
    //this method does not work because we are committing an error because th
    //array starts at 0 and not 1. Thus the sign should be < MAX_SIZE to give
    //the correct total. 
    
}