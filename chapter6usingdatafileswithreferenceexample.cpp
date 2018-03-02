#include <iostream>
#include <fstream>

using namespace std;
void readFile(ifstream&);//fstream arguments are not copyable. they must use pass by reference.
int main() {

	ifstream dataIn;
	dataIn.open("C:\\Users\\Java-programming\\Desktop\\weather.dat");
	if (dataIn.fail()){
		cout << "Error opening file\n";
	}
	else {
		readFile(dataIn);
		dataIn.close();
	}
	cin.get();
	return 0;
}

void readFile(ifstream &file) {
	int temp;

	while (file >> temp) {
		cout << temp << " ";
		cout << endl;
	}
	

}
