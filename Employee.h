// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    std::string type;

public:
    Employee(const std::string& name, int id, const std::string& type, 
             double payPerHour = 0, double workedHours = 0, double yearlyPayment = 0);

    virtual ~Employee() {}

    virtual double calculatePay() const = 0;

    std::string getType() const;
    std::string getName() const;
};

#endif