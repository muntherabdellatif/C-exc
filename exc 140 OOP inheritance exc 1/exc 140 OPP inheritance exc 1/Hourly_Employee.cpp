#include "Hourly_Employee.h"

void Hourly_Employee::setWorkingHour(int wh)
{
	workingHour = wh;
}

void Hourly_Employee::setHourRate(int hr)
{
	hourRate = hr;
}

int Hourly_Employee::getWorkingHour()
{
	return workingHour;
}

int Hourly_Employee::getHourRate()
{
	return hourRate;
}

void Hourly_Employee::print()
{
	Employee::print();
	cout << "\n working hour :" << workingHour << "\t hour rate :" << hourRate;
}
