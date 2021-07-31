#include "Circle.h"

int Circle::Counter = 0;

void Circle::drow()
{
	cout << "the circle was drown" << endl;
}

void Circle::erase()
{
	cout << " the circle was erased" << endl;
}

float Circle::getArea()
{
	return pi*radius*radius;
}

int Circle::getCounter()
{
	return Counter;
}
