#include <iostream>
#include <vector>
#include "Emp.h"
#include "Salary.h"

Salary::Salary()
{};

void Salary::getSalary()
{
    int hours;
    double rate;
    double setSalary;
    cout << "You about to calculate the salaries of " << numberOfEmployees << " employee/s" << endl;
    cout << "Let\'s begin" << endl << endl;

    for(int i = 0; i < numberOfEmployees; i++)
    {
        cout << "Enter total hours worked for the week for " <<
             firstName[i] << " " << lastName[i] << "__" << endl;
        cin >> hours;
        hoursWorked.push_back(hours);
        system("cls");

        cout << "Enter rate per hour for " <<
             firstName[i] << " " << lastName[i] << "__" << endl;
        cin >> rate;
        hourlyRate.push_back(rate);
        system("cls");
    }

    for(int j = 0; j < numberOfEmployees; j++)
    {
        setSalary = (hoursWorked[j] * hourlyRate[j]);
        salaryPerWeek.push_back(setSalary);
    }

}

//function to calculate deductions
float deductions(float x, float y)
{
    return x * y;
}

//function to calculate net salary
float calculateNetSalary(float a, float b)
{
    return a - b;
}

void Salary::displaySalaries()
{
    for(int i = 0; i < numberOfEmployees; i++)
    {
        float deduct = deductions(salaryPerWeek[i], tax);
        cout << "Salary Details for " << firstName[i] << " " << lastName[i] << "->" << endl << endl;
        cout << "First Name                  : " << firstName[i] << endl;
        cout << "Last Name                   : " << lastName[i] << endl;
        cout << "Hours Worked                : " << hoursWorked[i] << endl;
        cout << "Rate per Hour               : R" << hourlyRate[i] << endl;
        cout << "Gross Pay                   : R" << salaryPerWeek[i] << endl;
        cout << "Compulsory Tax Contribution : 20%" << endl;
        cout << "Total Deductions            : R" << deduct << endl;
        cout << "Net Pay                     : R" << calculateNetSalary(salaryPerWeek[i], deduct) << endl;
        cout << endl;
        cout << "****************************************************" << endl;
    }

}
