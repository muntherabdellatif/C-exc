#pragma once
#include<iostream>
using namespace std;

class Person
{
	string name;
	int age;
	string address;
	string nationality;
public:
	void setAge(int a);
	void setAddress(string ad);
	void setNationality(string n);
	int getAge();
	string getAddress();
	string getNationality();
};

