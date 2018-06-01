#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(string firstName, string lastName, int salary, string department)
    : firstName(firstName), lastName(lastName), salary(salary), department(department){

    }
Employee::Employee(){
    firstName = "*";
    lastName = "*";
    salary = 0;
    department = "*";


}
void Employee::setFirstName(string fName){

    firstName = fName;

}
void Employee::setLastName(string lName){
    lastName = lName;

}
void Employee::setDepartment(string departmentSetter){
    department = departmentSetter;
}
void Employee::setSalary(int salarySetter){
    if(salarySetter < 0){
        salarySetter = 0;
    }
    salary = salarySetter;

}

string Employee::getFirstName(){
    return firstName;
}
string Employee::getLastName(){
    return lastName;

}
string Employee::getDepartment(){
    return department;
}

int Employee::getSalary(){

    return salary;

}

void Employee::printReport(){
    cout << "First Name : " << getFirstName() << " \n"
         << "Last Name  : " << getLastName() << " \n"
         << "Salary     : " << getSalary() << "\n"
         << "Department : " << getDepartment() << "\n" << endl;


}
