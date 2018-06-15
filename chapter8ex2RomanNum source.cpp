/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "RNumConvert.h"
#include <string>
void RNumConvert::storeData(int array[], int MAX){
    int input = 0;
    std::cout << "Please input values for " << MAX << " entries. "<<std::endl;
    
    for(int i =0; i < MAX ; i++ ){
        std::cout<< i+1 << " : ";
        std::cin>>input;
        if(input <1 || input >20){
                bool loop = true;
                while(loop){
                    std::cout << "Invalid input. Please input an integer 1-20 : ";
                    std::cin>>input;
                    if(input>=1 && input <=20){
                        loop=false;
                    }
                    else{
                        //continue loop
                    }
                }
            }
                         
            array[i]=input;
        }
}



void RNumConvert::convert2RN(int array[],std::string array1[], int MAX){

    int count4 = 0;
    std::string convert="";
    
    for(int i = 0; i<MAX; i++){
        int input = array[i];
        while(input >0){
            
                //this loop will determine what Characters to add to the covert
                //variable
                if(input-10 >=0){
                    input-=10;
                    convert+="X";

                }
                else if(input-9==0){
                    input-=9;
                    convert+="IX";
                }
                else if(input - 5 >=0){
                    input -=5;
                    convert+="V";
                }
                else if(input -1 >=0){
                    if(input-4==0){
                        input -=4;
                        convert+="IV";                       
                    }
                    else{
                        input -=1;
                        convert+="I";                        
                    }

                }
            
        }
            array1[i]=convert;
            convert="";
    }

            

}

void RNumConvert::displayCon(int array[], std::string array1[], int MAX){
    for(int i =0; i<MAX; i++){
        //displays both arrays showing the conversion
        std::cout<<i+1 << " : " << array[i] << " --> " << array1[i]<<std::endl;
    }
}
    
