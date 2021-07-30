#pragma once
#include "Person.h"
class Studant :
    public Person
{
    int studant_level;
    string specilaization;
    float GPA;
public:
    void setStudant_level(int l);
    void setSpecilaization(string s);
    void setGPA(float gpa);
    int getStudant_level();
    string getSpecilaization();
    float getGPA();
};

