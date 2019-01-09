#pragma once
#include <iostream>
using namespace std;

class IFigure   // An interface class
{
public:
	virtual double getArea() = 0;
	virtual void printData() = 0;
};