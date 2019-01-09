#pragma once
#include "Punto.h"
#include "IFigure.h"

using namespace std;

class Rectangulo : public IFigure
{
private:
	Punto a;
	Punto b;

public:
	Rectangulo();
	~Rectangulo();
	Rectangulo(Punto a, Punto b);

	Punto getA();
	Punto getB();

	void printData() override;

	double getArea() override;
};


