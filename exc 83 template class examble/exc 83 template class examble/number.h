//#pragma once
#include<iostream>
using namespace std;
#ifndef NUMBER_H
#define   NUMBER_H
template <class a, class b>
class number
{
	a x;
	b y;
public:
	number(a A, b B);
	float sum();
};
#endif 
