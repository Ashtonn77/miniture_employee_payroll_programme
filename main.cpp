#include <iostream>
#include <vector>
#include "Emp.h"
#include "Salary.h"

using namespace std;

int main()
{
    //created object from the Salary class that inherits everything from the Emp class
    Salary bothClasses;

    int option;
    cout << "Welcome to Richfield\'s employee database - Payroll System..." << endl;
    do
    {
        cout << endl;
        cout << "Enter option number..." << endl << endl;
        cout << "1. Input employee general information." << endl;
        cout << "2. Calculate employees salaries." << endl;
        cout << "3. Display employees in database - general information." << endl;
        cout << "4. Display employees in database - salaries." << endl;
        cout << "5. Display number of employees in database" << endl;
        cout << "6. Clear screen." << endl;
        cout << "0. Quit." << endl;
        cin >> option;

        switch(option)
        {
        case 1:
            system("cls");
            //obtain personal details
            bothClasses.getInfo();
            break;

        case 2:
            system("cls");
            //calculate salaries method
            bothClasses.getSalary();
            break;

        case 3:
            system("cls");
            //method to display personal details
            //checks if anything is in the data structure first
            if(bothClasses.firstName.empty())
            {
                cout << "I\'m sorry...there\'s nothing in the database to display :(\n" <<
                     "Please select option 1 first and input some details." << endl;
                continue;
            }
            bothClasses.displayDetails();
            break;

        case 4:
            system("cls");
            //method to display salaries
            //checks if anything is in the data structure first
            if(bothClasses.hoursWorked.empty() || bothClasses.firstName.empty())
            {
                cout << "I\'m sorry...there\'s nothing in the database to display :(\n" <<
                     "Please select option 1, then option 2, and input some details." << endl;
                continue;
            }
            bothClasses.displaySalaries();
            break;

        case 5:
            system("cls");
            //display how many employees in database
            cout << "There are currently " << bothClasses.numberOfEmployees << " employee/s in database." << endl;
            break;

        case 6:
            //clear screen
            system("cls");
            break;

        case 0:
            system("cls");
            //exit
            cout << "Program Terminated!!!" << endl;
            exit(0);
            break;

        default:
            system("cls");
            cout << "Invalid input :(" << endl;
        }
    }
    while(option != 0);

    return 0;
}
