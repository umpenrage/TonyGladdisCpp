#include <iostream>

using namespace std;

int * returnPointerArray(int);
int main(){
	int input=0;
	cout << "How many integer elements : ";
	cin>> input;
	int * ptr1= returnPointerArray(input);
	cout << "Address is " << ptr1 <<endl;

	cin.ignore();
	cin.get();
	delete [] ptr1;
	ptr1 = nullptr;
	return 0;
}

int * returnPointerArray(int input){
	int * ptr2 = nullptr;
	ptr2 = new int[input];
	cout << "Address is " << ptr2 << endl;
	return ptr2;
}