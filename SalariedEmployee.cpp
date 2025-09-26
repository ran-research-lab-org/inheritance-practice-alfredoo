// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
    : Employee(name, id, "Salaried"), yearlyPayment(yearlyPayment) {
    // TODO: 
}

double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26.0;
}

double SalariedEmployee::getYearlyPayment() const {
    return yearlyPayment;
}