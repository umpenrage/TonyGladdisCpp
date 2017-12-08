a#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    unsigned seed = time(0);
    srand(seed);
    const int MAX_NUMBER = 999;
    const int MIN_NUMBER = 0;
    int num1;
    int num2;
    int sum;
    num1 = (rand() % (MAX_NUMBER - MIN_NUMBER +1))+ MIN_NUMBER;//provides the range 0-999 for num1
    num2 = (rand() % (MAX_NUMBER - MIN_NUMBER +1))+ MIN_NUMBER;//provides the range 0-999 for num2
    sum = num1 + num2;//calculates the sum for the comparison to the users answer
    cout << "Please input the answer under the dashed line.\n"<< endl;
    int answer;
    if(num2 > num1){
        cout << "\t\t" <<right<<  setw(5)<<fixed<< num2 << endl;
        cout << "\t\t"<<left <<"+ " <<right<< setw(3) << fixed << num1<< endl;
        cout << "\t\t-----"<<endl;
        cout << "\t\t ";
        cin >> answer;
    }
    else{
        cout << "\t\t" <<right<<  setw(5)<<fixed<< num1 << endl;
        cout << "\t\t"<<left <<"+ " <<right<< setw(3) << fixed << num2<< endl;
        cout << "\t\t-----"<<endl;
        cout << "\t\t ";
        cin >> answer;
    }

    if(answer == sum ){
        cout << "You are correct";
    }
    else{
        cout << "You are not correct, the answer is " << sum;
    }


    return 0;
}
