#pragma once
#include "Shape.h"
#define pi 22/7
class Circle :
    public Shape
{
    static int Counter;
    float radius;
public:
    Circle() :radius(0) { Counter++; }
    Circle(float r) :radius(r) { Counter++; }
    void drow();
    void erase();
    float getArea();
    static int getCounter();
};

