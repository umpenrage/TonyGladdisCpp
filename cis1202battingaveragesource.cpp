/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Baseball.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
Baseball::Baseball(){

}
void Baseball::loadArrays(int players[], int atBats[], int hits[], int runs[], int rbis[], int batAvg[], int &playerCount){
    std::ifstream inputData;
    inputData.open("C:\\Users\\Java-programming\\Desktop\\cis 1202\\Assignment1\\BaseballStats.txt");
    playerCount=0;
    while(!inputData.eof()){
        inputData>>players[playerCount];
        inputData>>atBats[playerCount];
        inputData>>hits[playerCount];
        inputData>>runs[playerCount];
        inputData>>rbis[playerCount];
        calcBatAvg(atBats, hits, batAvg, playerCount);
        playerCount++;
    }
}
void Baseball::calcBatAvg(int atBats[], int hits[], int batAvg[], int playerCount){
    for(int i = playerCount; i <= playerCount ; i++){
        batAvg[i]=round((static_cast<double>(hits[i])/atBats[i])*1000);
       }
}

void Baseball::printStats(int players[], int atBats[], int hits[], int runs[], int rbis[], int batAvg[], int playerCount){
    std::cout << std::setw(8)<<"NAMES " << std::setw(8)<<"AT BATS "<<std::setw(6)<<"HITS "<<std::setw(8)<<"RUNS "<<std::setw(7)<<"RBIs " <<std::setw(9)<<"BAT AVG "<<std::setw(9)<< "Comment" <<std::endl;
    for(int i = 0; i < playerCount; i++){
        
        std::cout << std::setw(4)<<players[i] <<std::setw(8)<< atBats[i] <<std::setw(8)<< hits[i] << std::setw(8)<< runs[i] << std::setw(8)<<rbis[i] << std::setw(8)<< batAvg[i] << std::setw(3)<<" "<< category(batAvg,i)<< std::endl;
    }
}

std::string Baseball::category(int batAvg[], int playerCount){
    std::string category=" ";
    if(batAvg[playerCount]>=500 && batAvg[playerCount]<=1000){
        category=" World Series";
    }
    else if(batAvg[playerCount]>=300 &&batAvg[playerCount] <=499){
        category = " Farm League";
    }
    else{
        category = " Little League";
    }
    return category;
}

void Baseball::returnHighestNLeast(int atBats[], int playerNum[], int playerCount){
    int least = atBats[0];
    int leastPlayer = playerNum[0];
    int most = atBats[0];
    int mostPlayer = playerNum[0];
    for(int i =1; i< playerCount; i++){
        if(atBats[i]>most){
            most = atBats[i];
            mostPlayer = playerNum[i];
        }
        else{
            //do nothing
        }
        if(atBats[i] < least){
            least = atBats[i];
            leastPlayer=playerNum[i];
        }
        else{
            //do nothing
        }
    }
    std::cout << "The batting average for the team is :  " << teamBatAvg(atBats, playerCount) << std::endl;
    std::cout << "The player with the best batting average is : " << mostPlayer << " | " << most << std::endl;
    std::cout << "The player with the worst batting average is : " << leastPlayer << " | " << least<< std::endl;
}

double Baseball::teamBatAvg(int batAvg[], int playerCount){
    
    int total = 0;
    for(int i =0; i < playerCount; i++){
        total +=batAvg[i];
    }
    double average=static_cast<double>(total)/playerCount;
    return average;
}