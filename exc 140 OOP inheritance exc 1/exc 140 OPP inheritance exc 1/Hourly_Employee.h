#pragma once
#include "Employee.h"
class Hourly_Employee :
    public Employee
{
    int workingHour;
    int hourRate;
public:
    Hourly_Employee() :workingHour(0), hourRate(0) {}
    Hourly_Employee(string n, int a, string add, string na, int s, string r, string j,int wh, int hr):Employee(n,a,add,na,s,r,j)
    {
        workingHour = wh; hourRate = hr;
    }
    void setWorkingHour(int wh);
    void setHourRate(int hr);
    int getWorkingHour();
    int getHourRate();
    void print();
};

