#include "Studant.h"

void Studant::setStudant_level(int l)
{
	studant_level = l;
}

void Studant::setSpecilaization(string s)
{
	specilaization = s;
}

void Studant::setGPA(float gpa)
{
	GPA = gpa;
}

int Studant::getStudant_level()
{
	return studant_level;
}

string Studant::getSpecilaization()
{
	return string(specilaization);
}

float Studant::getGPA()
{
	return GPA;
}
