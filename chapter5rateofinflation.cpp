#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double inflationRate;
    const int ONE_THOUSAND_DOLLARS=1000;
    const int PROJECTION_YEARS = 10;

    cout << "Please input the inflation rate, i.e 7.25, from 1-15 : "<< endl;
    cin >> inflationRate;
    while(inflationRate < 1 || inflationRate >15){
        cout << "Invalid range. Please input a number with in the range 1-15 : ";
        cin >> inflationRate;
    }
    double inflationRateAdj= inflationRate/100;//converts inflation rate into decimal form
    double inflationRateMultiple = 1+inflationRateAdj;
    cout << "Year \t\t\t Inflation on 1,000 USD " << endl;
    cout << "----------------------------------------------------"<< endl;
    for(int i =0 ; i < PROJECTION_YEARS; i++){
        cout << right << setw(2)<< i+1 << " \t\t\t\t " << right << setw(8) << fixed << setprecision(2) << 1/pow(inflationRateMultiple,i) * ONE_THOUSAND_DOLLARS << endl;
    }
}
