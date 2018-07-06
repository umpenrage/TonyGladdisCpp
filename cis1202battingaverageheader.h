/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Baseball.h
 * Author: Java-programming
 *
 * Created on June 29, 2018, 2:17 PM
 */

#ifndef BASEBALL_H
#define BASEBALL_H
#include <string>
class Baseball{
public:
    
    explicit Baseball();
    void loadArrays(int players[], int atBats[], int hits[], int runs[], int rbis[], int batAvg[], int &playerCount);
    void calcBatAvg(int atBats[], int hits[], int batAvg[], int playerCount);
    void printStats(int players[], int atBats[], int hits[], int runs[], int rbis[], int batAvg[], int playerCount);
    std::string category(int batAvg[], int MAX); 
    void returnHighestNLeast(int atBats[], int playerNum[], int playerCount);
    double teamBatAvg(int batAvg[], int playerCount);
    
    
    const static int MAX=20;
    int playerNum[MAX];
    int atBats[MAX];
    int hits[MAX];
    int runs[MAX];
    int rbis[MAX];
    int batAvg[MAX];
    
    int playerCount=0;
};




#endif /* BASEBALL_H */

