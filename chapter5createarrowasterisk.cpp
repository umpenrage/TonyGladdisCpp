#include <iostream>

using namespace std;

int main()
{
    for(int outer = 0 ; outer <4; outer++){

        for(int inner = 4 ; inner > 0; inner--){
            cout << " ";
        }
        for(int inner3 =0 ; inner3 < outer+1; inner3++ ){
            cout << "*";
        }
        cout << endl;
    }//creates top triangle
        for(int inner2=9 ; inner2 >0; inner2--){
                cout << "*";
            }//creates line

        cout << endl;

        for(int outer = 0 ; outer <4; outer++){

            for(int inner = 4 ; inner > 0; inner--){
                cout << " ";
            }
            for(int inner3 = 4 ; inner3 > outer; inner3--){
                cout << "*";
            }
        cout << endl;
    }//creates bottom triangle

    return 0;
}
