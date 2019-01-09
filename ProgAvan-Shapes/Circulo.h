#pragma once
#include "Punto.h"
#include "IFigure.h"
class Circulo: public IFigure
{
public:
	
private:
	Punto center;
	float ratio;

public:
	Circulo();
	~Circulo();
	Circulo(Punto center, float ratio);
	double getArea() override;
	void printData() override;
};
