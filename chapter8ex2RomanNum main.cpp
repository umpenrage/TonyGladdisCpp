/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 13, 2018, 2:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "RNumConvert.h"
using namespace std;

/*
 * The purpose of this program is to convert integer values into roman numerals.
 */
int main(int argc, char** argv) {
    cout << "Please input the amount entries : " ;
    int input = 0;
    cin >> input;
    int max = input;
    int inputArray[max];
    string convertArray[max];
    
    RNumConvert convert;
    convert.storeData(inputArray, max);
    convert.convert2RN(inputArray, convertArray, max);
    convert.displayCon(inputArray, convertArray, max);
    

    return 0;
}

