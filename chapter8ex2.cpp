/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Java-programming
 *
 * Created on June 13, 2018, 2:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * The purpose of this program is to convert integer values into roman numerals.
 */
int main(int argc, char** argv) {
    int input=0;
    int inputs[10];
    string outPut[10];
    int counter=0;
    bool loop = true;
    while(loop){
        int count4 = 0;
        string convert="";
        cout << "Please input an integer 1 to 20 : ";
        cin >> input;
        if(input <1 || input >20){
            if(input ==-1){
                loop = false;
            }
            else{
                cout<< "Invalid input";
            }
        }
        else{
            inputs[counter]=input;
            while(input > 0){
                //this loop will determine what Characters to add to the covert
                //variable
                if(input -10 >=0){
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
            
                outPut[counter]=convert;
                counter++;
            }
        }
    
    for(int i =0; i<counter; i++){
        //displays both arrays showing the conversion
        cout<<i+1 << " : " << outPut[i] << " --> " << inputs[i]<<endl;
    }
        
        
        
    return 0;
    }

