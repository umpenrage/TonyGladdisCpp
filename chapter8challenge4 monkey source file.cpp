/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Monkey.h"
#include <iostream>
#include <iomanip>

Monkey::Monkey(){
}

void Monkey::inputInfo(int monkeyArray[][7], int MAX){
    for(int i = 0; i< MAX-4; i++){
        
        std::cout<< "Please input the food for monkey " << i+1 << ": "<<std::endl;
        for(int j=0; j < MAX; j++){
            int input = 0;
            std::cout<< "Day " << j+1 << ": ";
            std::cin >> input;
            monkeyArray[i][j]=input;
            
        }
    }
}

void Monkey::leastFood(int amount1, int amount2, int amount3){
     int leastFood=amount1;
    int monkey=1;

    for(int i=1 ; i<3; i++){
        switch(i){
            case 1: if(amount2<leastFood){
                        leastFood=amount2;
                        monkey=2;
                    }
                    break;  
            case 2: if(amount3<leastFood){
                        leastFood=amount3;
                        monkey=3;
                    }
                    break;  
        }
    }
    
        

    //create the most food and least food functions using the average food, reduces duplication
    switch(monkey){
            case 1: setLeastMonEater(monkey);
                    break;
            case 2: setLeastMonEater(monkey);
                    break;
            case 3: setLeastMonEater(monkey);
                    break;  
    }
     setLeast(leastFood);
}

void Monkey::mostFood(int amount1, int amount2, int amount3){
    int mostFood=amount1;
    int monkey=1;
    
    for(int i=1 ; i<3; i++){
        switch(i){
            case 1: if(amount2>mostFood){
                        mostFood=amount2;
                        monkey=2;
                    }
                    break;  
            case 2: if(amount3>mostFood){
                        mostFood=amount3;
                        monkey=3;
                    }
                    break;  
        }
    }
    
        

    //create the most food and least food functions using the average food, reduces duplication
    switch(monkey){
            case 1: setMostMonEater(monkey);
                    break;
            case 2: setMostMonEater(monkey);
                    break;
            case 3: setMostMonEater(monkey);
                    break;  
    }
     setMost(mostFood);
}
void Monkey::calcAvg(int monkeyArray[][7], int MAX){
    int mon1Amount = 0;
    int mon2Amount = 0;
    int mon3Amount = 0;
    for(int i =0; i < MAX-4; i++){
        for(int j=0; j<MAX; j++ ){
            switch(i){
                case 0: mon1Amount+= monkeyArray[0][j];
                        break;
                case 1: mon2Amount+= monkeyArray[1][j];
                        break;  
                case 2: mon3Amount+=monkeyArray[2][j];
            }
        }
    }
    mostFood(mon1Amount, mon2Amount, mon3Amount);
    leastFood(mon1Amount, mon2Amount, mon3Amount);
    double average = (mon1Amount+mon2Amount+mon3Amount)/3.0;
    setAvg(average);
}
void Monkey::displaySummary(){
    std::cout << "Average Food Eaten : " << std::fixed << std::setprecision(2) << getAvg() <<std::endl;
    std::cout << std::setw(15)<<"Least Food Eaten   : " << std:: setw(5)<< leastFoodEaten << std::setw(5)<<" "<< "Monkey : " << leastEatenMonkey << std::endl;
    std::cout << std::setw(15)<<"Most Food Eaten    : " <<std::setw(5)<< mostFoodEaten <<  std::setw(5) <<" "<< "Monkey : " << mostEatenMonkey << std::endl;
}

double Monkey::getAvg(){
    return averageFoodEaten;
}
void Monkey::setAvg(double input){
    averageFoodEaten=input;
}
void Monkey::setMostMonEater(int input){
    mostEatenMonkey= input;
}
int Monkey::getMostMonEater(){
    return mostEatenMonkey;
}
void Monkey::setLeastMonEater(int input){
    leastEatenMonkey= input;
}
int Monkey::getLeastMonEater(){
    return leastEatenMonkey;
}

void Monkey::setLeast(int input){
    leastFoodEaten=input;
}

int Monkey::getLeast(){
    return leastFoodEaten;
}
void Monkey::setMost(int input){
    mostFoodEaten=input;
}

int Monkey::getMost(){
    return mostFoodEaten;
}