#include "Colleccion.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
#include <list>

using namespace std;

Colleccion::Colleccion()
{
	for (int i = 1; i < 4; i++)
	{
		this->shapes.push_back(new Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i))));
	}
	for (int i = 3; i < 7; i++)
	{
		Rectangulo rect = Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i)));
		this->shapes.push_back(new Cuadrado(rect));
	}
	for (int i = 0; i < 3; i++)
	{
		this->shapes.push_back(new Circulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), this->getRandomNumber(i)));
	}
}

Colleccion::~Colleccion()
{
	this->shapes.clear();
}

list<IFigure*> Colleccion::getShapes() {
	return this->shapes;
}

double Colleccion::getTotalArea()
{
	double totalArea = 0.0f;

	for (auto it : this->shapes)
	{
		totalArea += it->getArea();
	}

	/*
	list<IFigure*>::iterator i = this->shapes.begin();
	while (i != this->shapes.end())
	{
		totalArea += (*i)->getArea();
		this->shapes.erase(i);
		i++;
	}
	*/
	return totalArea;
}

double Colleccion::getRandomNumber(int cte) {
    double f = (double)rand() / RAND_MAX;
    return ((cte * 0.1f) + f * ((cte) - (cte * 0.01f))) * 10;
}
