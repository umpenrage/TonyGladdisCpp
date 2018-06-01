#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>

class Employee{
public:
    Employee(std::string firstName, std::string lastName, int salary, std::string department);
    Employee();
    void setFirstName(std::string name);
    void setLastName(std::string name);
    void setSalary(int salarySetter);
    void setDepartment(std::string departmentSetter);
    void printReport();
    std::string getFirstName();
    std::string getLastName();
    int getSalary();
    std::string getDepartment();
private:
    std::string firstName;
    std::string lastName;
    int salary=0;
    std::string department;
};


#endif // EMPLOYEE_H_INCLUDED
