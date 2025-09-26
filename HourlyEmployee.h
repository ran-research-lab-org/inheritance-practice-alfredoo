// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
private:
    double payPerHour;
    double workedHours;

public:
    HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours);

    double calculatePay() const override;
    
    double getPayPerHour() const;
    double getWorkedHours() const;
    int getId() const { return id; }
};

#endif