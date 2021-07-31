#pragma once
#include<iostream>
using namespace std;
class Shape
{
	string color;
public:
	virtual void drow() = 0;
	virtual void erase() = 0;
	virtual float getArea() = 0;
};

