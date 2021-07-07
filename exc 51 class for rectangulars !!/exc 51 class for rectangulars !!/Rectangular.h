#pragma once
#include<iostream>
using namespace std;
#ifndef RECTANGULAR_H
#define RECTANGULAR_H
class Rectangular
{
	float length;
	float width;
	public:
		Rectangular(int l, int w);
		float getWidth();
		float getLength();
		float getArea();
		float getperimeter();
		void printInfo();
		void printShape();
		void setLength(float l);
		void setWidth(float w);
};
#endif // !