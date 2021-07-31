#include "Salaried_Employee.h"

void Salaried_Employee::setBonuse(int b)
{
	bonus = b;
}

void Salaried_Employee::setDeduction(int d)
{
	deductions = d;
}

int Salaried_Employee::getBonus()
{
	return bonus;
}

int Salaried_Employee::getDeduction()
{
	return deductions;
}
