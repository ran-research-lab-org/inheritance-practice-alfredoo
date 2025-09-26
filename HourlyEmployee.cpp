// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
    : Employee(name, id, "Hourly"), payPerHour(payPerHour), workedHours(workedHours) {
    // TODO: 
}

double HourlyEmployee::calculatePay() const {
    return payPerHour * workedHours;
}

double HourlyEmployee::getPayPerHour() const {
    return payPerHour;
}

double HourlyEmployee::getWorkedHours() const {
    return workedHours;
}