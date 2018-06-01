#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;

int main()
{
    Employee employee1("Mark", "Umpenhour", 41230, "Administration");

    Employee employee2("Jeff", "Turtle", 78000, "Management");
    int raiseEmployee1 = employee1.getSalary()*1.10;
    employee1.setSalary(raiseEmployee1);

    int raiseEmployee2 =employee2.getSalary()*1.10;
    employee2.setSalary(raiseEmployee2);
    employee1.printReport();
    employee2.printReport();
    Employee employee3;
    employee3.printReport();
}
