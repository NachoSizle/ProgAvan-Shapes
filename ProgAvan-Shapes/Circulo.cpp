#include "math.h"
#include "Circulo.h"
#include "Punto.h"

Circulo::Circulo()
{
	this->ratio = 0.0f;
    this->center = *new Punto();
}

Circulo::~Circulo()
{
}

Circulo::Circulo(Punto p, float r)
{
	this->ratio = r;
	this->center = p;
}

double Circulo::getArea()
{
	return 3.14 * pow(this->ratio, 2);
}

void Circulo::printData() {
	cout << "Circulo con los datos:" << endl;
	cout << "Centro: " << this->center.getX() << " | " << this->center.getY() << endl;
	cout << "Radio: " << this->ratio << endl;
	cout << "Su area es: " << this->getArea() << endl;
}
