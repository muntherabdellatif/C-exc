#pragma once
#include "Person.h"
#include<iostream>
using namespace std;
class Employee :
    public Person
{
    int salary;
    string rank;
    string job;
public:
    void setSalary(int s);
    void setRank(string r);
    void setJob(string j);
    int getSalary();
    string getRank();
    string getJob();
};

