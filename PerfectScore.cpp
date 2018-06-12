/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "PerfectScore.h"

PerfectScore::PerfectScore(int array[], int MAX){
    storeData(array, MAX);
   
 
}

void PerfectScore::storeData(int array[], int MAX){
    std::cout << "Please store data for " << MAX << " entries." << std::endl;
    for(int i = 0; i < MAX; i++){
        int input = 0;
        std::cout << i+1 << ": ";
        std::cin >>input;
        array[i]=input;
    }
}
void PerfectScore::calcScore(int array[], int MAX, int& counter){
    for(int i = 0; i < MAX; i++){
        if(array[i]==100){
            counter++;
        }
        else{
            //continue loop
        }
    }
    
}

void PerfectScore::displayScore(int& counter, int MAX){
    std::cout << "The number of perfect scores was " << counter << " out of " << MAX<< std::endl;
}