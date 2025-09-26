// Practice 03 - Employee Class and Inheritance
// Alfredo Frontera
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

void readFile(const string& filename, vector<HourlyEmployee>& hourlyEmployees, vector<SalariedEmployee>& salariedEmployees) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ','); id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ','); payPerHour = stod(token);
        getline(ss, token, ','); workedHours = stod(token);
        getline(ss, token, ','); yearlyPayment = stod(token);

        if (type == "Hourly") {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        } else if (type == "Salaried") {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}

int main() {
    
    vector<HourlyEmployee> hourlyEmployees;
    vector<SalariedEmployee> salariedEmployees;

    readFile("employee_info.csv", hourlyEmployees, salariedEmployees);

    cout << "Hourly Employees:" << endl;
    for (const auto& emp : hourlyEmployees) {
        cout << "ID: " << emp.getId() 
             << " | Name: " << emp.getName() 
             << " | Pay this period: $" << fixed << setprecision(2) 
             << emp.calculatePay() << endl;
    }
    
    cout << "\nSalaried Employees:" << endl;
    for (const auto& emp : salariedEmployees) {
        cout << "ID: " << emp.getId() 
             << " | Name: " << emp.getName() 
             << " | Pay this period: $" << fixed << setprecision(2) 
             << emp.calculatePay() << endl;
    }

    return 0;
}