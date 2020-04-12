#include <iostream>
#include <vector>
#include <limits>
#include "Emp.h"
#include "Salary.h"

using namespace std;

Emp::Emp()
{};

//function to check if data type is string
bool isString(string x)
{
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == ' ')
            continue;
        if(isalpha(x[i]) == false)
            return false;
    }
    return true;
}

//function to check if data type is integer
int checkIfInt(int x)
{
    while(!(cin >> x))
    {
        cout << "Please correct your input...invalid data-type_" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

//function to get input of string data type
string userInputString(string x)
{
    getline(cin >> ws, x);
    while(!isString(x))
    {
        cout << "Please correct your input...invalid data-type_" << endl;
        getline(cin >> ws, x);
    }
    return x;
}

//function to get input of integer data type
int userInputInteger(int y)
{
    y = checkIfInt(y);
    return y;
}

//here we get input from user
//we store input in vector data structure
void Emp::getInfo()
{
    string fName, lName;
    int day, month, year;
    int door, length;
    string street, job, married;

    cout << "How many employee's details would you like to enter?" << endl;
    length = checkIfInt(length);

    numberOfEmployees = length;

    cout << "You are about to enter details for " << length << " employee/s" << endl;
    cout << "Let's begin..." << endl << endl;

    for(int i = 0; i < length; i++)
    {
        cout << "Enter employee first name__" << endl;
        firstName.push_back(userInputString(fName));

        system("cls");
        cout << "Enter employee last name__" << endl;
        lastName.push_back(userInputString(lName));

        system("cls");
        cout << "Enter employee date of birth__" << endl;
        cout << "Day__";
        dayArr.push_back(userInputInteger(day));
        cout << endl;
        cout << "Month__";
        monthArr.push_back(userInputInteger(month));
        cout << endl;
        cout << "Year__";
        yearArr.push_back(userInputInteger(year));
        cout << endl;

        system("cls");
        cout << "Enter employee address__" << endl;
        cout << "Door number__";
        doorNum.push_back(userInputInteger(door));
        cout << endl;
        cout << "Street name__";
        streetAddress.push_back(userInputString(street));
        cout << endl;

        system("cls");
        cout << "Enter marital status__" << endl;
        maritalStatus.push_back(userInputString(married));

        system("cls");
        cout << "Enter job title__" << endl;
        jobTitle.push_back(userInputString(job));
        system("cls");
    }
}

//here we display all details from vectors
void Emp::displayDetails()
{
    for(int i = 0; i < numberOfEmployees; i++)
    {
        cout << "Employee Details for " << firstName[i] << " " << lastName[i] << "->" << endl << endl;
        cout << "First Name        : " << firstName[i] << endl;
        cout << "Last Name         : " << lastName[i] << endl;
        cout << "Date of Birth     : " << dayArr[i] <<
             "-" << monthArr[i] << "-" << yearArr[i] << endl;
        cout << "Address           : " << doorNum[i] << " " <<
             streetAddress[i]  << endl;
        cout << "Marital Status    : " << maritalStatus[i] << endl;
        cout << "Job Title         : " << jobTitle[i] << endl;
        cout << endl;
        cout << "****************************************************" << endl;
    }
}
