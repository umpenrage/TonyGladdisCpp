/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "MagicNumbers.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>


MagicNumbers::MagicNumbers(){
    
}
void MagicNumbers::calcTotal(int n){
   total = ((1+n*n)/2)*n; 
}
int MagicNumbers::getTotal(){
    return total;
}

void MagicNumbers::readSquare(int n, int square[][SIZE]){
    int count = 0;
    std::cout<< "Matrix Size = " << n << std::endl;
    calcTotal(n);
}

void MagicNumbers::printSquare(int n, int square[][SIZE]){
    int count = 0;    
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            std::cout<<std::setw(2)<< std::setfill('0')<<square[i][j] << " " ;
            count++;
            if(count==n){
                std::cout<<std::endl;
                count=0;
            }
        }
    }
}

bool MagicNumbers::rowEqualTotal(int n, int square[][SIZE]){
    bool rowEqualsTotal=true;
    int totalArray=0;
   
    

        for(int i =0; i<n; i++){
            for(int j=0; j<n;j++){
                totalArray += square[i][j];
            }
            if(totalArray != getTotal()){
                i=n;
                rowEqualsTotal=false;
            }
            else{
               totalArray = 0; 
            }
    }
    
    return rowEqualsTotal;
}

bool MagicNumbers::colEqualTotal(int n, int square[][SIZE]){
    bool colEqualsTotal=true;
    int totalArray=0;
   
    

        for(int i =0; i<n; i++){
            for(int j=0; j<n;j++){
                totalArray += square[j][i];
            }
            if(totalArray != getTotal()){
                i=n;
                colEqualsTotal=false;
            }
            else{
               totalArray = 0; 
            }
    }
    return colEqualsTotal;
    //if there is not a stop to the row total by declaring rowequalstotal to false then 
    //the method returns true.
}
bool MagicNumbers::checkDiagonal(int n, int square[][SIZE]){
    int diag1Total=0;
    int diag2Total=0;
    int count =0;
    for(int i =n-1; i>=0; i--){
        diag1Total +=square[i][i];
        count++;
        if(count ==n && diag1Total != getTotal()){
            return false;
        }
    }
    count = 0;
    for(int i=0;i<n; i++){
        diag2Total +=square[i][n-i-1];
        count++;
        if(count==n && diag2Total != getTotal()){
            return false;
        }
    }
    return true;

}

bool MagicNumbers::checkMagic(int n, int square[][SIZE]){
    bool checkMagic=true; 
    bool rowEquals = rowEqualTotal(n, square);
    bool colEquals = colEqualTotal(n, square);
    bool diagEquals = checkDiagonal(n, square);
    if(rowEquals && colEquals && diagEquals){
        return checkMagic;
    }
    else{
        checkMagic = false;
        return checkMagic;
    }

}