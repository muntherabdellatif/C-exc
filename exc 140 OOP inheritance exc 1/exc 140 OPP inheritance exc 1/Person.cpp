#include "Person.h"

void Person::setAge(int a)
{
	age = a;
}

void Person::setAddress(string ad)
{
	address = ad;
}

void Person::setNationality(string n)
{
	nationality = n;
}

int Person::getAge()
{
	return age;
}

string Person::getAddress()
{
	return string(address);
}

string Person::getNationality()
{
	return string(nationality);
}

void Person::print()
{
	cout << "\n name:" << name << "\t age: " << age << "\t address:" << address << "\t nationality:" << nationality;
}
