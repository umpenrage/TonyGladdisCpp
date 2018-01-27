#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	int weight;
	const int WEIGHT_LOSE = 4;
	cout << "Please enter your weight : ";
	cin >> weight;
	cout << "Month \t\t\t Weight \t\t\t Pounds Lost"
	 	 << "-------|--------------------------|--------------\n"
	for(int i =0 ; i < 6 ; i++){
		int progress = weight - WEIGHT_LOSE;
		cout << i+1 << " \t\t\t " << setw(3)<< weight << " \t\t\t " << progress;
		weight -=4;
	}


	return 0;
}