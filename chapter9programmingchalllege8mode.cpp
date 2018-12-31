#include <iostream>
int modeFinder(int *, int);
using namespace std;
int main(){
	int SIZE = 14;
	int arrayInt[] ={1,2,2,2,8,7,7,8,8};
	int mode = modeFinder(arrayInt,SIZE);
	if(mode == -1){
		cout <<"There is not a mode." << endl;
	}
	else{
		cout << "The mode is " << modeFinder(arrayInt, SIZE) << endl;
	}
	cin.get();
	
	return 0;
}

int modeFinder(int *array, int size){
	int mode;

	int currentMode = 0;
	int countMode = 0;
	int countCompare = 0;

	for(int i = 0; i < (size-1); i++){
		currentMode = *(array+i);
		
		for(int j = i+1; j<size; j++){
			
			if(*(array+j)==currentMode){
				countMode++;
			}
		}
		if((countMode > countCompare) && (i<size-1)){
			mode = currentMode;
			countCompare = countMode;
			
		}
		else{
			//do nothing
		}
		
		countMode = 0;
		
	}

	if(countCompare==0){
		return -1;
	}
	else{
		return mode;
	}
}