/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 20, 2018, 2:24 PM
 */

#include <cstdlib>
#include "Monkey.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    const int MAX = 7;
    Monkey monkeyCage;
    int monkeyArray[3][MAX];
    monkeyCage.inputInfo(monkeyArray, MAX);
    monkeyCage.calcAvg(monkeyArray, MAX);

    monkeyCage.displaySummary();
    return 0;
}

