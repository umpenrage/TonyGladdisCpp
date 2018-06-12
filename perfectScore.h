/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfectScore.h
 * Author: Java-programming
 *
 * Created on June 12, 2018, 3:37 PM
 */

#ifndef PERFECTSCORE_H
#define PERFECTSCORE_H

class PerfectScore{
public:
    explicit PerfectScore(int array[], int MAX);
    void storeData(int array[], int MAX);
    void calcScore(int array[], int MAX, int& counter);
    void displayScore(int& counter, int MAX);


};


#endif /* PERFECTSCORE_H */

