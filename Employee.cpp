// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type, 
                   double payPerHour, double workedHours, double yearlyPayment)
    : name(name), id(id), type(type) {
    // TODO: 
}

std::string Employee::getType() const {
    return type;
}

std::string Employee::getName() const {
    return name;
}