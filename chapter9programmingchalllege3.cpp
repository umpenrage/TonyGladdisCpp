#include <iostream>
#include <limits>

using namespace std;

void selectionSort(double *, int);
double * createArray(int );
void inputValues(double *, int);
double returnFinal(double *, int);
double * returnLowestScore(double *, int);
double *adjustedScore(double *, double* , int);
int main(){
	double *scorePtr = nullptr;
	double *finalScoreWDrpped =nullptr;
	int testsAmount = 0;
	cout << "Total amount of tests for the student: ";
	cin >> testsAmount;
	cin.ignore();

	double *testPointer = createArray(testsAmount);

	inputValues(testPointer, testsAmount);
	cout << "Finding lowest score" << endl<<endl;
	scorePtr = returnLowestScore(testPointer, testsAmount);
	cout << "Lowest Score is : " << *scorePtr << endl<<endl;
	double testScore =returnFinal(testPointer, testsAmount);

	cout << "Final Score: " << testScore << endl<<endl;
	finalScoreWDrpped = adjustedScore(testPointer, scorePtr, testsAmount);
	cout << "Adjusted Score: " << *finalScoreWDrpped << endl<<endl;
	cout << "Sorting scores: " << endl;
	selectionSort(testPointer, testsAmount);//this changes around the address's so the lowest score changes. 
	for(int i=0; i<testsAmount; i++){
		cout << "Test " << i+1 <<" : "<< *(testPointer+i)<< endl;
	}
	cin.get();
	delete [] testPointer;
	testPointer = nullptr;
	return 0;
}
/*
 * createArray creates a new array and then sends back the address to the dynamically created array. 
 */
double * createArray(int input){
	double *ptr = nullptr;
	ptr = new double[input];
	return ptr;
}

/*	selectionSort will use the the selection sort algorithm to sort from lowest to highest. 
 * 
 * 
 * */
void selectionSort(double *array, int size){
	int startScan;
	int minIndex;
	double minElement;
	for(startScan = 0; startScan< (size -1); startScan++){
		minIndex = startScan;
		
		minElement = *(array+startScan);

		//*minElement = *(array+startScan); Currently we have variables pointing to the same memory address. Any changes of value are automatically changed when we update 
		// per the current setup. If we initialize it to (array+startScan) it will start changing the values once the for loop starts. The best Idea is to
		//make minElement a primitive variable.

		for(int index = startScan+1; index < size; index++){
			if(*(array+index) < minElement){//80
				minElement = *(array+index);//80
				minIndex = index;//2
			}
		}
		*(array+minIndex)=*(array+startScan);//80
		*(array+startScan) = minElement;//
		
	}

}

/*
 *inputValues ensures that double values are inputted and validates input  
 * 
 * 
 * 
 * 
 */
 void inputValues(double *array, int size){
	cout << "Please input the values of each test score. \n";
	double score = 0.0;
	for(int i =0; i<size; i++){
		cout << i+1 << " : ";
		bool loop =true;

		do{
			try{
				cin>>score;
				cin.ignore(256,'\n');
				if(cin.fail()){
					bool InputMisMatch=true;
					throw InputMisMatch;
				}
				else{}
				if(static_cast<int>(score)<0 || static_cast<int>(score)>100){
					throw 10;
				}
				else{
					*(array+i) = score;
					loop = false;
				}


			}catch(int x){
				cout << "Error: Invalid Score inputted.\n"<<i+1<<" : ";
			}
			catch(bool InputMisMatch){
				cout << "Error: Invalid input type."<<endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << i+1 <<" : ";
			}

		}while(loop);

	}
}
/*
 * returnFinal will return the final score before the lowest score is dropped
 * 
 * 
 * 
 * 
 * 
 * 
 * */
double returnFinal(double *array, int size){
	double score = 0;
	for(int i = 0; i<size ; i++){
		score += *(array+i);
	}
	score /=static_cast<double>(size);
	return score;
}

double * returnLowestScore(double *array, int size){
	double *ptrReturn=array;//stores the reference location to the first array
	for(int i = 1; i < size; i++){
		if(*ptrReturn > *(array+i)){
			ptrReturn = (array+i);//switches the reference location to the lowest score in the array. Because of this we had to make the sorting the last part of the program
		}
		else{
			//do nothing
		}
	}
	return ptrReturn;//returns the pointer location
}
/*
 * adjustedScore returns the adjusted score which is the final score after the lowest score is dropped. 
 * 
 * 
 */
double * adjustedScore(double *array, double *droppedScore, int size){
	double *score=nullptr;
	
	for(int i = 0; i< size; i++){
		*score+=*(array + i);
		
	}
	*score-=*droppedScore;
	*score /=(size-1);
	return score;
	
}