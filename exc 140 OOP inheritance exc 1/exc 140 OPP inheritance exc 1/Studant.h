#pragma once
#include "Person.h"
class Studant :
    public Person
{
    int studant_level;
    string specilaization;
    float GPA;
public:
    Studant():studant_level(0), specilaization("undefined"),GPA(0){}
    Studant(string n, int a, string add, string na,int sl,string s,float gpa):Person(n,a,add,na)
    {
        studant_level = sl;
        specilaization = s;
        GPA = gpa;
    }
    void setStudant_level(int l);
    void setSpecilaization(string s);
    void setGPA(float gpa);
    int getStudant_level();
    string getSpecilaization();
    float getGPA();
    void print();
};

