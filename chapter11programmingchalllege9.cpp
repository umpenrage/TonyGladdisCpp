#include <stdio.h>
#include <iostream>
#include <string>
//#include <cctype>

/*	Tony Gaddis
 * 
 * Speaker structure
 * creates a program uses the idea of a structure in order to create  list of speakers and their topics
 * 
 * 
 * */
struct Speaker{
	std::string name;
	std::string number;
	std::string topic;
	double fee;
};
std::string returnCaps(std::string);
Speaker returnSpeaker(std::string, int);
void storeInfo(Speaker *);
using namespace std;
int main(int argc, char **argv)
{
	int speakerAmount=0;
	cout << "How many speakers are there to store: ";
	cin >> speakerAmount;
	cin.ignore();
	Speaker * speakers = nullptr;
	speakers = new Speaker[speakerAmount];
	for(int i = 0; i < speakerAmount; i++){
		storeInfo(&speakers[i]);
	}
	cout << speakers[0].name<<endl;
	cout << speakers[0].topic<<endl;
	cout << speakers[0].number<<endl;
	cout << speakers[0].fee << endl;
	cin.get();
	return 0;
}

std::string returnCaps(string input){
	int strLength = input.size();
	string returnString;
	
	for(int i =0; i < strLength; i++){
		returnString += toupper(input[i]);
	}
	return returnString;
}
void storeInfo(Speaker *speaker){
	 string input;
	 cout << "Please input the Name of the Speaker: ";
	 getline(cin,input);
	 speaker->name = returnCaps(input);
	 cout << "Please input the topic: ";
	 getline(cin,input);
	 speaker->topic = returnCaps(input);
	 cout << "Please input the telephone number: ";
	 getline(cin,input);
	 speaker->number = input;
	 cout << "Please input the fee: ";
	 cin>> speaker->fee;
	 cin.ignore();
}