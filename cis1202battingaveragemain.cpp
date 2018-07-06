/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 29, 2018, 2:15 PM
 */

#include <cstdlib>
#include <iostream>

#include "Baseball.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Baseball baseball;
    baseball.loadArrays(baseball.playerNum, baseball.atBats, baseball.hits, baseball.runs, baseball.rbis,baseball.batAvg, baseball.playerCount);
    baseball.printStats(baseball.playerNum, baseball.atBats, baseball.hits, baseball.runs, baseball.rbis,baseball.batAvg, baseball.playerCount);
    baseball.returnHighestNLeast(baseball.batAvg, baseball.playerNum, baseball.playerCount);
    
    return 0;
}

