#include"Person.h"
#include"Employee.h"
#pragma once
class Salaried_Employee :
    public Employee
{
    int bonus;
    int deductions;
public:
    void setBonuse(int b);
    void setDeduction(int d);
    int getBonus();
    int getDeduction();
};

