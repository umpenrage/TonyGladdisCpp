#include <iostream>
#include "Date.h"
#include <iomanip>
using namespace std;

Date::Date(int day, int month, int year)
    : day(day), month(month), year(year){


    }
Date::Date(){
}
void Date::setYear(int yearSetter){
        year =yearSetter;

    }
void Date::setDay(int daySetter){
    if(daySetter>=1 && daySetter<=31){
        day = daySetter;
    }
        else{
            cerr << " Day \""<< daySetter <<"\" is invalid year. Please enter a number between 1 and 31.\n";
        }
}

void Date::setMonth(int monthSetter){
    if(monthSetter >=1 && monthSetter <=12){
        month = monthSetter;
    }
    else{
        cerr << " Month \""<< monthSetter <<"\" is an invalid month. Please enter a number between 1 and 12.\n";
    }
}

int Date::getDay(){

    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
void Date::printDate(){
    cout << setfill('0')<< setw(2) << getMonth() << "\\"<< setfill('0') << setw(2) << getDay() << "\\"<< setfill('0') << setw(4) << getYear() << endl;


}
