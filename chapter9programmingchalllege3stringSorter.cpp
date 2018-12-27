#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	const int SIZE = 5;
	string name[SIZE];
	for(int i = 0; i < SIZE; i++){
		cout << "Input name : ";
		getline(cin, *(name+i));
	}
	for(int i = 0; i < SIZE; i++){
		cout << *(name + i) << endl;
	}
	
	bool loop=false;
	do{
		loop = false;
		string temp = "";
		for(int i = 0; i<(SIZE -1); i++){
			if(*(name+i)<*(name+i+1)){
				temp = *(name+i);
				*(name+i) = *(name+i+1);
				*(name+i+1)= temp;
				loop = true;
			}
		}
	}while(loop);
	/*for(startScan=0; startScan < (SIZE-1); startScan++){
		minIndex = startScan;
		names = *(name+startScan);
		for(int index =startScan+1 ; index<SIZE ; index++){
			if(*(name+index) < names){
				minIndex = index;
				names = *(name+index);
			}
		}
		*(name + minIndex) = *(name + startScan);
		*(name + startScan) = names;*/
	
	cout << endl;
	for(int i = 0; i < SIZE; i++){
		
		cout << *(name + i) << endl;
	}
	cin.get();
	
	return 0;
}

