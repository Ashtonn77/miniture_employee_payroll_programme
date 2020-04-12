#ifndef SALARY_H
#define SALARY_H

//derived class as stated in question
class Salary: public Emp
{
public:
    Salary();
    //constant tax amount(20%)
    const double tax = 0.2;
    void getSalary();
    void displaySalaries();
};

#endif // SALARY_H
