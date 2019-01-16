#include <stdio.h>
#include <iostream>
#include <string>

/*	Tony Gaddis
 * 
 * Questions 23-28
 * 
 * Uses structures in methods
 * 
 * 
 * 
 * 
 * */
struct TempScale{
	double farenheit;
	double centigrade;
	
};
struct Reading {
	int windSpeed;
	double humidity;
	TempScale temperature;
};
void findReading(Reading &r);
void recordReading(Reading * r);
void showReading(Reading r);
Reading returnReading();
using namespace std;
int main(int argc, char **argv)
{
	Reading weather;
	weather.temperature.farenheit = 72;
	weather.humidity = 95.00;
	weather.windSpeed = 7;
	
	
	cout << "Temperature is " << weather.temperature.farenheit<< ".\n" << "Humidity is " << weather.humidity << ".\n"<<"Windspeed is " << weather.windSpeed << endl;
	showReading(weather);
	findReading(weather);
	showReading(weather);
	cout << "Now using pointer notation:\n\n";
	Reading weather2;
	recordReading(&weather2);
	showReading(weather2);
	Reading weather3 = returnReading();
	showReading(weather3);
	cin.get();
	return 0;
}

void findReading(Reading &r){
	cout << "Please input the temperature in Farenheit: ";
	cin >> r.temperature.farenheit;
	cout << "Please input the humidity: ";
	cin >> r.humidity;
	cout << "Pleast input the windspeed: ";
	cin >> r.windSpeed;
	cin.ignore();
}
void showReading(Reading r){
	cout << "Using the method"<<endl;
	cout << "Temperature is " << r.temperature.farenheit<< ".\n" << "Humidity is " << r.humidity << ".\n"<<"Windspeed is " << r.windSpeed << endl;
}
void recordReading(Reading * r){
	cout << "Please input the temperature in Farenheit: ";
	cin >> r->temperature.farenheit;
	cout << "Please input the humidity: ";
	cin >> r->humidity;
	cout << "Pleast input the windspeed: ";
	cin >> r->windSpeed;
	cin.ignore();
}
Reading returnReading(){
	Reading r;
	cout << "Please input the temperature in Farenheit: ";
	cin >> r.temperature.farenheit;
	cout << "Please input the humidity: ";
	cin >> r.humidity;
	cout << "Pleast input the windspeed: ";
	cin >> r.windSpeed;
	cin.ignore();
	return r;
}