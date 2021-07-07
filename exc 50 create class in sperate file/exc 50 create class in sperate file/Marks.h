#include <iostream>
#pragma once
using namespace std;

#ifndef MARKS_H
#define MARKS_H
class Marks
{
	string name;
	float mark1, mark2, mark3;
public:
	Marks(string c, float m1, float m2, float m3);
	float Average();
	string getName();
};
#endif