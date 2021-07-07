#pragma once
#include <iostream>
using namespace std;
#include<fstream>


#ifndef USER_H
#define USER_H
class User
{
	string name;
	string password;
public:
	/* constracter
	User(string, string);*/
	// setter
	void setName(string);
	void setPassword(string);
	// getter
	string getName();
	string getPassword();
	// function
	void printInfo();
	string enterName();
	string enterPassword();
};
#endif
