#include "Rectangulo.h"
#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
	this->rect = Rectangulo();
}

Cuadrado::~Cuadrado()
{
}


Cuadrado::Cuadrado(Rectangulo rect)
{
	this->rect = rect;
}

double Cuadrado::getArea()
{
	float xAxisPuntoA = this->rect.getA().getX();
	float xAxisPuntoB = this->rect.getB().getX();
	float side = xAxisPuntoA - xAxisPuntoB;
	return side * side;
}

void Cuadrado::printData() {
	cout << "Cuadrado con los datos:" << endl;
	cout << "Punto A: " << this->rect.getA().getX() << " | " << this->rect.getA().getY() << endl;
	cout << "Punto B: " << this->rect.getB().getX() << " | " << this->rect.getB().getY() << endl;
	cout << "Su area es: " << this->getArea() << endl;
}