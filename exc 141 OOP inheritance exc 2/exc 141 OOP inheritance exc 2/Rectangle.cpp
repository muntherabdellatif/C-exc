#include "Rectangle.h"

int Rectangle::Counter = 0;

void Rectangle::drow()
{
	cout << " the rectangle is drown " << endl;
}

void Rectangle::erase()
{
	cout << " the rectangle is erased " << endl;
}

float Rectangle::getArea()
{
	return length*width;
}

int Rectangle::getCounter()
{
	return Counter;
}




