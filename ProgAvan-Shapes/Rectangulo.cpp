#include "Rectangulo.h"
#include "Punto.h"

Rectangulo::~Rectangulo()
{
}

Rectangulo::Rectangulo()
{
	this->a = Punto();
	this->b = Punto();
}

Rectangulo::Rectangulo(Punto a, Punto b)
{
	this->a = a;
	this->b = b;
}

Punto Rectangulo::getA()
{
	return this->a;
}

Punto Rectangulo::getB()
{
	return this->b;
}

double Rectangulo::getArea()
{
	float base = this->a.getX() - this->b.getX();
	float altura = this->a.getY() - this->b.getY();
	return base * altura;
}

void Rectangulo::printData() {
	cout << "Rectangulo con los datos:" << endl;
	cout << "Punto A: " << this->a.getX() << " | " << this->a.getY() << endl;
	cout << "Punto B: " << this->b.getX() << " | " << this->b.getY() << endl;
	cout << "Su area es: " << this->getArea() << endl;
}