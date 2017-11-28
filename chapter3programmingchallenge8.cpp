#include <iostream>

using namespace std;

int main()
{
    const double WIDGET = 12.5;
    double weightOfPallet;
    cout << "Please state the weight of the pallet in pounds: ";
    cin >> weightOfPallet;
    double amountOfWidgets = weightOfPallet/WIDGET;
    if(amountOfWidgets == 1 ){
        cout << "There is 1 widget on the pallet";
    }
        else if(amountOfWidgets>0) {
            cout << "There are " << amountOfWidgets << " widgets on the pallet";
        }
    else {
        cout << "There are not any widgets on the pallet";
    }
}
