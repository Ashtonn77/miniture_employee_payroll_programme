#ifndef EMP_H
#define EMP_H
#include <iostream>
#include <vector>


using namespace std;

//base class
class Emp
{
public:
    Emp();
    //general employee variables
    int numberOfEmployees;
    vector<string> firstName;
    vector<string> lastName;
    vector<int> dayArr;
    vector<int> monthArr;
    vector<int> yearArr;
    vector<string> jobTitle;
    vector<string> maritalStatus;
    vector<int> doorNum;
    vector<string> streetAddress;

    //Salary variables
    vector<int> hoursWorked;
    vector<double> hourlyRate;
    vector<double> salaryPerWeek;

    //employee functions
    void getInfo();
    void displayDetails();

};

#endif // EMP_H
