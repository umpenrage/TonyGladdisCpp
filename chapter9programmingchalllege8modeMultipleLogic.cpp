#include <iostream>
#include <string>
std::string modeFinder(int *, int*, int);
using namespace std;
int main(){
	int SIZE = 12;
	int arrayInt[] ={1,1,2,2,3,3,4,4,4,5,5,5,5};
	int multipleMode[SIZE];
	string mode = modeFinder(arrayInt, multipleMode, SIZE);
	if(stoi(mode) == -1){
		cout <<"There is not a mode." << endl;
	}
	else{
		cout << "The mode is " << modeFinder(arrayInt,multipleMode, SIZE) << endl;
	}
	cin.get();
	
	return 0;
}

string modeFinder(int *array, int * multipleMode, int size){
	int mode;
	int index=0;
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
			if(index>0){
				for(int i = 0; i < index; i++){
					*(multipleMode +i)=0;
					
				}
				index = 0;
			}
			mode = currentMode;
			countCompare = countMode;
			
			
		}
		else if(countMode == countCompare){
			if(index>0){
				*(multipleMode + index) = currentMode;
				index++;
			}
			else{
				*(multipleMode + index) = mode;
				index++;
				*(multipleMode + index) = currentMode;
				index++;
			}
			countCompare = countMode;
		}
		else{
			//do nothing 
		}
		countMode = 0;
		
	}//end of for loop

	if(countCompare==0){
		return to_string(-1);
	}
	else if(index !=0){
		string output="";
		for(int i =0; i<index; i++){
			output+=to_string(*(multipleMode+i)) + " ";
			
		}
		return output;
	}
	else{
		return to_string(mode);
	}
	
}