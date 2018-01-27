#include <iostream>

using namespace std;

int main()
{
    for(int i =0 ; i <6 ; i++){
        for( int k = 6 ; k >i ; k--){
            cout << " ";
        }
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        for(int k =1 ; k < i ; k ++){
            cout << "*";
        }
        cout <<"\n";
    }
    for(int i =0 ; i <4; i++){
        for(int k = i+1 ; k>-1 ; k--){
            cout << " ";
        }
        for(int h =i  ; h <4 ; h++){
            cout << "*";
        }
        for(int l=3 ; l > i; l--){
            cout << "*";
        }
        cout<< endl;
    }
}
