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
	Person():name("undefined"),age(0),address("undefined"),nationality("undefined"){}
	Person(string n,int a,string add,string na):name(n), age(a), address(add), nationality(na) {}
	void setAge(int a);
	void setAddress(string ad);
	void setNationality(string n);
	int getAge();
	string getAddress();
	string getNationality();
	void print();
};

