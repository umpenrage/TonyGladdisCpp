/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 11, 2018, 2:32 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct Car{
    string make;
    string model;
    int year;
    double cost;
    
    Car(){
        make = model = ""; 
        year=cost=0;
        
    }
    Car(string mk, string md, int yr, double c){
        make =mk;
        model = md;
        year = yr;
        cost=c;
        
    }
};

/*
 * 
 */
int main(int argc, char** argv) {

    Car car1("Honda", "Civic", 1997, 2033);
    car1.model = "Camry";
    cout << car1.model<<endl;
    
    Car cars[25];
    cars[0].cost = 23440;
    cars[0].make= "BMW";
    cars[0].model ="330i";
    cars[0].year = 2015;
    cout << cars[0].make << endl;
    
    for(int i = 0; i<2; i++){
        cout << "Car "<<i+1<<" : " << cars[i].make<< " " <<cars[i].model <<" "<< cars[i].year 
            <<" "<< cars[i].cost <<" " << endl;
    }
    return 0;
}

