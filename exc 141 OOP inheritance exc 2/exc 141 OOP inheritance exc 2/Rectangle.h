#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
    static int Counter;
    float length;
    float width;
public:
    Rectangle() :length(0), width(0){ Counter++; }
    Rectangle(float l, float w) :length(l), width(w) { Counter++; }
    void drow();
    void erase();
    float getArea();
    static int getCounter();
};

