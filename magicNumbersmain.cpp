/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on July 20, 2018, 1:35 PM
 */
#include "MagicNumbers.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {
    MagicNumbers magicNumber;
    int n = 0;
    int magicNumberArray[magicNumber.SIZE][magicNumber.SIZE];
    std::ifstream input;
    input.open("Prog2Input.txt");  
        int count =0;

    while(input>>n){
        
        for(int i=0; i <n; i++){
            for(int j = 0; j<n;j++){

                input>>magicNumberArray[i][j];
            }
        }
        magicNumber.readSquare(n, magicNumberArray);
        magicNumber.printSquare(n, magicNumberArray);
        if(magicNumber.checkMagic(n, magicNumberArray)){
            cout << "\nMagic Square\n"<<endl;
        }
        else{
            cout << "\nNot Magic Square\n" << endl;
        }
        
    }
        
}


