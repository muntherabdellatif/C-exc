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
    Employee() :salary(0), rank("undefined"), job("undefined") {}
    Employee(string n, int a, string add, string na,int s,string r,string j) : Person(n,a,add,na)
    {
        salary = s;
        rank = r;
        job = j;
    }
    void setSalary(int s);
    void setRank(string r);
    void setJob(string j);
    int getSalary();
    string getRank();
    string getJob();
    void print();
};

