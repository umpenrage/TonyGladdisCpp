#include <iostream>
#include <limits>

using namespace std;

void selectionSort(double *, int);
double * createArray(int );
void inputValues(double *, int);
double returnAverage(double *, int);

int main(){

	int testsAmount = 0;
	cout << "Total amount of tests for the student: ";
	cin >> testsAmount;
	cin.ignore();

	double *testPointer = createArray(testsAmount);

	inputValues(testPointer, testsAmount);

	double testScore =returnAverage(testPointer, testsAmount);

	selectionSort(testPointer, testsAmount);
	
	for(int i=0; i<testsAmount; i++){
		cout << *(testPointer+i)<< endl;
	}
	cout << "Average Score: " << testScore << endl;
	cin.ignore();
	cin.get();



	return 0;
}

double * createArray(int input){
	double *ptr = nullptr;
	ptr = new double[input];
	return ptr;
}


void selectionSort(double *array, int size){
	int startScan;
	int minIndex;
	double minElement;
	for(startScan = 0; startScan< (size -1); startScan++){
		minIndex = startScan;
		
		minElement = *(array + startScan);
		
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

void inputValues(double *array, int size){
	cout << "Please input the values of each test score. \n";
	double score = 0.0;
	for(int i =0; i<size; i++){
		cout << i+1 << " : ";
		bool loop =true;

		do{
			try{
				cin>>score;
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

double returnAverage(double *array, int size){
	double score = 0;
	for(int i = 0; i<size ; i++){
		score += *(array+i);
	}
	score /=static_cast<double>(size);
	return score;
}