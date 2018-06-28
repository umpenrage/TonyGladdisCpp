/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Monkey.h
 * Author: Java-programming
 *
 * Created on June 20, 2018, 2:25 PM
 */

#ifndef MONKEY_H
#define MONKEY_H
class Monkey{
public:
    explicit Monkey();
    void inputInfo(int [][7], int MAX);
    void mostFood(int, int, int);
    void leastFood(int, int, int);
    void displaySummary();
    double getAvg();
    void setAvg(double);
    void setMostMonEater(int);
    int getMostMonEater();
    void setLeastMonEater(int);
    int getLeastMonEater();
    void calcAvg(int [][7], int MAX);
    void setLeast(int);
    int getLeast();
    void setMost(int);
    int getMost();
private:
    double averageFoodEaten=0;
    int mostFoodEaten=0;
    int leastFoodEaten=0;
    int mostEatenMonkey=0;
    int leastEatenMonkey=0;
};


#endif /* MONKEY_H */

