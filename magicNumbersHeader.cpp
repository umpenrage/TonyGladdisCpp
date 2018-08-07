/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MagicNumbers.h
 * Author: Java-programming
 *
 * Created on July 24, 2018, 2:35 PM
 */

#ifndef MAGICNUMBERS_H
#define MAGICNUMBERS_H

class MagicNumbers{
public:
    explicit MagicNumbers();
    const static int SIZE=90;
    void readSquare(int n, int square[][SIZE]);
    void printSquare(int n, int square[][SIZE]);
    bool checkMagic(int n, int square[][SIZE]);
    void calcTotal(int n);
    
    int getTotal();
private:
    
    bool diagonalEqualTotal(int n, int square[][SIZE]);
    bool rowEqualTotal(int n, int square[][SIZE]);
    bool colEqualTotal(int n, int square[][SIZE]);
    bool checkDiagonal(int n, int square[][SIZE]);
    int total=0;
};

#endif /* MAGICNUMBERS_H */

