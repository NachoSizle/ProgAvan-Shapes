#pragma once
#include "Rectangulo.h"

class Cuadrado : public Rectangulo
{
private:
	Rectangulo rect;

public:
	Cuadrado();
	~Cuadrado();
	Cuadrado(Rectangulo rect);
	double getArea() override;
	void printData() override;
};
