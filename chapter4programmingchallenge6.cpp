#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	const double LBS_TO_KG = .453592;

	cout << "Please input the amount of pounds an object weighs: ";

	int pounds;

	cin >> pounds;

	double conversion = static_cast<double>(pounds) * LBS_TO_KG;

	double weight = conversion * 9.8;

	if(weight >= 1000){
		cout << "The object is "  << setprecision(2)<< fixed << showpoint <<  weight <<" newtons.\nThat object is really heavy"<< endl;
	}
	else if(weight < 10){
		cout << "The object is "  << setprecision(2)<< fixed << showpoint << weight <<" newtons.\nThat object is really light"<< endl;
	}
	else{

		cout << "The object is "<< setprecision(2)<< fixed << showpoint << weight <<" newtons.";
	}

	return 0;
}
