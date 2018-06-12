/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 12, 2018, 3:36 PM
 */

#include <cstdlib>
#include "PerfectScore.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int MAX = 10;
    int student1[MAX];
    int counter=0;
    PerfectScore perfectStudent(student1,10);
    perfectStudent.calcScore(student1, MAX, counter);
    perfectStudent.displayScore(counter, MAX);
    return 0;
}

