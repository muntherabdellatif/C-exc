#include "Employee.h"

void Employee::setSalary(int s)
{
	salary = s;
}

void Employee::setRank(string r)
{
	rank = r;
}

void Employee::setJob(string j)
{
	job = j;
}

int Employee::getSalary()
{
	return salary;
}

string Employee::getRank()
{
	return string(rank);
}

string Employee::getJob()
{
	return string(job);
}

void Employee::print()
{
	Person::print();
	cout << "\n salary :" << salary << "\trank:" << rank << "\t job:" << job;
}
