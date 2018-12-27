#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
void ptrSort(double *, string *, int size);
void storeInfo(double *, string *, int size);
int main(int argc, char **argv)
{
	const int SIZE = 5;
	string name[SIZE];
	double array[SIZE];
	storeInfo(array, name,SIZE);
	for(int i = 0; i < SIZE; i++){
		cout << *(name + i) << endl;
	}
	
	ptrSort(array,name,SIZE);
	cout << endl;
	for(int i = 0; i < SIZE; i++){
		
		cout << *(name + i) << endl;
		cout << *(array+i)<<endl;
	}
	cin.get();
	
	return 0;
}

void ptrSort(double *array, string * names, int size){
		bool loop=false;
	do{
		loop = false;
		string temp = "";
		double scoreTemp = 0;
		for(int i = 0; i<(size -1); i++){
			if(*(names+i)>*(names+i+1)){
				temp = *(names+i);
				scoreTemp = *(array+i);
				
				*(names+i) = *(names+i+1);
				*(array+i)= *(array+i+1);
				
				*(names+i+1)= temp;
				*(array+i+1)=scoreTemp;
				
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
}
void storeInfo(double *array, string *names, int size){
	for(int i = 0; i < size; i++){
		cout << "Input name "<<i+1<<" : ";
		getline(cin, *(names+i));
		cout << "Input Score " <<i+1 << " : ";
		//need to add something to ensure proper validation of test scores. 
		cin>>*(array+i);
		cin.ignore();
	}
}